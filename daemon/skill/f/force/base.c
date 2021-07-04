inherit SKILL;

void create() {
    name = "內功心法";
}

int level_limit() {
    return 200;
}

void skill_improved(object me) {
    int max = me->query_skill("force", 1) * 10;

    if (max > me->query_attr("max_force", 1)) {
        me->set("max_force", max);
    }
}
