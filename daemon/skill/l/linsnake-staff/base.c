inherit "/std/skill/staff";

void create() {
    name = "靈蛇杖法";
}

mapping *action = ({
    ([
        "name"        : HIM"靈蛇出洞"NOR,
        "action"      : "$N使一招「$a」，手中$w宛如飛蛇般地向$n的$l竄去",
        "damage"      : 55,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIY"雙蛇吐信"NOR,
        "action"      : "$N身形一轉，一招「$a」$w顫動不定，揮向$n的$l",
        "damage"      : 50,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIR"靈蛇擺尾"NOR,
        "action"      : "$N倏的迴轉，$w劃地一抖，數聲爆響，一招聲勢駭人的「$a」以迅雷不及掩耳的速度向$n掃去",
        "damage"      : 50,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : HIG"百蛇出籠"NOR,
        "action"      : "$N身形一晃，起招「$a」，手中$w幻化出數十道蛇影竄向$n，三丈之內已被層層的蛇影給籠罩住",
        "damage"      : 50,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : HIY"靈蛇杖劈"NOR,
        "action"      : "$N揮動$w過肩，蓄勁發力，一招「$a」直劈$n$l",
        "damage"      : 50,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : HIM"逆龍化蛇"NOR,
        "action"      : "$N移步側身，使一招「$a」手中$w霍霍劈向$n的$l",
        "damage"      : 50,
        "damage_type" : "斲傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIY"昔人已乘靈蛇去"NOR,
    HIG"此地空餘百蠱樓"NOR,
    HIC"靈蛇一去不復返"NOR,
    HIG"青蠱千載空悠悠"NOR,
    HIB"晴川歷歷靈蛇樹"NOR,
    HIM"芳草淒淒萬蠱洲"NOR,
    HIR"蛇到深處無怨尤"NOR,
    HIG"無情最是蠱城柳"NOR,
    HIR"蛇"HIC"入江河"HIG"始化蛟"NOR,
    HIG"毒蛟"HIB"入海"HIY"化成龍"NOR,
    HIM"雲起"HIY"龍嘯"HIW"動九天"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N使一招『$a』，手中$w打了一個螺旋，硬是向$n$l捲了過去",
        "damage"      : 120,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$n反手抓住$N擊來的$w，$N立時運勁於杖，一招『$a』，氣勁直竄向$n打去",
        "damage"      : 150,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "只見$N迴身側躍，$w在空中轉了兩轉，頓時風沙走石日月無光，頓時陣陣蛇影竄出。這正是『$a』",
        "damage"      : 200,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N運起身法，來回揮出手中的$w，看似有千百招的虛招環繞在$n身邊。就在$n不知所措的同時，$N迴身一揮使出『$a』",
        "damage"      : 240,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N揮動$w在空中繞了數個弧型，突然唰的使出了『$a』。但見杖影如蛇，數個起伏後已經攻到$n面門",
        "damage"      : 260,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N使出一招『$a』，手中$w劃地，爆出數到氣勁，$n還來不及醒悟，$N發的暗勁已至面門三吋前",
        "damage"      : 280,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N向著$n大聲喊道：「吃我靈蛇秘招『$a』！」$N的招式突起，忽而運勁把杖如劍使！招如蛇龍滑溜不定",
        "damage"      : 300,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N側身一移，將棍法使了開來，身影隨即消失於棍影之中，接著『$a』殺招再現，$w由左下至右上一轟，突破$n防守，重重在胸口留下一擊",
        "damage"      : 300,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N將一招『$a』使出，$w奔馳如電地揮出，從$n正面棍影閃過，緊接著背面又掃過，擾得$n暈頭轉向",
        "damage"      : 300,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N內勁一吐，使出一招『$a』，只見$n四周泛起一陣白色毒霧，$N反手將$w由背後擊出，直取$n的小腹",
        "damage"      : 300,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N身軀向後一蹲隨即躍起，從袖口射出數條金蛇散發光芒干擾$n，一招舉世無雙的『$a』橫劈而下，直取$n腦門",
        "damage"      : 300,
        "damage_type" : "斲傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("linsnake-staff");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("linsnake-staff", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("hama-force", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "hama-force" || me->query_skill_mapped("staff") != "linsnake-staff") {
        return 1;
    }

    if (random(1200) + random(1200) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("linsnake-staff", 1);

        inspiration("\n"
                    "\t"YEL"╭╗"HIG"╮"HIC"． ‧˙ ﹒  ‥  ． ‥  ˙ ·  ·  ．﹒   ˙  ．  ﹒‥ ˙"HIG" ╔╮"NOR"\n"
                    "\t"HIY"╚╯"HIG"╰╮   "HIW"◢██◣"NOR"                                          "GRN"╰╝"NOR"\n"
                    "\t"GRN"╭╯╔╮ "HIW"  ████◣"NOR"           "HIC"只見"HIY + me->query("name") + HIC"獨立雲山，長風滿袖   ˙"NOR"\n"
                    "\t"HIW"。"HIG"  ╰╝  "BLK" ●"HIW"█"BLK"●"HIW"██"NOR"        "HIY"杖氣收，"HIG"笛音休。"HIW"蛇旋即遊走        ˙"NOR"\n"
                    "\t"HIY"。  ˙    "HIW" ◥█◤██ "NOR"       "HIM"半蛇女神女媧授之靈蛇棍招～       ‧"NOR"\n"
                    "\t"GRN" ╰   ╭╗ "BLINK + HIG" ξ"NOR" "HIW"◢█◤"BLINK + HIM"    β"NOR"     「"BLINK + my_attack_name[action_level] + HIW"」            "HIB"︰"NOR"\n"
                    "\t"RED"╭╗ "HIM" ╚╯   "HIW"  ◥███◤ "NOR"                                   "RED"╔╮"NOR"\n"
                    "\t"HIR"╚╯"HIC"． ‧˙   ﹒  ‥  ．  ·    ． ‥ ˙﹒  ˙  ． ﹒  ‥ ˙  "HIR"╰╝"NOR"\n\n");
    }
}

mapping query_action(object me) {
    int addition = me->query_action_level("linsnake-staff");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
