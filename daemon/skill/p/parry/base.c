inherit SKILL;

private string *actions = ({
    "只聽見「鏘」一聲，被$p格開了。\n",
    "結果「噹」地一聲被$p擋開了。\n",
    "但是被$n用手中兵刃架開。\n",
    "但是$n身子一側，用手中兵刃格開。\n",
});

private string *unarmed_actions = ({
    "但是被$p格開了。\n",
    "結果被$p擋開了。\n",
});

void create() {
    name = "拆招卸力之法";
}

int level_limit() {
    return 200;
}

string query_parry_msg(object weapon) {
    if (weapon) {
        return actions[random(sizeof(actions))];
    } else {
        return unarmed_actions[random(sizeof(unarmed_actions))];
    }
}
