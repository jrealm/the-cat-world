#include <combat.h>

inherit SSERVER;

private string *order = ({
    "一", "二", "三", "四", "五", "六", "七", "八",
});

int perform(object me, object target) {
    int max, my_score, pollyforce, target_score, tenderzhi;
    string target_skill_type;

    // 確認攻擊對象

    if (!target) {
        target = offensive_target(me);
    }

    if (!target || !me->is_fighting(target)) {
        return notify_fail("「飛瀑連環指」只能對戰鬥中的對手使用。\n");
    }

    // 計算攻擊次數

    tenderzhi = me->query_skill("unarmed");

    if (tenderzhi < 100) {
        return notify_fail("你的柔虹指法不夠熟練，沒辦法使用「飛瀑連環指」。\n");
    }

    max = (tenderzhi / 50) + 1;

    if (me->query_skill_mapped("force") == "pollyforce") {
        pollyforce = me->query_skill("force");
        max += pollyforce / 150;
    }

    if (max > 8) {
        max = 8;
    }

    // 檢查內力值

    if (100 + (me->force_factor() * max) > me->query("force")) {
        return notify_fail("你的內力不夠。\n");
    }

    // 狀態

    target_skill_type = target->query_skill_type();

    if (living(target)) {
        int my_gift, my_weapon_exp, target_gift, target_weapon_exp;

        // 自身狀態

        my_gift = (me->query_attr("con") + me->query_attr("per") + 130) >> 1;
        my_weapon_exp = me->query_weapon_exp("unarmed");

        if (!my_weapon_exp && !userp(me)) {
            my_weapon_exp = me->query("combat_exp") >> 2;
        }

        my_score = (me->query("combat_exp") + (my_weapon_exp << 1)) * my_gift;

        // 攻擊對象的狀態

        target_gift = (target->query_attr("str") + target->query_attr("per") + 130) >> 3;
        target_weapon_exp = target->query_weapon_exp(target_skill_type);

        if (!target_weapon_exp && !userp(target)) {
            target_weapon_exp = target->query("combat_exp") >> 2;
        }

        target_score = (target->query("combat_exp") + target_weapon_exp) * target_gift;
    }

    // 連擊

    message_vision(HIR"\n$N使出柔虹指法的「"HIC"飛瀑連環指"HIR"」，連遞數個招式企圖突擊$n"HIR"。\n"NOR, me, target);

    me->add("force", -100);

    if (random(my_score) >= target_score) {
        int damage, extra_damage, extra_rate, num, total_damage;
        object weapon = me->query_temp("weapon");

        if (userp(me)) {
            extra_rate = max * -2;

            me->start_cooldown("attack", 2000);
            me->start_cooldown("perform", me->query_career() == "unarmed" ? 2000 : 3000);
        }

        for (num = 0; num < max; ++num) {
            message_vision(HIC"\n飛瀑連環指 第" + order[num] + "式"NOR, me, target);

            damage = COMBAT_D->do_attack(me, target, weapon, TYPE_QUICK, extra_rate);

            if (damage > 0) {
                total_damage += damage;
            }

            if (target->query("kee") < 0) {
                damage = 0;
                break;
            } else if (extra_rate) {
                extra_rate += 2;
            }
        }

        if (damage > 0) {
            damage = COMBAT_D->process_eq_power(me, target, damage);

            if (damage > 0) {
                target->receive_damage("kee", damage);
            } else if (damage < 0) {
                target->receive_heal("kee", -damage);
            }

            extra_damage += damage;
        }

        message_vision(HIW"\n$P收回對$p的飛瀑連環指，共造成 " + (total_damage + extra_damage) + " 點傷害！\n"NOR, me, target);

        COMBAT_D->report_status(target, 0);

        // 統計

        if (userp(me) && num >= 8) {
            log_file("statistic/tenderzhi", sprintf("%s %d %d vs %d %d %s : %d + %d = %d\n",
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
        message_vision(HIW"可是$p看破了$P的企圖，並沒有上當。\n"NOR, me, target);

        me->start_busy(2);
    }

    return 1;
}
