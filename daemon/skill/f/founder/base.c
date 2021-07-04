inherit SKILL;

void create() {
    name = "武器製造";
}

int level_limit() {
    return 120;
}

int valid_learn(object me) {
    if (me->query_skill("founder", 1) < 100) {
        return 1;
    }

    return notify_fail("剩下的只能由實際運用中得到經驗。\n");
}
