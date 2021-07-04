inherit "/std/skill/force";

void create() {
    name = "吸星大法";
}

int enable_skill(object me) {
    me->add_temp("apply/leech_kee_force", 2);
    me->add_temp("wp_attack/leech_kee_force", 2);

    return 1;
}

int disable_skill(object me) {
    me->add_temp("apply/leech_kee_force", -2);
    me->add_temp("wp_attack/leech_kee_force", -2);

    (__DIR__"exert_star")->remove_effect(me);

    return 1;
}

mapping query_effect_attr(object me) {
    int timeout;
    mapping effect;

    if (me) {
        effect = me->query_temp("star");

        if (effect) {
            timeout = effect["timeout"] - time();

            if (timeout > 0) {
                return ([
                    "leech_kee_force" : 2,
                    "star"            : "吞蝕天地 " + timeout + " 秒",
                ]);
            }
        }

        return ([
            "leech_kee_force" : 2,
        ]);
    }

    return 0;
}
