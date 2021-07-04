inherit SKILL;

private string *actions = ({
    "但是和$p$l偏了幾寸。\n",
    "但是被$p機靈地躲開了。\n",
    "但是$n身子一側，閃了開去。\n",
    "但是被$p及時避開。\n",
    "但是$n已有準備，不慌不忙的躲開。\n",
});

void create() {
    name = "縱躍閃躲之術";
}

int level_limit() {
    return 200;
}

string query_dodge_msg() {
    return actions[random(sizeof(actions))];
}
