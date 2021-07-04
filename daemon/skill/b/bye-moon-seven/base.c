inherit "/std/skill/unarmed";

void create() {
    name = "拜月七訣";
}

mapping *action = ({
    ([
        "name"        : HIC"月陰訣"NOR,
        "action"      : "$N雙手凝氣於掌心，掌心雷微微泛起紅光，接著你使出一式「$a」，將掌中勁力一股腦兒的爆發出來，攻向$n的$l",
        "damage"      : 20,
        "force"       : 360,
        "damage_type" : "嚴重瘀傷，並跌了個四腳朝天",
    ]),
    ([
        "name"        : HIY"月晴訣"NOR,
        "action"      : "$N運足真氣，煞時真氣鼓盪四肢百骸，體內氣勁不吐不快，接連使"HIR"拜月七訣"NOR"中的「$a」，剎那間$n的全身上下被$N的掌力鎖住，$N見機不可失順勢攻向$n的胸口",
        "damage"      : 10,
        "force"       : 350,
        "damage_type" : "嚴重瘀傷，並口吐鮮血",
    ]),
    ([
        "name"        : HIC"月"HIG"上"HIB"訣"NOR,
        "action"      : "$N運起陰柔的內勁，頓時周圍氣溫驟降，$N使出一招「$a」，凜冽的寒勁不斷的向$n襲去",
        "damage"      : 20,
        "force"       : 340,
        "damage_type" : "凍傷",
    ]),
    ([
        "name"        : HIR"月"HIW"下訣"NOR,
        "action"      : "$N大喝一聲，將丹田之氣源源不斷的往膻中穴運行，將體內至陽之氣凝聚於雙掌，準備發出"HIR"拜月七訣"NOR"中至剛至陽的一式「$a」，掌風之中挾帶著炙熱的罡風襲向$n",
        "damage"      : 10,
        "force"       : 390,
        "damage_type" : "三度灼傷，燒傷百分之七十，沒救了",
    ]),
    ([
        "name"        : HIW"月缺訣"NOR,
        "action"      : "$N吐氣揚聲，一招「$a」，左掌幻化成無數掌影，右掌化虛為實擊向$n的身軀",
        "damage"      : 20,
        "force"       : 400,
        "damage_type" : "內傷",
    ]),
    ([
        "name"        : HIC"月"HIM"圓"HIG"訣"NOR,
        "action"      : "$N身影一轉，轉瞬之間已將掌心抵住$n的心坎穴，使出「$a」，只要掌力一吐定要$n血賤當場",
        "damage"      : 15,
        "force"       : 380,
        "damage_type" : "淤傷",
    ]),
    ([
        "name"        : HIY"月"HIW"神"HIR"訣"NOR,
        "action"      : "$N雙手微一運勁，雙手光芒一瞬即逝，$N已然運起"HIR"拜月七訣"NOR"中最剛猛的一式「$a」，掌力所到之處，無不開山破地，掌法大開大閤，招招不斷，式式不絕",
        "damage"      : 20,
        "force"       : 440,
        "damage_type" : "瀕臨死亡",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIY"月赤訣"NOR,
    HIY"月浪訣"NOR,
    HIY"月寒訣"NOR,
    HIY"月湃訣"NOR,
    HIY"月釜訣"NOR,
    HIY"月簾訣"NOR,
    HIY"月訞訣"NOR,
    HIY"月孤訣"NOR,
    HIY"月望訣"NOR,
    HIY"月湘訣"NOR,
    HIY"月華訣"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N運起剛勁直入右掌，掌心滿透熾熱紅氣，緊接從左掌底穿出，『$a』突如其來地拍向$n左脅",
        "force"       : 550,
        "damage"      : 10,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N掌勢游移不定，『$a』掌舞無常規可循，$n突然一個失神，$N蓄滿剛勁的右掌已無聲無息地拍向$n後心",
        "force"       : 700,
        "damage"      : 10,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N逆運寒勁透掌凌空拍出，周圍溫度驟降，$n四肢漸失靈便，$N看機不可失，左手『$a』，變招化拳砸向$n眉心",
        "force"       : 850,
        "damage"      : 10,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N左右掌輪流迴旋互搭，『$a』勁道斗地增強五倍，接著雙眉一橫，$N右掌挾此無疇掌勁按向$n胸口",
        "force"       : 1000,
        "damage"      : 10,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N掌化手刀連環劈出，『$a』掌風掃出全無章法，只見$n無法應付這突來攻勢，連連後退",
        "force"       : 1100,
        "damage"      : 10,
        "damage_type" : "挫傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N左臂收回身後，單以右掌封守全身，緊接著一個翻身使出『$a』，左臂倏地甩出，兩指朝$n左臂直插下去",
        "force"       : 1200,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N連續翻了幾個筋斗，雙掌『$a』猛地遞出，以凌空壓制之勢拍向$n天靈蓋",
        "force"       : 1350,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N面無表情，一掌直直印向$n胸口，在胸口五寸之處微地一頓，就在$n狐疑鬆懈之際，『$a』化掌為拳灌勁加速轟出",
        "force"       : 1500,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N雙掌齊飛運使『$a』，只見掌面綴成耀眼圓月，剛寒掌勁集中轟向$n小腹",
        "force"       : 1700,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N雙目射出凶厲神色，一個縱身彈射至空中，一招『$a』，由三丈的高空翻身而下，雙手化成萬千掌影，勁氣狂竄籠罩著$n",
        "force"       : 1700,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N腳下運勁，倏地移往$n正面處，使出『$a』，雙掌送出數道氣勁，分取$n頭頂、背心、胸囗及左右腰脅間的五處要害",
        "force"       : 1700,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

mapping query_action(object me) {
    int addition = me->query_action_level("bye-moon-seven");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(sizeof(action))];
}

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("bye-moon-seven");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("bye-moon-seven", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("bye-moon-force", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "bye-moon-force" || me->query_skill_mapped("unarmed") != "bye-moon-seven") {
        return 1;
    }

    if (random(1700) + random(1700) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("bye-moon-seven", 1);

        inspiration("\n    "HIY"◢         皎潔的月光"NOR"，"HIC"將黑暗驅逐開來"NOR"，只見『" + me->query("name") + "』若有所悟"
                    "\n  "HIY"◢█"
                    "\n  "HIY"██   "HIW"▂▄▅▆▄▂   "HIM"腦海"HIW"一道光影出現，"HIG"一招一式的演練，"HIC"忽而仰天長笑"
                    "\n  "HIY"██◣   "NOR+BWHT+BLK"▆▆▄▃▅▆"NOR
                    "\n  "HIY"◥████◤                "HIW"▃▅▂        "HIR"一招"HIY"『" + my_attack_name[action_level] + HIY"』"NOR"浮現"
                    "\n    "HIY"◥██◤                  "NOR+BWHT+BLK"▆▄▅▆"NOR"\n"
                    "\n                    『" + me->query("name") + "』對"HIY"拜月七訣"NOR"有了更進一步的認識\n\n");
    }
}
