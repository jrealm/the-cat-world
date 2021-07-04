inherit SKILL;

void create() {
    name = "製藥學";
}

int valid_enable(string usage) {
    return (usage == "pharmacology");
}

int valid_learn(object me) {
    if (me->query("family/family_name") != "藥宗") {
        return notify_fail("製藥學只有藥宗之人方能學習。\n");
    }

    if (me->query_skill("pharmacy", 1) >= me->query_skill("pharmacology", 1)) {
        return notify_fail("你的藥學基礎不足。\n");
    }

    return 1;
}

string med_pharmacology2_file(string learning) {
    return __DIR__"med_" + learning;
}

int level_limit() {
    return 200;
}
