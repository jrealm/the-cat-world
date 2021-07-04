inherit "/std/skill/force";

void create() {
    name = "意寒神功";
}

int disable_skill(object me) {
    (__DIR__"exert_coldpower")->remove_effect(me);
    return 1;
}

mapping query_effect_attr(object me) {
    mapping coldpower;

    if (me) {
        coldpower = me->query_temp("coldpower");

        if (coldpower) {
            return ([
                "armor"   : coldpower["armor"],
                "timeout" : coldpower["timeout"] - time(),
            ]);
        }
    }

    return 0;
}
