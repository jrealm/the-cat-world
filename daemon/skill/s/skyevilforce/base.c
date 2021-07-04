inherit "/std/skill/force";

void create() {
    name = "天邪心法";
}

int valid_learn(object me) {
    if (me->query_skill("skyevilforce", 1) < 1) {
        if (me->query("class") != "sanjiue") {
            return notify_fail("這項技能只有三絕門主才能傳授。\n");
        }

        if ((me->query("family/generation") != 25)) {
            return notify_fail("只有門主的嫡傳弟子才能領悟。\n");
        }
    }

    return 1;
}

int disable_skill(object me) {
    (__DIR__"exert_powerup")->remove_effect(me);
    return 1;
}

mapping query_effect_attr(object me) {
    mapping evilup;

    if (me) {
        evilup = me->query_temp("evilup");

        if (evilup) {
            return ([
                "attack"  : evilup["attack"],
                "damage"  : evilup["damage"],
                "timeout" : evilup["timeout"] - time(),
            ]);
        }
    }

    return 0;
}
