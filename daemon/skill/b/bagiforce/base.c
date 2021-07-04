inherit "/std/skill/force";

void create() {
    name = "八極心法";
}

int disable_skill(object me) {
    (__DIR__"exert_hot")->remove_effect(me);
    return 1;
}

mapping query_effect_attr(object me) {
    mapping effect;

    if (me) {
        effect = me->query_temp("killup");

        if (effect) {
            return ([
                "attack"  : effect["attack"],
                "dodge"   : effect["dodge"],
                "parry"   : effect["parry"],
                "timeout" : effect["timeout"] - time(),
            ]);
        }
    }

    return 0;
}
