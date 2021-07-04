inherit "/std/skill/force";

void create() {
    name = "拜月心法";
}

int disable_skill(object me) {
    (__DIR__"exert_crazy")->remove_effect(me);
    return 1;
}

mapping query_effect_attr(object me) {
    mapping crazy;

    if (me) {
        crazy = me->query_temp("bye_moon_force_crazy");

        if (crazy) {
            return ([
                "armor"        : crazy["armor"],
                "force_factor" : crazy["force_factor"],
                "timeout"      : crazy["timeout"] - time(),
            ]);
        }
    }

    return 0;
}
