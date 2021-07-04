inherit "/std/skill/force";

void create() {
    name = "玉女神功";
}

int enable_skill(object me) {
    me->set_temp("back_vitality", 1);

    return 1;
}

int disable_skill(object me) {
    me->delete_temp("back_vitality");

    return 1;
}

mapping query_effect_attr(object me) {
    if (me) {
        if (me->query_skill("girlforce", 1) > 210) {
            return ([
                "girlforce" : "免疫昏厥",
            ]);
        }
    }

    return 0;
}
