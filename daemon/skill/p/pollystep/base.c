inherit "/std/skill/dodge";

void create() {
    name = "葵花步法";

    actions = ({
        "$n一招「"HIY"江上弄笛"NOR"」輕輕巧巧地避了開去。\n",
        "只見$n身影一晃，一式「"HIG"辟邪亂步"NOR"」早已避在七尺之外。\n",
        "$n使出「"HIR"鍾馗抉目"NOR"」，身軀化出數道幻影，輕輕鬆鬆地閃過。\n",
        "$n左足一點，一招「"HIM"柳燕歸巢"NOR"」騰空而起，避了開去。\n",
        "可是$n使一招「"MAG"人比花嬌"NOR"」輕嗲一聲$N愣了一下$n身子輕輕飄了開去。\n",
        "$n身影微動，已經藉一招「"HIY"葵花向日"NOR"」輕輕閃過。\n",
        "但是$n一招「"HIM"捻花折枝"NOR"」使出，早已繞到$N身後！\n"
    });
}

int valid_learn(object me) {
    if (me->query("gender") != "中性") {
        return notify_fail("葵花步法為自宮後才能練的武功。\n");
    }

    return 1;
}
