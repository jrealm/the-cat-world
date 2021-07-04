inherit "/std/skill/dodge";

void create() {
    name = "七寶天嵐舞";

    actions = ({
        HIC"$n"HIC"腳步輕移，翩翩地轉了個圈，一式「"HIW"翩躚"HIY"長"HIM"袖"HIC"」，雙袖抖摟間避開$N"HIC"的攻勢！\n"NOR,
        HIC"$n"HIC"嫣然一笑，使招「"HIG"抃"HIW"風"HIR"舞"HIW"潤"HIC"」一個轉身逕自舞了起來，飛舞間輕巧閃開$N"HIC"的攻勢！\n"NOR,
        HIC"$n"HIC"雙足輕點騰空而起，「"HIM"鸞"HIG"翔"HIY"鳳"HIG"翥"HIC"」一式似乘風而起，輕巧巧地於空轉迴數折，將$N"HIC"完全拋至身後。\n"NOR,
        HIC"$n"HIC"蓮足輕蹴，一式「"HIG"飛"HIM"鸞"HIG"輕"HIY"鳳"HIC"」嬝嬝婷婷舞空而起，雙袖一揮一納，人已脫出$N攻勢範圍之外！\n"NOR,
        HIC"$n"HIC"雙袖雙飛，颯颯聲中使出「"HIY"翾"HIG"風"HIY"迴"HIW"雪"HIC"」，身似隨風婆娑，飄雪迴旋，使得$N"HIC"完全無法掌握其身影！\n"NOR,
        HIC"$n"HIC"衣袖齊飛，一式「"HIW"輕雲"HIB"蔽"HIY"月"HIC"」，隨袖飛揚幻出憧憧人影，輕笑呵呵間$N"HIC"受眼前幻象所惑，完全無法出手。\n"NOR,
    });
}

int valid_learn(object me) {
    if (me->query("gender") != "女性") {
        return notify_fail("七寶天嵐舞只有女性才能練。\n");
    }

    return 1;
}
