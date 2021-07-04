inherit SKILL;

void create() {
    name = "法術";
}

int level_limit() {
    return 100;
}

void skill_improved(object me) {
    int max = me->query_skill("magic", 1) * 10;

    if (max > me->query_attr("max_atman", 1)) {
        me->set("max_atman", max);
    }
}
