inherit "/std/skill/whip";

void create() {
    name = "毒龍鞭法";
}

mapping *action = ({
    ([
        "name"        : YEL"毒龍迴旋"NOR,
        "action"      : "$N使一招「$a」，手中$w輕飄飄地向$n的$l揮去",
        "damage"      : 50,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : YEL"毒龍佈血雨"NOR,
        "action"      : "$N身形一轉，一招「$a」$w顫動不定，斬向$n的$l",
        "damage"      : 50,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : YEL"雲行龍卦"NOR,
        "action"      : "$N倏的向前，$w憑空一抖，有若一響焦雷，一招聲勢駭人的「$a」以迅雷不及掩耳的速度向$n掃去",
        "damage"      : 50,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : YEL"水銀洩地"NOR,
        "action"      : "$N身形這麼晃了一晃，使出了秘招「$a」，手中$w幻化出數十道鞭影齊力攻向$n，三丈之內已被你層層的鞭影給籠罩住",
        "damage"      : 50,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : YEL"毒龍五爪"NOR,
        "action"      : "$N拿起$w過肩，蓄勁發力，一招「$a」直劈$n$l",
        "damage"      : 50,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : YEL"毒龍萬里"NOR,
        "action"      : "$N移步側身，使一招「$a」鞭子霍霍斬向$n的$l",
        "damage"      : 50,
        "damage_type" : "斲傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIR"毒龍"HIG"出"HIY"洞"NOR,
    HIR"毒龍"HIM"捲"HIW"殘月"NOR,
    HIR"風捲"HIG"殘"HIW"雲"NOR,
    HIR"毒龍"HIB"狂"HIW"囓"NOR,
    HIR"毒龍"HIC"躍"HIB"淵"NOR,
    HIR"花容"HIC"逝水"HIM"噬龍"HIW"曄"NOR,
    HIR"九龍"HIG"藏"HIB"毒"HIW"夢"HIM"魂"HIC"驚"NOR,
    HIR"萬蟻"HIW"吞"HIC"食"HIR"龍"HIM"奔"HIY"馳"NOR,
    HIC"雲起"BLK"毒龍"HIB"翻江海"NOR,
    HIC"納"HIW"百川"BLK"毒龍"HIR"絕"HIG"天下"NOR,
    HIW"氣"HIM"斷息"NOR"．"HIW + BLK"毒龍"HIY"嘯"NOR"．"HIR"鞭影"HIC"捲"HIW"四方"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N使一招『$a』，手中$w打了一個螺旋，硬是向$n$l捲了過去",
        "damage"      : 100,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$n一手抓住$N擊來的$w，$N立時運勁於鞭，一招『$a』，氣勁直往$n打去",
        "damage"      : 140,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "只見$N回身使出一鞭，$w在空中轉了兩轉，頓時風沙走石日月無光，有如狂風暴雨。這正是『$a』",
        "damage"      : 180,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N運起身法，來回揮出手中的$w，頓時鞭影幢幢，看似有千百招的虛招環繞在$n身邊。就在$n不知所措的同時，$N低頭一探，突然在眾多虛招中使出了霸氣十足的『$a』",
        "damage"      : 220,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N揮動$w在空中繞了數個弧型，突然唰的使出了『$a』，但見鞭影如鬼魅、如幻影，數個起伏後已經攻到$n面門",
        "damage"      : 240,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N使出一招『$a』一手抓起鞭身，有如如用手撈起淍零的花兒，$w落地，發出了一個聲音，$n還來不及醒悟，$N發的暗勁已至面門三吋前",
        "damage"      : 260,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N向著$n大聲喊道：「吃我毒龍秘招『$a』！」$N的招式突起，忽而運勁把鞭如劍使、一會兒又成刀、接著棍、杖、尺、槍樣樣都來！招如蛇龍滑溜不定",
        "damage"      : 280,
        "damage_type" : "身上鞭傷處處、皮開肉綻、慘不忍睹",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N偷偷地吸口氣後緩緩地將$w舉起，使力地往地面擊下，瞬時塵煙飛舞遮蓋了$n的視線。突然從煙霧中衝出了龍狀之物並夾突然從煙霧中衝出了龍狀之物並夾帶著群沙之力，往$n撞去，這正是『$a』啊",
        "damage"      : 300,
        "damage_type" : "被切開一處傷口，皮爛肉散、骨露筋現，好不可佈",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N再度將手中$w掄轉上舉，狀似靜止，卻是靜中有動，集中全身勁力一鞭劈向$n。一道無形的波濤隨即由天而降，正是一招『$a』絕技直撲$n的頭頂",
        "damage"      : 300,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N右手一掄，那$w刷的一身飛起，隨後在空中啪的一身抽響，使出『$a』手腕一翻一收，舞鞭繞住$n全身八大要穴",
        "damage"      : 300,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N提起全身功力，旋流如海，$w高舉過頭，周身吹出陣陣強風，從雙袖呼嘯襲出，鼓盪天際風雲。一招『$a』，一道氣勢磅礡的龍息從$w發出，直接衝向$n",
        "damage"      : 300,
        "damage_type" : "割傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("dragonwhip");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("dragonwhip", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("iceforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "iceforce" || me->query_skill_mapped("whip") != "dragonwhip") {
        return 1;
    }

    if (random(1200) + random(1200) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("dragonwhip", 1);

        inspiration("\n"
                    "▁▂▃▅▇██▇▂▁\n"
                    "███████████           "HIC"天空忽然烏雲密布"NOR"\n"
                    BWHT+BLK"▇▆▅▃  ▃▃▇█"NOR"    "HIW+BLK"▃▇▆▄▃"NOR"\n"
                    "                          "HIR"詭譎氛圍"HIY"籠照"HIG"大地"NOR"\n"
                    YEL"◥◣"NOR"\n"
                    YEL"◥█◣   "HIY"╰──╮       "HIW"一股"HIB"邪氣"HIM"急馳逼近"NOR"\n"
                    BLU"█████◣   "HIY"╰╮"NOR"\n"
                    BLU"████◣"RED"●"BLU"◥██◣           "HIW"抬頭望去"NOR"\n"
                    BLU"█████████"NOR"\n"
                    BLU"████◤ "HIW"▼▼▼    "BLINK+HIM"▁▂▃▇█◣"NOR"   "HIC"空中一頭"NOR+BLU"巨龍"HIR"低鳴吐息"NOR"\n"
                    "  "BLU"◥▅▂ "HIW"▲▲▲"NOR+BLU"◢  "BLINK+BLK+BMAG"▇▆▅▃  "NOR+BLINK+MAG"◤"NOR"\n"
                    "    "BLU"◥████◤          "HIC"迷霧之中"NOR" 「"HIG + me->query("name") + NOR"」領略了一招「" + my_attack_name[action_level] + "」\n\n");
    }
}

mapping query_action(object me) {
    int addition = me->query_action_level("dragonwhip");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
