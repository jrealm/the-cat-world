#include <combat.h>

inherit SSERVER;

private string *order = ({
    "一", "二", "三", "四", "五", "六", "七", "八", "九", "十",
});

int perform(object me, object target) {
    int alltruthsword, extra_damage, max, my_score, num, taiiforce, target_score, total_damage;
    string target_skill_type;

    // 確認攻擊對象

    if (!target) {
        target = offensive_target(me);
    }

    if (!target || !me->is_fighting(target)) {
        return notify_fail("「連環擊」只能對戰鬥中的對手使用。\n");
    }

    // 計算攻擊次數

    alltruthsword = me->query_skill("sword");

    if (alltruthsword < 100) {
        return notify_fail("你的全真劍法不夠熟練，沒辦法使用「連環擊」。\n");
    }

    max = alltruthsword >> 5;

    if (me->query_skill_mapped("force") == "taiiforce") {
        taiiforce = me->query_skill("force");
        max += taiiforce / 100;
    }

    if (max > 10) {
        max = 10;
    }

    // 檢查內力值

    target_skill_type = target->query_skill_type();

    if (100 + (me->force_factor() * max) + (target_skill_type == "unarmed" ? 30 : 0) > me->query("force")) {
        return notify_fail("你的內力不夠。\n");
    }

    // 狀態

    if (living(target)) {
        int my_gift, my_weapon_exp, target_gift, target_weapon_exp;

        // 自身狀態

        my_gift = (me->query_attr("cor") + me->query_attr("kar") + 130) >> 1;
        my_weapon_exp = me->query_weapon_exp("sword");

        if (!my_weapon_exp && !userp(me)) {
            my_weapon_exp = me->query("combat_exp") >> 2;
        }

        my_score = (me->query("combat_exp") + (my_weapon_exp << 1)) * my_gift;

        // 攻擊對象的狀態

        target_gift = (target->query_attr("cps") + target->query_attr("kar") + 130) >> 3;
        target_weapon_exp = target->query_weapon_exp(target_skill_type);

        if (!target_weapon_exp && !userp(target)) {
            target_weapon_exp = target->query("combat_exp") >> 2;
        }

        target_score = (target->query("combat_exp") + target_weapon_exp) * target_gift;
    }

    // 連擊

    message_vision(CYN"$N"CYN"使出全真劍法的「連環擊」，連遞數個招式企圖突擊$n"CYN"！\n"NOR, me, target);

    me->add("force", -100);

    if (random(my_score) >= target_score) {
        int damage, extra_rate;
        object weapon = me->query_temp("weapon");

        if (userp(me)) {
            extra_rate = max * -2;

            me->start_cooldown("attack", 2000);
            me->start_cooldown("perform", me->query_career() == "sword" ? 2000 : 3000);
        }

        for (num = 0; num < max; ++num) {
            message_vision(CYN"\n連環攻擊 第" + order[num] + "式"NOR, me, target);

            damage = COMBAT_D->do_attack(me, target, weapon, TYPE_QUICK, extra_rate);

            if (damage > 0) {
                total_damage += damage;
            }

            if (target->query("kee") < 0 || !me->query_temp("weapon")) {
                break;
            } else if (extra_rate) {
                extra_rate += 2;
            }
        }

        message_vision(HIW"\n$P"HIW"收回對$n"HIW"的連環攻擊，共造成 " + total_damage + " 點傷害！\n"NOR, me, target);

        COMBAT_D->report_status(target, 0);
    } else {
        message_vision(HIW"可是$p"HIW"一眼便識破了$P"HIW"的企圖，並沒有上當。\n"NOR, me, target);

        me->start_busy(2);

        return 1;
    }

    // 剋掌

    if (living(target) && target->query("kee") >= 0
                       && target_skill_type == "unarmed"
                       && target->query("combat_exp") < (me->query("combat_exp") << 1)
                       && me->query_temp("weapon")) {
        message_vision(HIW"\n\t才剛結束連環擊的攻勢，$N"HIW"立刻向後躍開，重新鼓起真勁\n"
                       HIY"\n\t$N"HIY"腳踏錯亂七星步，配合天罡北斗勢，開始急速舞劍！！\n"
                       "\t\t $N"HIY"出劍越來越快，劍劍真勁相連\n"
                       "\t\t突然$N"HIY"大喝一聲，使出了全真絕學\n"NOR
                       HIR"\t\t\t 『七星連珠』"NOR, me, target);

        me->add("force", -30);

        my_score = COMBAT_D->skill_power(me, "sword", SKILL_USAGE_ATTACK) << 1;
        target_score = COMBAT_D->skill_power(target, "parry", SKILL_USAGE_DEFENSE);

        if (random(my_score) > random(target_score)) {
            extra_damage = random(my_score * ((me->query_action_level("alltruthsword") >> 1) + 1) / 3);

            if (extra_damage > 999) {
                extra_damage = 999;
            }

            COMBAT_D->gain_career_exp(me, target, "sword", extra_damage, (: $1 * 3 :));

            extra_damage += COMBAT_D->process_eq_power(me, target, extra_damage);
        }

        if (extra_damage > 0) {
            target->receive_damage("kee", extra_damage, me);

            message_vision("\n"HIY"\t    $n"HIY"想用雙手格檔多重銳勁，但力不從心\n"
                           "\t\t    $n"HIY"哇～的一聲慘叫\n"NOR
                           HIC"\t    七星連珠造成$n"HIY"十分嚴重的"HIR + extra_damage + HIC"傷害\n"NOR, me, target);
        } else {
            message_vision("\n"CYN"結果$p"CYN"閃開了$P"CYN"的『七星連珠』攻擊！\n"NOR, me, target);
        }
    }

    // 統計

    if (userp(me) && num >= 10) {
        log_file("statistic/alltruthsword", sprintf("%s %d %d vs %d %d %s : %d + %d = %d\n",
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

    return 1;
}
