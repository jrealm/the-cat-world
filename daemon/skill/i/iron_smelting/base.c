inherit SKILL;

void create() {
    name = "煉鐵技術";
}

int level_limit() {
    return 100;
}

int valid_learn(object me) {
    if (me->query_skill("iron_smelting", 1) < 100) {
        return 1;
    }

    return notify_fail("這項技能只能由實際運用中得到經驗。\n");
}
