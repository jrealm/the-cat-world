inherit "/std/skill/force";

void create() {
    name = "峨嵋心法";
}

int disable_skill(object me) {
    (__DIR__"exert_danceair")->remove_effect(me);
    return 1;
}

mapping query_effect_attr(object me) {
    mapping emei;

    if (me) {
        emei = me->query_temp("emei");

        if (emei) {
            return ([
                "MHP"     : emei["MHP"],
                "timeout" : emei["timeout"] - time(),
            ]);
        }
    }

    return 0;
}
