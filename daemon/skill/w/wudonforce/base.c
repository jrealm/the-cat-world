inherit "/std/skill/force";

void create() {
    name = "武當心法";
}

int enable_skill(object me) {
    int recover_gin, recover_kee, recover_sen;
    mapping effect;

    if (!objectp(me) || mapp(effect = me->query_temp("wudonforce_effect"))) {
        return 1;
    }

    recover_kee = me->query_skill("wudonforce") + (me->query("combat_exp") / 50000);
    recover_gin = recover_kee / 2;
    recover_sen = recover_kee / 4;

    me->add_temp("apply/recover_gin", recover_gin);
    me->add_temp("apply/recover_kee", recover_kee);
    me->add_temp("apply/recover_sen", recover_sen);

    me->set_temp("wudonforce_effect", ([
        "recover_gin" : recover_gin,
        "recover_kee" : recover_kee,
        "recover_sen" : recover_sen,
    ]));

    return 1;
}

int disable_skill(object me) {
    mapping effect;

    if (!objectp(me) || !mapp(effect = me->query_temp("wudonforce_effect"))) {
        return 1;
    }

    me->add_temp("apply/recover_gin", -effect["recover_gin"]);
    me->add_temp("apply/recover_kee", -effect["recover_kee"]);
    me->add_temp("apply/recover_sen", -effect["recover_sen"]);

    me->delete_temp("wudonforce_effect");

    return 1;
}

mapping query_effect_attr(object me) {
    mapping effect;

    if (me) {
        effect = me->query_temp("wudonforce_effect");

        if (effect) {
            return ([
                "recover_gin" : effect["recover_gin"],
                "recover_kee" : effect["recover_kee"],
                "recover_sen" : effect["recover_sen"],
            ]);
        }
    }

    return 0;
}
