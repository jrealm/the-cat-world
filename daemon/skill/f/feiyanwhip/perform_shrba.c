#include <combat.h>

inherit SSERVER;

private string *order = ({
    " 一 ", " 二 ", " 三 ", " 四 ", " 五 ", " 六 ", " 七 ", " 八 ", " 九 ", " 十 ",
    "十一", "十二", "十三", "十四", "十五", "十六", "十七", "十八",
});

private int reckon(int max, int people) {
    switch (people) {
        case 1:
            return max > 6 ? 6 : max;

        case 2:
            return max > 10 ? 10 : max;

        case 3:
            return max > 14 ? 14 : max;

        default:
            return max > 18 ? 18 : max;
    }
}

int perform(object me, object target) {
    int feiyanwhip, max, multiple, my_score, people, skyevilforce, target_score;
    object *enemy;

    // 確認攻擊對象

    me->clean_up_enemy();

    enemy = me->query_enemy();

    switch (sizeof(enemy)) {
        case 0:
            return notify_fail("「飛燕十八擊」只能在戰鬥中的使用。\n");

        case 1:
            break;

        default:
            multiple = 1;
            break;
    }

    target = 0;

    foreach (object who in enemy) {
        if (living(who)) {
            ++people;

            target_score = who->query("combat_exp");

            if (target_score > max) {
                max = target_score;
                target = who;
            }
        }
    }

    // 計算攻擊次數

    feiyanwhip = me->query_skill("whip");

    if (feiyanwhip < 100) {
        return notify_fail("你的飛燕穿雲鞭不夠熟練，沒辦法使用「飛燕十八擊」。\n");
    }

    max = feiyanwhip >> 5;

    if (me->query_skill_mapped("force") == "skyevilforce") {
        skyevilforce = me->query_skill("force");
        max += skyevilforce >> 5;
    }

    max = reckon(max, people);

    // 檢查內力值

    if (100 + (me->force_factor() * max) > me->query("force")) {
        return notify_fail("你的內力不夠。\n");
    }

    // 狀態

    if (target) {
        int my_gift, my_weapon_exp, target_gift, target_weapon_exp;

        // 自身狀態

        my_gift = (me->query_attr("cps") + me->query_attr("con") + 130) >> 1;
        my_weapon_exp = me->query_weapon_exp("whip");

        if (!my_weapon_exp && !userp(me)) {
            my_weapon_exp = me->query("combat_exp") >> 2;
        }

        my_score = (me->query("combat_exp") + (my_weapon_exp << 1)) * my_gift;

        // 攻擊對象的狀態

        target_gift = (target->query_attr("cor") + target->query_attr("con") + 130) >> 3;
        target_weapon_exp = target->query_weapon_exp(target->query_skill_type());

        if (!target_weapon_exp && !userp(target)) {
            target_weapon_exp = target->query("combat_exp") >> 2;
        }

        target_score = (target->query("combat_exp") + target_weapon_exp) * target_gift;
    } else {
        target = enemy[random(sizeof(enemy))];
    }

    // 連擊

    message_vision("$N使出"HIM"「飛燕十八擊」"NOR"的絕招，舞起無數鞭影，並向敵人狂掃！\n", me, target);

    me->add("force", -100);

    if (random(my_score) >= target_score) {
        int damage, extra_rate, num, total_damage;
        object primary = target, weapon = me->query_temp("weapon");

        if (userp(me)) {
            if (max > 6) {
                extra_rate = (max - 6) * -2;
            }

            me->start_cooldown("attack", 2000);
            me->start_cooldown("perform", me->query_career() == "whip" ? 2000 : 3000);
        }

        for (num = 0; num < max; ++num) {
            message_vision(HIG"\n飛燕十八擊 第" + order[num] + "擊"NOR, me, primary);

            damage = COMBAT_D->do_attack(me, primary, weapon, TYPE_QUICK, extra_rate);

            if (multiple) {
                COMBAT_D->report_status(primary, 0);
            }

            if (damage > 0) {
                total_damage += damage;
            }

            if (primary->query("kee") < 0) {
                enemy -= ({ primary });

                if (!sizeof(enemy)) {
                    break;
                }
            }

            if (extra_rate) {
                extra_rate += 2;
            }

            primary = enemy[random(sizeof(enemy))];

            if (!me->query_temp("weapon")) {
                break;
            }
        }

        message_vision(HIW"\n$P"HIW"收回對敵人的連環攻擊，共造成 " + total_damage + " 點傷害！\n"NOR, me, primary);

        if (!multiple) {
            COMBAT_D->report_status(primary, 0);
        }

        // 統計

        if (userp(me) && num >= 6) {
            log_file("statistic/feiyanwhip", sprintf("%s %d %d vs %d %d %s : %d (%d)\n",
                                                     me->query_id(),
                                                     me->query("combat_exp") / 1000,
                                                     me->query_temp("apply/damage"),
                                                     target->query("combat_exp") / 1000,
                                                     target->query_temp("apply/armor"),
                                                     target->query_busy() ? "x" : "-",
                                                     total_damage,
                                                     num));
        }
    } else {
        message_vision(HIW"可是$n"HIW"看到了鞭影中的空隙，趁機破解了$P"HIW"的連環招式！\n"NOR, me, target);

        me->start_busy(2);
    }

    return 1;
}
