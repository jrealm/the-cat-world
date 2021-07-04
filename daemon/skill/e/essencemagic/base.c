inherit SKILL;

void create() {
    name = "八識神通";
}

int valid_enable(string usage) {
    return (usage == "magic");
}

int valid_learn(object me) {
    if (me->query_skill("buddhism") <= me->query_skill("essencemagic")) {
        return notify_fail("你的佛法修為還不夠高深，無法學習八識神通。\n");
    }

    return 1;
}

int practice_skill(object me) {
    if (me->query("sen") < 60) {
        return notify_fail("你的神不足了，休息下再練吧。\n");
    }

    if (me->query("atman") < 20) {
        return notify_fail("你的靈力不足了。\n");
    }

    me->receive_damage("sen", 60);
    me->add("atman", -20);

    return 1;
}

string conjure_magic_file(string magic) {
    return __DIR__"conjure_" + magic;
}

int level_limit() {
    return 111;
}
