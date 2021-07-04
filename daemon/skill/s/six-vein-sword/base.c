inherit "/std/skill/martial";

void create() {
    name = "六脈神劍";
}

mapping *action = ({
    ([
        "name"        : HIC"少澤劍"NOR,
        "action"      : "$N矮身斜躍，小指一勾，「$a」無形劍氣在半空轉了個彎，悄悄地襲上$n後背",
        "force"       : 450,
        "damage"      : 25,
        "damage_type" : "傷害",
    ]),
    ([
        "name"        : HIW"中衝劍"NOR,
        "action"      : "$N一個轉身，中指朝背後連彈，只聽見嗤嗤數聲，「$a」的無形劍氣已出奇不意地射向$n的$l",
        "force"       : 560,
        "damage"      : 25,
        "damage_type" : "傷害",
    ]),
    ([
        "name"        : HIG"少商劍"NOR,
        "action"      : "$N拇指連捺，「$a」氣派宏偉，大開大闔的劍氣如狂風暴雨般掃向$n的$l",
        "force"       : 580,
        "damage"      : 25,
        "damage_type" : "傷害",
    ]),
    ([
        "name"        : HIY"關衝劍"NOR,
        "action"      : "$N無名指連劃，一路「$a」織出綿密劍網，無聲無息地剿向$n的$l",
        "force"       : 540,
        "damage"      : 25,
        "damage_type" : "傷害",
    ]),
    ([
        "name"        : HIM"商陽劍"NOR,
        "action"      : "$N食指點出，一路「$a」輕靈迅速，劍劍連環快速戳向$n的$l",
        "force"       : 490,
        "damage"      : 25,
        "damage_type" : "傷害",
    ]),
    ([
        "name"        : HIB"少衝劍"NOR,
        "action"      : "$N以一輪快腿迫使$n躍起，接著手腕一轉，小指「$a」射出快捷的劍氣，直取$n的$l",
        "force"       : 620,
        "damage"      : 25,
        "damage_type" : "傷害",
    ]),
});

int size_of_action = sizeof(action);

int *condition_exp = ({
    10000,
    20000,
    40000,
    80000,
    160000,
    300000,
    500000,
    600000,
    900000,
});

int *condition_six_vein_sword = ({
    100,
    125,
    150,
    175,
    200,
    225,
    250,
    275,
    300,
});

int *condition_max_force = ({
    960,
    1050,
    1200,
    1350,
    1500,
    1800,
    2100,
    2400,
    2700,
});

int *condition_northmedforce = ({
    100,
    110,
    120,
    130,
    145,
    160,
    175,
    190,
    211,
});

