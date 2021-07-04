inherit "/std/skill/force";

void create() {
    name = "神照功";
}

int disable_skill(object me) {
    (__DIR__"exert_powerup")->remove_effect(me);
    return 1;
}

mapping query_effect_attr(object me) {
    mapping powerup;

    if (me) {
        powerup = me->query_temp("powerup");

        if (powerup) {
            return ([
                "attack"  : powerup["attack"],
                "timeout" : powerup["timeout"] - time(),
            ]);
        }
    }

    return 0;
}
