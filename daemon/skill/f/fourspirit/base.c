inherit SKILL;

void create() {
    name = "四靈術";
}

int valid_enable(string usage) {
    return (usage == "magic");
}

string conjure_magic_file(string magic) {
    return __DIR__"conjure_" + magic;
}

int practice_skill(object me) {
    if (me->query("sen") < 60) {
        return notify_fail("你的神不足了，休息一下再練吧。\n");
    }

    if (me->query("atman") < 20) {
        return notify_fail("你的靈力不足了。\n");
    }

    me->receive_damage("sen", 60);
    me->add("atman", -20);

    return 1;
}

int level_limit() {
    return 111;
}
