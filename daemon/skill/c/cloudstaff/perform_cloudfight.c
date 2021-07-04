#include <combat.h>

inherit SSERVER;

private string *order = ({
    "一", "二", "三", "四", "五", "六", "七", "八", "九", "十",
});

int perform(object me, object target) {
    int cloudstaff, lotusforce, max, my_score, target_score;
    string target_skill_type;

    // 確認攻擊對象

    if (!target) {
        target = offensive_target(me);
    }

    if (!target || !me->is_fighting(target)) {
        return notify_fail("「風起雲湧」只能對戰鬥中的對手使用。\n");
    }

    // 計算攻擊次數

    cloudstaff = me->query_skill("staff");

    if (cloudstaff < 100) {
        return notify_fail("你的白雲杖法不夠熟練，沒辦法使用「風起雲湧」。\n");
    }

    max = cloudstaff >> 5;

    if (me->query_skill_mapped("force") == "lotusforce") {
        lotusforce = me->query_skill("force");
        max += lotusforce / 100;
    }

    if (max > 10) {
        max = 10;
    }

    // 檢查內力值

    target_skill_type = target->query_skill_type();

    if (100 + (me->force_factor() * max) + (target_skill_type == "blade" ? 30 : 0) > me->query("force")) {
        return notify_fail("你的內力不夠。\n");
    }

    // 狀態

    if (living(target)) {
        int my_gift, my_weapon_exp, target_gift, target_weapon_exp;

        // 自身狀態

        my_gift = (me->query_attr("spi") + me->query_attr("cps") + 130) >> 1;
        my_weapon_exp = me->query_weapon_exp("staff");

        if (!my_weapon_exp && !userp(me)) {
            my_weapon_exp = me->query("combat_exp") >> 2;
        }

        my_score = (me->query("combat_exp") + (my_weapon_exp << 1)) * my_gift;

        // 攻擊對象的狀態

        target_gift = (target->query_attr("int") + target->query_attr("cps") + 130) >> 3;
        target_weapon_exp = target->query_weapon_exp(target_skill_type);

        if (!target_weapon_exp && !userp(target)) {
            target_weapon_exp = target->query("combat_exp") >> 2;
        }

        target_score = (target->query("combat_exp") + target_weapon_exp) * target_gift;
    }

    // 連擊

    message_vision(HIC"$N"HIC"一個急退後躍，拉開了與$n"HIC"間的距離。\n"
                   HIY"只聽$N"HIY"一聲呼嘯，以杖風帶動身法，如急火流星般帶著幻起的數重杖影往$n"HIY"投去！\n"NOR,
                   me, target);

    me->add("force", -100);

    if (random(my_score) >= target_score) {
        int damage, extra_damage, extra_rate, num, total_damage;
        object weapon = me->query_temp("weapon");

        if (userp(me)) {
            extra_rate = max * -2;

            me->start_cooldown("attack", 2000);
            me->start_cooldown("perform", me->query_career() == "staff" ? 2000 : 3000);
        }

        for (num = 0; num < max; ++num) {
            message_vision(CYN"\n風起雲湧 第" + order[num] + "層杖影"NOR, me, target);

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

        message_vision(HIW"\n$P"HIW"收回了對$p"HIW"的杖幕，共造成 " + total_damage + " 點傷害！\n"NOR, me, target);

        COMBAT_D->report_status(target, 0);

        // 統計

        if (userp(me) && num >= 10) {
            log_file("statistic/cloudstaff", sprintf("%s %d %d vs %d %d %s : %d + %d = %d\n",
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
        message_vision(HIW"可是$p"HIW"一眼就瞥到了$P"HIW"的破綻，風起雲湧頓時瓦解。\n"NOR, me, target);

        me->start_busy(2);

        return 1;
    }

    // 剋刀

    if (living(target) && target->query("kee") >= 0
                       && target_skill_type == "blade"
                       && target->query_busy() < 3
                       && target->query("combat_exp") < (me->query("combat_exp") << 1)
                       && me->query_temp("weapon")) {
        message_vision(HIG"\n      $N"HIG"順著連環攻勢的旋風稍微了遠離戰場，並重新舞動杖風、帶動氣流。\n"NOR
                       HIR"\t\t一邊喃喃唸著往生咒，一邊舞杖造成高壓旋風！～\n"
                       HIY"    「阿彌陀佛」"HIR"，$N"HIR"在低喧了佛號後揮動長杖，配合著高壓旋風使出了僧門強式\n"NOR
                       HIC"\t\t\t\t『佛困雲城』\n"NOR, me, target);

        me->add("force", -30);

        my_score = cloudstaff + me->query_skill("buddhism") + me->query_skill("chanting");
        target_score = (target->query_skill("dodge") + target->query_skill("parry")) >> 2;

        if (random(my_score) > random(target_score)) {
            target->start_busy(3);

            message_vision(HIC"\n受到奇異的經文加上強烈旋風的影響，$n"HIC"開始感到頭昏腦脹而且身體沉重！\n"NOR,
                           me, target);
        } else {
            message_vision(HIC"\n可是$p"HIC"頑強抵抗，硬是把$P"HIC"的封鎖突破了！\n"NOR, me, target);
        }
    }

    return 1;
}
