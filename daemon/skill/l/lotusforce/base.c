inherit "/std/skill/force";

void create() {
    name = "蓮華心法";
}

int valid_learn(object me) {
    if (me->query_skill("buddhism") < me->query_skill("lotusforce") / 2) {
        return notify_fail("你的大乘佛法修為不夠，無法領會更高深的蓮華心法。\n");
    }

    return 1;
}

int enable_skill(object me) {
    int armor, attack, defense;
    mapping effect;

    if (!objectp(me) || mapp(effect = me->query_temp("lotusforce_effect"))) {
        return 1;
    }

    armor = (me->query_skill("lotusforce") + (me->query_skill("buddhism") * 2) + (me->query("combat_exp") / 20000)) / 8;
    attack = armor * 6 / 5;
    defense = armor * 4 / 5;

    me->add_temp("apply/armor", armor);
    me->add_temp("apply/attack", attack);
    me->add_temp("apply/defense", defense);

    me->add_temp("additional_attack_ability", attack);

    me->set_temp("lotusforce_effect", ([
        "armor" : armor,
        "attack" : attack,
        "defense" : defense,
    ]));

    return 1;
}

int disable_skill(object me) {
    mapping effect;

    if (!objectp(me) || !mapp(effect = me->query_temp("lotusforce_effect"))) {
        return 1;
    }

    me->add_temp("apply/armor", -effect["armor"]);
    me->add_temp("apply/attack", -effect["attack"]);
    me->add_temp("apply/defense", -effect["defense"]);

    me->add_temp("additional_attack_ability", -effect["attack"]);

    me->delete_temp("lotusforce_effect");

    return 1;
}

mapping query_effect_attr(object me) {
    mapping effect;

    if (me) {
        effect = me->query_temp("lotusforce_effect");

        if (effect) {
            return ([
                "armor"   : effect["armor"],
                "attack"  : effect["attack"],
                "defense" : effect["defense"],
            ]);
        }
    }

    return 0;
}
