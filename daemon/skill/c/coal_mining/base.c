inherit SKILL;

void create() {
    name = "採煤技術";
}

int level_limit() {
    return 100;
}

int valid_learn(object me) {
    return notify_fail("這項技能只能由實際運用中得到經驗。\n");
}
