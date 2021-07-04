#include <combat.h>

inherit SSERVER;

private string *order = ({
    "第壹", "第貳", "第參", "第肆", "第伍", "第陸", "第柒", "第捌", "第玖", "第拾", "第零", "最終"
});

int perform(object me, object target) {
    int act, max, my_score, peachforce, tanzhi_shentong, target_score;
    object weapon;
    string target_skill_type;

    // 確認攻擊對象

    if (!target) {
        target = offensive_target(me);
    }

    if (!target || !me->is_fighting(target)) {
        return notify_fail("「引歸十絕」只能對戰鬥中的對手使用。\n");
    }

    // 計算攻擊次數

    tanzhi_shentong = me->query_skill("throwing");

    if (tanzhi_shentong < 100) {
        return notify_fail("你的彈指神通不夠熟練，沒辦法使用「引歸十絕」。\n");
    }

    max = tanzhi_shentong >> 5;

    if (me->query_skill_mapped("force") == "peachforce") {
        peachforce = me->query_skill("force");
        max += peachforce / 100;
    }

    if (max > 10) {
        max = 10;
    }

    act = me->query_action_level("tanzhi-shentong") / 3;

    if (random(act)) {
        max += act;

        if (max > 12) {
            max = 12;
        }
    }

    // 檢查內力值

    if (100 + (me->force_factor() * max) > me->query("force")) {
        return notify_fail("你的內力不夠。\n");
    }

    // 檢查暗器數量

    weapon = me->query_temp("weapon");

    if (weapon->query_amount() < max) {
        return notify_fail("\n你的" + weapon->query("name") + "不夠用了！\n\n");
    }

    // 狀態

    target_skill_type = target->query_skill_type();

    if (living(target)) {
        int my_gift, my_weapon_exp, target_gift, target_weapon_exp;

        // 自身狀態

        my_gift = (me->query_attr("str") + me->query_attr("kar") + 130) >> 1;
        my_weapon_exp = me->query_weapon_exp("throwing");

        if (!my_weapon_exp && !userp(me)) {
            my_weapon_exp = me->query("combat_exp") >> 2;
        }

        my_score = (me->query("combat_exp") + (my_weapon_exp << 1)) * my_gift;

        // 攻擊對象的狀態

        target_gift = (target->query_attr("con") + target->query_attr("kar") + 130) >> 3;
        target_weapon_exp = target->query_weapon_exp(target_skill_type);

        if (!target_weapon_exp && !userp(target)) {
            target_weapon_exp = target->query("combat_exp") >> 2;
        }

        target_score = (target->query("combat_exp") + target_weapon_exp) * target_gift;
    }

    // 連擊

    message_vision(HIW"$N"HIW"使出"HIY"彈指神通"
                   HIW"之「"HIM"引歸"HIC"十絕"HIW"」，連續變幻各種招式，手上暗器直竄$n"HIW"周身！\n"NOR,
                   me, target);

    me->add("force", -100);

    if (random(my_score) >= target_score) {
        int damage, extra_damage, extra_rate, num, total_damage;

        if (userp(me)) {
            extra_rate = (max > 8 ? 8 : max) * -2;

            me->start_cooldown("attack", 2000);
            me->start_cooldown("perform", me->query_career() == "throwing" ? 2000 : 3000);
        }

        for (num = 0; num < max; ++num) {
            message_vision(HIM"\n引歸"HIC + (num < 10 ? "十絕" : "奧義") + " "CYN + order[num] + "式"NOR, me, target);

            damage = COMBAT_D->do_attack(me, target, weapon, TYPE_QUICK, extra_rate);

            if (damage > 0) {
                if (num < 10) {
                    total_damage += damage;
                } else {
                    extra_damage += damage;

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
            } else if (extra_rate) {
                extra_rate += 2;
            }
        }

        message_vision(HIW"\n$P"HIW"收回對$n"HIW"的"HIM"引歸"HIC"十絕"HIW"，共造成 " + (total_damage + extra_damage) + " 點傷害！\n"NOR, me, target);

        COMBAT_D->report_status(target, 0);

        // 統計

        if (userp(me) && num >= 10) {
            log_file("statistic/tanzhi-shentong", sprintf("%s %d %d vs %d %d %s : %d + %d = %d\n",
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
        message_vision(HIW"可是$p"HIW"一眼便識破了$N"HIW"的企圖。\n"NOR, me, target);

        me->start_busy(2);
    }

    return 1;
}
