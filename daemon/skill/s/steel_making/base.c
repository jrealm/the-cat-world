inherit SKILL;

void create() {
    name = "煉鋼技術";
}

int level_limit() {
    return 100;
}

int valid_learn(object me) {
    if (me->query_skill("steel_making", 1) < 100) {
        return 1;
    }

    return notify_fail("這項技能只能由實際運用中得到經驗。\n");
}
