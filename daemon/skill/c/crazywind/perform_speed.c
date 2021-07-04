#include <combat.h>

inherit SSERVER;

private string *order = ({
    " 一 ", " 二 ", " 三 ", " 四 ", " 五 ", " 六 ", " 七 ", " 八 ", " 九 ", " 十 ",
    "十一", "十二", "十三", "十四", "十五", "十六", "十七", "十八",
});

int perform(object me, object target) {
    int crazywind, godlight, max, my_score, target_score;
    string target_skill_type;

    // 確認攻擊對象

    if (!target) {
        target = offensive_target(me);
    }

    if (!target || !me->is_fighting(target)) {
        return notify_fail("「斬空裂風」只能對戰鬥中的對手使用。\n");
    }

    // 計算攻擊次數

    crazywind = me->query_skill("blade");

    if (crazywind < 100) {
        return notify_fail("你的狂風刀法不夠熟練，沒辦法使用「斬空裂風」。\n");
    }

    max = crazywind >> 5;

    if (me->query_skill_mapped("force") == "godlight") {
        godlight = me->query_skill("force");
        max += godlight / 100;
    }

    if (max > 10) {
        max = 10;
    }

    // 剋劍

    target_skill_type = target->query_skill_type();

    if (target_skill_type == "sword") {
        int act = me->query_action_level("crazywind");

        if (act) {
            max += to_int(sqrt(act));
        }

        max += 5 - to_int(sqrt(random(25)));
    }

    // 檢查內力值

    if (100 + (me->force_factor() * max) > me->query("force")) {
        return notify_fail("你的內力不夠。\n");
    }

    // 狀態

    if (living(target)) {
        int my_gift, my_weapon_exp, target_gift, target_weapon_exp;

        // 自身狀態

        my_gift = (me->query_attr("cor") + me->query_attr("con") + 130) >> 1;
        my_weapon_exp = me->query_weapon_exp("blade");

        if (!my_weapon_exp && !userp(me)) {
            my_weapon_exp = me->query("combat_exp") >> 2;
        }

        my_score = (me->query("combat_exp") + (my_weapon_exp << 1)) * my_gift;

        // 攻擊對象的狀態

        target_gift = (target->query_attr("cps") + target->query_attr("con") + 130) >> 3;
        target_weapon_exp = target->query_weapon_exp(target_skill_type);

        if (!target_weapon_exp && !userp(target)) {
            target_weapon_exp = target->query("combat_exp") >> 2;
        }

        target_score = (target->query("combat_exp") + target_weapon_exp) * target_gift;
    }

    // 連擊

    message_vision("$N使出"GRN"「斬風裂空」"NOR"的絕招，舞起無數刀光，並向$n突進！\n", me, target);

    me->add("force", -100);

    if (random(my_score) >= target_score) {
        int damage, extra_damage, extra_rate, num, total_damage;
        object weapon = me->query_temp("weapon");

        if (userp(me)) {
            extra_rate = (max > 10 ? 10 : max) * -2;

            me->start_cooldown("attack", 2000);
            me->start_cooldown("perform", me->query_career() == "blade" ? 2000 : 3000);
        }

        for (num = 0; num < max; ++num) {
            message_vision(HIC"\n裂空快斬 第" + order[num] + "擊"NOR, me, target);

            damage = COMBAT_D->do_attack(me, target, weapon, TYPE_QUICK, extra_rate);

            if (damage > 0) {
                if (num < 10) {
                    total_damage += damage;
                } else {
                    extra_damage += damage;
                }
            }

            if (target->query("kee") < 0 || !me->query_temp("weapon")) {
                break;
            } else if (extra_rate) {
                extra_rate += 2;
            }
        }

        message_vision(HIW"\n$P"HIW"收回對$n"HIW"的連環斬擊，共造成 " + (total_damage + extra_damage) + " 點傷害！\n"NOR, me, target);

        COMBAT_D->report_status(target, 0);

        // 統計

        if (userp(me) && num >= 10) {
            log_file("statistic/crazywind", sprintf("%s %d %d vs %d %d %s : %d + %d = %d\n",
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
        message_vision(HIW"可是$p"HIW"看到了亂刀中的空隙，藉此展開反擊。\n"NOR, me, target);

        me->start_busy(2);
    }

    return 1;
}
