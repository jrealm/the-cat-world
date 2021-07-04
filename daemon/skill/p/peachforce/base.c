inherit "/std/skill/force";

void create() {
    name = "桃花心法";
}

int disable_skill(object me) {
    (__DIR__"exert_defense")->remove_effect(me);
    return 1;
}

mapping query_effect_attr(object me) {
    mapping defense;

    if (me) {
        defense = me->query_temp("defense");

        if (defense) {
            return ([
                "defense" : defense["defense"],
                "timeout" : defense["timeout"] - time(),
            ]);
        }
    }

    return 0;
}