string *my_attack_name = ({
    HIC"屋漏惡逢連夜雨"NOR,
    HIC"風雨末遇故人來"NOR,
    HIC"蜀道難困鴻鵠志"NOR,
    HIC"穿雲雙龍競逐暉"NOR,
    HIC"回馬入林子龍銳"NOR,
    HIM"汐退潮湧錢塘浪"NOR,
    HIM"慕訪名山踅列國"NOR,
    HIM"蒼蛟得淵樂悠游"NOR,
    HIM"六弦齊鳴奏天南"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N雙手「"HIG"少商劍"NOR"」齊出，震得$n雙手發麻，接著一式『$a』高躍而起，「"HIW"中衝劍"NOR"」如暴雨般凌空襲向$n$l",
        "damage"      : 25,
        "force"       : 700,
        "damage_type" : "傷害",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N以「"HIG"少商劍"NOR"」逼得$n狼狽閃避，突然內力轉運食指，一式『$a』使出，「"HIM"商陽劍"NOR"」暴長的靈動劍氣直指$n$l",
        "damage"      : 25,
        "force"       : 850,
        "damage_type" : "傷害",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N雙手一揚，『$a』一出，左手「"HIC"少澤劍"NOR"」以巧絕方位牽制$n攻勢，右手「"HIW"中衝劍"NOR"」冷不防從另一角度橫掃向$n$l",
        "damage"      : 25,
        "force"       : 1000,
        "damage_type" : "傷害",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N凝氣無名指，『$a』一經使出，「"HIY"關衝劍"NOR"」的氣劍網頓時封住$n的退路，接著兩手一轉，「"HIC"少澤劍"NOR"」悄悄繞攻至$n$l",
        "damage"      : 25,
        "force"       : 1150,
        "damage_type" : "傷害",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N欺敵後退，突然一個低腰轉身，『$a』應聲而出，$N左手「"HIG"少商劍"NOR"」由外包圍$n，右手「"HIC"少澤劍"NOR"」則從中巧攻$n$l",
        "damage"      : 25,
        "force"       : 1300,
        "damage_type" : "傷害",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N虛點數下無功，假意內力不濟，待$n搶攻時，一式『$a』使出，「"HIM"商陽劍"NOR"」、「"HIW"中衝劍"NOR"」、「"HIY"關衝劍"NOR"」分攻向$n上、中、下三路要害",
        "damage"      : 25,
        "force"       : 1450,
        "damage_type" : "傷害",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N展開身法遊走，瀟灑地使出『$a』，雙手轉、點、戳、掃，只見「"HIM"商陽劍"NOR"」、「"HIW"中衝劍"NOR"」、「"HIW"中衝劍"NOR"」三種氣劍連綿遙攻位於中央的$n$l",
        "damage"      : 25,
        "force"       : 1600,
        "damage_type" : "傷害",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N靈光一現，『$a』上手，兩手如作山水潑墨般揮灑，看似悠遊自在，手上輪使六劍卻是威力萬鈞，變幻流水般的劍勢殺得$n招架不住",
        "damage"      : 25,
        "force"       : 1850,
        "damage_type" : "傷害",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N凝湧十成內力衝指而出，『$a』的六劍輪使以獨特的節奏打得$n左支右拙，心神散亂，突然一聲暴喝，六道無形氣劍齊指向$n$l",
        "damage"      : 25,
        "force"       : 2000,
        "damage_type" : "傷害",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("six-vein-sword");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_weapon_exp(me->query_skill_type()) < condition_exp[action_level]) {
        return 2;
    }

    if (me->query_skill("six-vein-sword", 1) < condition_six_vein_sword[action_level]) {
        return 3;
    }

    if (me->query_skill("northmedforce", 1) < condition_northmedforce[action_level]) {
        return 4;
    }

    if (me->query_attr("max_force", 1) < condition_max_force[action_level]) {
        return 5;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "northmedforce") {
        return 1;
    }

    if (random(2200) + random(2200) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("six-vein-sword", 1);

        inspiration("\n"
                    HIY"\t    ★"HIC"隱世已久的 天南段家 詔告天下 "HIY"★\n"
                    MAG"    ◢      "RED"●□█□█□█□█□█□█□█□█□█□█□█□█□█□█○\n"
                    MAG"    █\n"
                    MAG"    █          "NOR"《"HIY"六"HIR"脈"HIW"神劍"NOR"》 傳人"HIG + me->query("name") + "\n"
                    MAG"    █            "NOR"憑一己之力得悟不世奇招「"BLINK + my_attack_name[action_level] + "」，發揚我段家武學。\n"
                    MAG"  ◢█◣        "NOR"此乃千載難逢之緣法，特發詔恭賀之！！\n"
                    MAG"    █\n"
                    MAG"    ◆      "RED"○█□█□█□█□█□█□█□█□█□█□█□█□█□█□●\n\n"NOR);
    }
}

int valid_learn(object me) {
    int times = me->query("s_skills/six-vein-sword");

    if (times < 1) {
        if (file_name(previous_object()) == COMMAND_DIR"std/study") {
            notify_fail("你看了一下，發現裡面所講的技術太深奧了，完全看不懂。\n");
        }

        return 0;
    }

    if (me->query_skill("six-vein-sword", 1) >= (100 * times)) {
        return notify_fail("你已經沒辦法做更高深的修練了。\n");
    }

    switch (me->query_skill_type()) {
        case "sword":
            return 1;

        case "unarmed":
            if (!me->query_temp("secondary_weapon")) {
                return 1;
            }

        default:
            return notify_fail("你必須先找一把劍或是空手才能練六脈神劍。\n");
    }
}

int valid_enable(string usage) {
    return (usage == "unarmed") || (usage == "parry") || (usage == "sword");
}

mapping query_action(object me) {
    int addition = me->query_action_level("six-vein-sword");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}

int level_limit() {
    return 300;
}
