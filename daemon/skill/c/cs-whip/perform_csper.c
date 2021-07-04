#include <combat.h>

inherit SSERVER;

private string *order = ({
    "牛蹄", "蛇牙", "牛翼", "蛇飛", "牛縱", "蛇貫", "牛瀑", "蛇炎", "牛角", "蛇竄", "牛奔",
});

int perform(object me, object target) {
    int cs_whip, extra_damage, max, my_score, num, six_of_force, target_score, total_damage;
    string target_skill_type;

    // 確認攻擊對象

    if (!target) {
        target = offensive_target(me);
    }

    if (!target || !me->is_fighting(target)) {
        return notify_fail("「牛蛇奧義擊」只能對戰鬥中的對手使用。\n");
    }

    // 計算攻擊次數

    cs_whip = me->query_skill("whip");

    if (cs_whip < 100) {
        return notify_fail("你的牛蛇生死搏不夠熟練，沒辦法使用「牛蛇奧義擊」。\n");
    }

    max = (cs_whip / 50) + 1;

    if (max > 8) {
        max = 8;
    }

    if (me->query_skill_mapped("force") == "six-of-force") {
        six_of_force = me->query_skill("force");
        max += six_of_force / 150;
    }

    // 檢查內力值

    target_skill_type = target->query_skill_type();

    if (100 + (me->force_factor() * max) + (target_skill_type == "whip" ? 0 : 30) > me->query("force")) {
        return notify_fail("你的內力不夠。\n");
    }

    // 狀態

    if (living(target)) {
        int my_gift, my_weapon_exp, target_gift, target_weapon_exp;

        // 自身狀態

        my_gift = (me->query_attr("spi") + me->query_attr("cor") + 130) >> 1;
        my_weapon_exp = me->query_weapon_exp("whip");

        if (!my_weapon_exp && !userp(me)) {
            my_weapon_exp = me->query("combat_exp") >> 2;
        }

        my_score = (me->query("combat_exp") + (my_weapon_exp << 1)) * my_gift;

        // 攻擊對象的狀態

        target_gift = (target->query_attr("int") + target->query_attr("cor") + 130) >> 3;
        target_weapon_exp = target->query_weapon_exp(target_skill_type);

        if (!target_weapon_exp && !userp(target)) {
            target_weapon_exp = target->query("combat_exp") >> 2;
        }

        target_score = (target->query("combat_exp") + target_weapon_exp) * target_gift;
    }

    // 連擊

    message_vision(HIM"$N使出「牛蛇奧義擊」，一招數式擊向$n。\n"NOR, me, target);

    me->add("force", -100);

    if (random(my_score) >= target_score) {
        int damage, extra_rate, idx;
        object weapon = me->query_temp("weapon");

        if (userp(me)) {
            extra_rate = max * -2;

            me->start_cooldown("attack", 2000);
            me->start_cooldown("perform", me->query_career() == "whip" ? 2000 : 3000);
        }

        for (num = 0; num < max; ++num) {
            idx = random(sizeof(order));

            message_vision(HIM"\n牛蛇奧義擊之 "HIB"☆★☆★ "HIC + order[idx] + "式 "HIB"★☆★☆"NOR, me, target);

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

        message_vision(HIW"\n$P收回對$p的連環攻擊，共造成 " + total_damage + " 點傷害！\n"NOR, me, target);

        COMBAT_D->report_status(target, 0);
    } else {
        message_vision(HIW"可是$p一眼就瞥到了$P的破綻，「牛蛇奧義擊」頓時瓦解。\n"NOR, me, target);

        me->start_busy(2);

        return 1;
    }

    // 剋其他職業

    if (target->query("kee") >= 0 && target_skill_type != "whip"
                                  && target->query("combat_exp") < (me->query("combat_exp") << 1)) {
        message_vision(HIC"\n\t\t才剛結束牛蛇奧義擊的攻勢，$N立刻向後躍開！\n"
                       "\t\t突然$N大喝一聲！"HIR"◎◎◎◎"HIC"『牛生蛇死天旋地轉』"HIR"◎◎◎◎\n"NOR, me, target);

        me->add("force", -30);

        my_score = cs_whip + six_of_force;
        target_score = target->query_skill("dodge") + target->query_skill("parry");

        if (random(my_score) > random(target_score)) {
            int damage, rate;

            damage = (my_score >> 4) + random(my_score >> 2);

            if (damage > target->query("gin")) {
                damage = target->query("gin");
            } else {
                rate = 3;
            }

            target->receive_damage("gin", damage, me);
            me->receive_heal("gin", damage >> 1);

            message_vision(HIC"\t\t$n"HIC"一時眼花，不慎中了這一招，精氣受了 "HIC + damage + HIC" 的損失。\n"
                           HIB"\t\t$N順勢吸收了$n"HIB"外溢的精氣，轉化為己用。\n"NOR, me, target);

            if (!rate || random(rate)) {
                extra_damage = (damage >> 2) + random(damage << 2) + 1;

                COMBAT_D->gain_career_exp(me, target, "whip", extra_damage, (: $1 * 3 :));

                target->receive_damage("kee", extra_damage, me);

                if (!rate) {
                    message_vision(HIC"\t\t$p精氣已被吸食一盡，感覺快要失去自主的能力。\n", me, target);
                }

                message_vision(HIR"\t\t在$n"HIR"眼花之際，$N順手發招一掌打中$n"HIR"！\n"
                               HIR"\t\t$n"HIR"受了 "HIY + extra_damage + HIR" 的傷勢！！\n"NOR, me, target);
            }
        } else {
            message_vision(HIC"\t\t$n"HIC"卻已看穿$P"HIC"的動作，早就閃得遠遠的。\n"NOR, me, target);
        }
    }

    // 統計

    if (userp(me) && num >= 8) {
        log_file("statistic/cs-whip", sprintf("%s %d %d vs %d %d %s : %d + %d = %d\n",
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
