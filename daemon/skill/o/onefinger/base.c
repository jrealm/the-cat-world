inherit "/std/skill/unarmed";

void create() {
    name = "一陽指";
}

mapping *action = ({
    ([
        "name"        : YEL"雲影飛逝"NOR,
        "action"      : "$N身形突變，一招「$a」點向$n的$l",
        "damage"      : 15,
        "force"       : 350,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : YEL"龍氣百定"NOR,
        "action"      : "$N左臂一縮右手穿出，使出一招「$a」點向$n的$l",
        "damage"      : 15,
        "force"       : 350,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : YEL"陽意去陰"NOR,
        "action"      : "$N身法微頓一式「$a」，迅疾一指點向$n的$l",
        "damage"      : 15,
        "force"       : 350,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : YEL"氣沖太虛"NOR,
        "action"      : "$N使出一招「$a」，迅速的欺至$n的身邊，對準$n的$l點去",
        "damage"      : 15,
        "force"       : 350,
        "damage_type" : "瘀傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIM"捻指叩軍"NOR,
    HIM"一言九鼎"NOR,
    HIM"肆馬逐諾"NOR,
    HIM"君臨池邦"NOR,
    HIM"揚指傾都城"NOR,
    HIM"怒顏山河動"NOR,
    HIM"孤龍繫春秋"NOR,
    HIM"一帝功垂萬骨枯"NOR,
    HIM"皇澤蒼生百世恩"NOR,
    HIM"古今聖王固金甌"NOR,
    HIM"九州四海恃風雷"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N左食指佯點$n胸口神封穴，指發途中突然右袖一拂，使出『$a』，袖中右食指直彈$n喉下七突穴",
        "force"       : 550,
        "damage"      : 40,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N緩步移動，凝勁於指，一個側身後『$a』猛地發出，九般快點手法一氣呵成，直取$n督脈九大穴",
        "force"       : 700,
        "damage"      : 40,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N提氣退出一丈外，蓄勁使出『$a』，倏忽之間，中指已快捷無倫地欺進$n頸中風府穴",
        "force"       : 850,
        "damage"      : 40,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N龍行虎步，神威凜凜，一式『$a』別具皇者氣象，五指氣勁隱隱透射而出，交替遙點$n帶脈諸穴",
        "force"       : 1000,
        "damage"      : 40,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N雙袖一抽使出『$a』，雙手拇指挾勁分掃$n雲門、俠白穴，緊接著雙手變指換位，矮身合取$n中府穴",
        "force"       : 1100,
        "damage"      : 40,
        "damage_type" : "挫傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N內力急提，臉色乍然翻紅，一式『$a』發出，四品一陽指挾風雨之勢襲向$n任脈諸穴",
        "force"       : 1200,
        "damage"      : 60,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N一個轉身使出『$a』，反手連出數指，以三品一陽指急攻$n神闕、聞香、章門等穴",
        "force"       : 1350,
        "damage"      : 60,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N繞步虛點$n全身周穴，待其分神之際使出『$a』，左小指拂向小腿環跳穴，右手二品一陽指同時迅攻眉間印堂穴",
        "force"       : 1500,
        "damage"      : 60,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N展動奇妙身法，『$a』的一品絕詣乍然使出，滿堂指影紛飛，幾乎同一時間內，指勁由四面八方襲上$n全身奇經八脈諸穴",
        "force"       : 1600,
        "damage"      : 60,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N陰陽交錯之際，避過$n攻擊的同時。身形隨著往前突進，晃動之間，往右雙掌擊出。一招『$a』，倏地左手成爪右掌上青芒乍現，全身氣勁匯於食指點向$n",
        "force"       : 1600,
        "damage"      : 60,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N雙掌合十提氣吐納，真氣旋出環繞周身，身影四周砂石狂颳，勁風颼颼，大喝一聲：『$a』，指勁夾帶著破石而出之勢襲向$n",
        "force"       : 1600,
        "damage"      : 60,
        "damage_type" : "瘀傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

mapping query_action(object me) {
    int addition = me->query_action_level("onefinger");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("onefinger");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("onefinger", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("taiiforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "taiiforce" || me->query_skill_mapped("unarmed") != "onefinger") {
        return 1;
    }

    if (random(1200) + random(1200) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("onefinger", 1);

        inspiration("\n"
                    " ╭───╮\n"
                    " │  ::  │     "HIW"只見一名"HIY"慈眉善目"HIW"的和尚"NOR"，大袖一揚\n"
                    "(  ︶﹒︶  )\n"
                    " │  __  │ "HIY"☫    "HIR"微笑"HIW"抬手伸指，一股"HIM"暖流"HIW"匯聚「" + me->query("name") + "」的"HIG"眉心"NOR"\n"
                    " ╰───╯ "HIY"║"NOR"\n"
                    " "RED"◢"BRED+WHT"╬╬╬"NOR+RED"◣"NOR" "HIG"●"NOR"   "HIC"手指"HIB"隨意念"HIW"而動，"HIR"出手"HIG"便是一式"NOR"\n"
                    " "BRED+WHT"╬╬╬╬╬"NOR+HIY" ║"NOR"\n"
                    " "BRED+WHT"╬╬╬╬╬"NOR+HIY" ║"NOR"   「" + me->query("name") + "」"HIW"領悟了一招"HIM"『" + my_attack_name[action_level] + HIM"』"NOR"\n\n");
    }
}
