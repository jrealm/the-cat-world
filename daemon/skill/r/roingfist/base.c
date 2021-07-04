inherit "/std/skill/unarmed";

void create() {
    name = "落英神劍掌";
}

mapping *action = ({
    ([
        "name"        : HIC"落"HIW"英"NOR + MAG"繽紛"NOR,
        "action"      : "只見$N雙臂揮動，使出「$a」，四方八面都是掌影，或五虛一實，或八虛一實，掌勢如同萬花齊落，直拍向全身各部位，$n看得眼花繚亂，霎時間竟忘了抵禦",
        "force"       : 250,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : MAG"花"HIW"沾"HIR"蝶"NOR + RED"舞"NOR,
        "action"      : "$N突然雙手負後使出「$a」，長嘯聲中身子突然躍起左掌向$n頂上虛劈一掌，倏施詭招，右掌快如閃電，瞬息之間連施五六下殺手",
        "force"       : 300,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIC"雨"HIW"急"HIB"狂風"NOR,
        "action"      : "$N身法一變，東縱西躍，右掌往外劃了三圈，四周氣流突被帶動，$n身法一滯，$N左掌橫劈，颼颼風響，力爭先著，正是一式「$a」",
        "force"       : 350,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIC"劍芒"HIW"綻放"NOR,
        "action"      : "$N雙掌飄飄，使出一招「$a」，平平朝$n面門推來，$n正待伸掌抵禦，不料著勁所在突然變得無影無蹤，此時$n內力外鑠，宛如劍鋒般刺向對方",
        "force"       : 300,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIW"霧"HIB"裡"HIW"飛"NOR + MAG"花"NOR,
        "action"      : "$N使出「$a」，倏地身形靈動，在場中滴溜溜的亂轉，$n看得喘不過氣來，不知有多少個$N在奔馳來去，突然迎面劈來一掌，掌影好不飄忽，不知向何處擋架才是",
        "force"       : 300,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : MAG"花"HIB"影"HIY"爭鋒"NOR,
        "action"      : "$N左掌劃了個圈子，使出一式「$a」，待劃到胸前七寸之處，右掌斗地搭上了左掌，力道登時大了一倍，攻勢有如驚濤駭浪，正向$n面門拍去",
        "force"       : 250,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIY"神劍"HIW"破"HIC"空"NOR,
        "action"      : "$N哈哈大笑，右手連揮，劈空掌勁逼得$n步法散亂，忽見青影閃晃，$N反手使出「$a」，劈空掌掌勁沉雄，風聲颯然，掌勢更加勁急",
        "force"       : 150,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "action"      : "$N雙掌翻出，虛合開實交錯揮舞，正當$n丈二金鋼摸不著邊時，$N突然移動身形反掌往$n的$l擊落",
        "force"       : 300,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIM"風起葉落捲殘雲"NOR,
    HIM"花影紛紛爭餘華"NOR,
    HIM"蒼海月明現花容"NOR,
    HIM"夜雨驚雷殘英落"NOR,
    HIM"旋風落英飛神劍"NOR,
    HIM"旋空無影裂狂風"NOR,
    HIM"海上明月共潮生"NOR,
    HIM"風華絕艷劍影深"NOR,
    HIM"劍照桃林深似霰"NOR,
    HIM"神劍寒渚散桃林"NOR,
    HIM"英落歌殘劍氣終"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N使出狂風絕技『$a』，左足支地，右腿繞著身子橫掃二圈，逼得$n退開三步，只見$N左掌斜揮，出手快捷無倫，向$n頭頂猛擊下去",
        "force"       : 650,
        "damage"      : 40,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "突然$N冷笑一聲，使出狂風絕技『$a』，身不動，臂不抬，右掌已然劈出，虛虛實實，幻不可測，$n一驚閃身，不料剛好撞上後著，$N右掌已抵在$n胸口",
        "force"       : 800,
        "damage"      : 40,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N聚氣於掌，眼露寒光，腳步似柳似絮飄移不定，只見$N形如月身如雲使出狂風絕技『$a』，頓時一股驚人的掌氣襲向$n",
        "force"       : 950,
        "damage"      : 40,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N翻身直上，瞬時$n感到一股驚人的壓迫感，只見$N在空中雙手劃圓，使出狂風絕技『$a』，'雙掌挾帶著驚人的氣勢由上而下直落$n的天靈",
        "force"       : 1050,
        "damage"      : 40,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N陡然間欺到$n面前，使出狂風絕技『$a』，刷刷刷連劈三掌，身子微側，又劈三掌，$n奮力守住門面，$N突然雙腿連環，連踢六腿，只見招術愈來愈快，轉眼間已遞出六六三十六招殺手",
        "force"       : 1300,
        "damage"      : 40,
        "damage_type" : "挫傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N運行全身真氣，頓時四周氣流劇變，$n見狀不由的心生警戒，只見$N身形移轉並且挾帶著銳利的刀風衝向$n，$n一時閃避不及被$N貼進身邊，說時遲那時快$N使出狂風絕技的禁招『$a』擊向$n胸口",
        "force"       : 1500,
        "damage"      : 60,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N一聲不響的揮掌攻去，一縷輕煙般拉近彼此間的距離，使出『$a』，催動奪命的駭人攻勢，虛虛實實，忽左忽右，上攻下襲，劈往$n",
        "force"       : 1500,
        "damage"      : 60,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N狂喝一聲，右手變拳為掌，以掌為劍電疾劈出，直搠$n咽喉，虛招一過，倏地換氣，緊接著使出『$a』，剎止衝勢改為橫移之勢，晃過$n身後，直擊筋骨",
        "force"       : 1500,
        "damage"      : 60,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N倏地拔身而起，一個翻騰，直抵三丈高空，變成頭下腳上，身形急速旋轉，一招『$a』，力道如雷，掌快如風，雙掌朝$n頭頂按去",
        "force"       : 1500,
        "damage"      : 60,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N真氣流轉，衣衫無風自動，掌化為指，一招『$a』，劍指千百點寒芒，閃電前移，衣袂飄揚，一道可剛可柔，千變萬化的劍氣，鑽入$n的肩井穴",
        "force"       : 1500,
        "damage"      : 60,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N突然一個縱身，靠著雙腿撐地的力道，筆直射上天空，到達離地達七、八丈的高處。接著一招『$a』，一個旋身，接連出掌如百花齊落一般轟向$n",
        "force"       : 1500,
        "damage"      : 60,
        "damage_type" : "瘀傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

mapping query_action(object me) {
    int addition = me->query_action_level("roingfist");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("roingfist");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("roingfist", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("peachforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "peachforce" || me->query_skill_mapped("unarmed") != "roingfist") {
        return 1;
    }

    if (random(850) + random(850) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("roingfist", 1);

        inspiration("\n"
                    "    "HIM"緋粉的"HIY"花辦  "HIW"伴著若有似無的"HIM"桃香\n"
                    "          "HIM"◢◢                 "HIW"*      "HIM"﹡\n"
                    "          "HIM"██        "HIG"沓"HIC"至而來          "HIR"＊\n"
                    "    "HIM"◥█◣"BRED"◥◤"NOR+HIM"██◣       "HIW"*                 "HIR"×\n"
                    "    "HIM"◥█"BRED"◤ "HIY"※ "HIM"◥"NOR+HIM"█◣    "HIW"於空 "HIC"於地     "HIM"﹡             "HIW"*\n"
                    "       "HIM"◢█"BRED"◢"HIM"█"NOR+HIM"◣      "HIR"＊      "HIW"※  "HIM"＊\n"
                    "       "HIM"██◥██        "HIB"於心 "HIR"於掌                 "HIR"＊\n"
                    "       "HIM"◤◤  ◥◥                   "HIM"﹡\n"
                    "    "HIW"放眼而去 "HIC"那"HIM"桃花"HIG"好似有軌跡般"HIY"飛落"NOR"  ＊\n"
                    "        "HIW"※                 "HIR"×\n"
                    "        "HIR"隨之而舞 "HIW"不覺間「" + me->query("name") + "」領悟了「" + my_attack_name[action_level] + HIW"」\n\n"NOR);
    }
}
