inherit "/std/skill/force";

void create() {
    name = "葵花心法";
}

int valid_learn(object me) {
    if (me->query("gender") != "中性") {
        return notify_fail("葵花心法需要自宮後方能學習。\n");
    }

    if (me->query_skill("pollyforce", 1) < 50) {
        switch (file_name(previous_object())) {
            case COMMAND_DIR"std/practice":
                return notify_fail("需先有葵花心法基礎，才可自行練習。\n");

            case COMMAND_DIR"std/study":
                if (me->query("combat_exp") < 500000) {
                    return notify_fail("你的戰鬥經驗不足，無法領會葵花心法。\n");
                }

                if (me->query("force") < 3000) {
                    return notify_fail("你的內力太弱，無法學習葵花心法。\n");
                }

                break;

            default:
                return notify_fail("師父似乎不願意傳授給你這葵花心法。\n");
        }
    }

    return 1;
}

mapping query_effect_attr(object me) {
    if (me) {
        object weapon = me->query_temp("weapon");

        if (weapon && weapon->is_wp() == 11) {
            return ([
                "pollyforce" : sprintf("%s %d 秒", weapon->query("name"), weapon->query_temp("timeout") - time()),
            ]);
        }
    }

    return 0;
}
