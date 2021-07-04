#include <combat.h>

inherit SSERVER;

private string *order = ({
    "一", "二", "三", "四", "五", "六", "七", "八", "九", "十",
});

int perform(object me, object target) {
    int act, girlforce, girlsword, max, my_score, my_weapon_exp, target_score, target_weapon_exp;
    string target_skill_type;

    // 確認攻擊對象

    if (!target) {
        target = offensive_target(me);
    }

    if (!target || !me->is_fighting(target)) {
        return notify_fail("「小連環」只能對戰鬥中的對手使用。\n");
    }

    // 計算攻擊次數

    girlsword = me->query_skill("sword");

    if (girlsword < 100) {
        return notify_fail("你的玉女劍法不夠熟練，沒辦法使用「小連環」。\n");
    }

    max = (girlsword / 50) - 1;

    if (me->query_skill_mapped("force") == "girlforce") {
        girlforce = me->query_skill("force");
        max += girlforce / 150;
    }

    if (max > 6) {
        max = 6;
    }

    act = (me->query_action_level("girlsword") + 1) / 3;

    if (act) {
        max += random(act + 1);
    }

    // 檢查內力值

    if (100 + (me->force_factor() * max) > me->query("force")) {
        return notify_fail("你的內力不夠。\n");
    }

    // 狀態

    target_skill_type = target->query_skill_type();

    if (living(target)) {
        int my_gift, target_gift;

        // 自身狀態

        my_gift = (me->query_attr("per") + me->query_attr("int") + 130) >> 1;
        my_weapon_exp = me->query_weapon_exp("sword");

        if (!my_weapon_exp && !userp(me)) {
            my_weapon_exp = me->query("combat_exp") >> 2;
        }

        my_score = (me->query("combat_exp") + (my_weapon_exp << 1)) * my_gift;

        // 攻擊對象的狀態

        target_gift = (target->query_attr("kar") + target->query_attr("int") + 130) / 9;
        target_weapon_exp = target->query_weapon_exp(target_skill_type);

        if (!target_weapon_exp && !userp(target)) {
            target_weapon_exp = target->query("combat_exp") >> 2;
        }

        target_score = (target->query("combat_exp") + target_weapon_exp) * target_gift;
    }

    // 連擊

    message_vision(HIY"$N"HIY"使出玉女劍法──小連環，連遞數個招式企圖突擊$n"HIY"！\n"NOR, me, target);

    me->add("force", -100);

    if (random(my_score) >= target_score) {
        int extra_damage, damage, num, total_damage;
        object weapon = me->query_temp("weapon");

        if (userp(me)) {
            me->start_cooldown("attack", 2000);
            me->start_cooldown("perform", me->query_career() == "sword" ? 2000 : 3000);
        }

        for (num = 0; num < max; ++num) {
            message_vision(CYN"\n小連環 第" + order[num] + "式"NOR, me, target);

            damage = COMBAT_D->do_attack(me, target, weapon, TYPE_QUICK);

            if (damage > 0) {
                if (num < 6) {
                    total_damage += damage;
                } else {
                    extra_damage += damage;
                }

                if (num % 3 == 2) {
                    damage = COMBAT_D->process_eq_power(me, target, damage);

                    if (damage > 0) {
                        target->receive_damage("kee", damage);
                    } else if (damage < 0) {
                        target->receive_heal("kee", -damage);
                    }

                    extra_damage += damage;
                }
            }

            if (target->query("kee") < 0 || !me->query_temp("weapon")) {
                break;
            }
        }

        message_vision(HIW"\n$P"HIW"收回對$n"HIW"的連環攻擊，共造成 " + (total_damage + extra_damage) + " 點傷害！\n"NOR, me, target);

        COMBAT_D->report_status(target, 0);

        // 統計

        if (userp(me) && num >= 6) {
            log_file("statistic/girlsword", sprintf("%s %d %d vs %d %d %s : %d + %d = %d\n",
                                                    me->query_id(),
                                                    me->query("combat_exp") / 1000,
                                                    me->query_temp("apply/damage"),
                                                    target->query("combat_exp") / 1000,
                                                    target->query_temp("apply/armor"),
                                                    target->query_busy() ? "x" : "-",
                                                    total_damage,
                                                    extra_damage,
                                                    total_damage + extra_damage));
        }
    } else {
        message_vision(HIW"可是$p"HIW"一眼便識破了$P"HIW"的企圖，並沒有上當。\n"NOR, me, target);

        me->start_busy(2);

        return 1;
    }

    // 剋全真劍法

    if (living(target) && target->query("kee") >= 0
                       && target_skill_type == "sword"
                       && target->query_skill_mapped("sword") == "alltruthsword"
                       && me->query_temp("weapon")) {
        message_vision(HIY"\n$N"HIY"看準了全真劍法的破綻，低身一鑽，試圖利用破綻封住$n"HIY"！\n"NOR, me, target);

        my_score = me->query("combat_exp") + my_weapon_exp;
        target_score = target->query("combat_exp") + target_weapon_exp;

        max = (my_score << 2) / target_score;

        if (max > 4) {
            max = 4;
        }

        if (max > 1) {
            message_vision("結果$p被攻的手足無措，不得動彈！\n", me, target);

            target->start_busy(max);
        } else {
            message_vision("可是$p看破了$P的企圖，並沒有上當。\n", me, target);
        }
    }

    return 1;
}
