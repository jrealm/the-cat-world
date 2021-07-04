inherit SKILL;

void create() {
    name = "咒術";
}

int level_limit() {
    return 100;
}

void skill_improved(object me) {
    int max = me->query_skill("spells", 1) * 10;

    if (max > me->query_attr("max_mana", 1)) {
        me->set("max_mana", max);
    }
}
