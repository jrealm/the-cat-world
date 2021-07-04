inherit "/std/skill/force";

void create() {
    name = "太乙先天乾坤功";
}

int disable_skill(object me) {
    (__DIR__"exert_blend")->remove_effect(me);
    return 1;
}

mapping query_effect_attr(object me) {
    mapping taii;

    if (me) {
        taii = me->query_temp("taii");

        if (taii) {
            return ([
                "attack"        : taii["attack"],
                "leech_kee_gin" : taii["leech_kee_gin"],
                "timeout"       : taii["timeout"] - time(),
            ]);
        }
    }

    return 0;
}
