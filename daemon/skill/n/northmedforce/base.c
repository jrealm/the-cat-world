inherit "/std/skill/force";

void create() {
    name = "北冥神功";
}

int disable_skill(object me) {
    mapping effects = me->query("effects/over_time");

    if (mapp(effects)) {
        map_delete(effects, "瀚海北冥");
    }

    return 1;
}
