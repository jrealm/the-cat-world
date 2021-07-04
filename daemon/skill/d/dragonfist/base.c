inherit "/std/skill/unarmed";

void create() {
    name = "降龍十八掌";
}

mapping *action = ({
    ([
        "name"        : HIW"亢"HIG"龍"HIW"有"HIG"悔"NOR,
        "action"      : "$N氣沉丹田，雙足弓步一踏，大地彷彿為之震動，原來是$N使出"HIY"降龍掌法"NOR"中最剛猛的「$a」，只見掌氣以萬鈞之勢向$n襲去",
        "force"       : 400,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIC"見龍在田"NOR,
        "action"      : "$N運起神妙的步法，使出一招「$a」，身影忽左忽右，若遊龍嬉戲，並拍出數掌無比剛猛的掌風襲向$n的$l",
        "force"       : 400,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIW"神龍"HIC"擺尾"NOR,
        "action"      : "$N以耳代目，用心去感覺氣的流向，使出"HIY"降龍掌法"NOR"中最精妙的「$a」，一個旋身起落，一掌擊向$n的$l，彷彿神龍反撲，其勢銳不可擋",
        "force"       : 400,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIG"飛龍在天"NOR,
        "action"      : "$N一聲長嘯，躍上高空使出一招「$a」，掌氣罩住了$n全身周身大穴，使$n幾欲暈眩而倒",
        "force"       : 400,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIW"潛龍勿用"NOR,
        "action"      : "$N使出一招「$a」，左手一掌推出半式虛招擾亂$n，右手便又擊出實拳攻向$n的$l",
        "force"       : 400,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIG"時乘"HIY"六龍"NOR,
        "action"      : "$N一式「$a」擊出，彷彿在一瞬間拍出六掌，分別擊向$n的六處破綻，使得$n傻在那邊，一時不知所措",
        "force"       : 400,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIW"利涉大川"NOR,
        "action"      : "$N身形一變，一式「$a」使了出來，一掌擊向$n，只見掌氣以排山倒海之勢襲向$n",
        "force"       : 400,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIY"突兀其來"NOR,
        "action"      : "$N使出一招「$a」，身形似一條蛟龍般地欺近至$n身前迅速拍出一掌",
        "force"       : 400,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIC"或躍於淵"NOR,
        "action"      : "忽然間，$N身形一變，使出一式「$a」，躍上高空對著$n擊出勁道十足的數掌",
        "force"       : 400,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIC"雙龍取水"NOR,
        "action"      : "只見$N雙掌平推而出，使出一式「$a」，兩股掌風揪結在一起爆出宏大的威力，$n只覺心頭一悶，掌氣已近在身前了",
        "force"       : 400,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIM"龍戰於野"NOR,
        "action"      : "$N急速旋轉著身驅，使出一式「$a」，藉著旋轉的力量加強勁道，朝$n的$l擊出石破天驚的一掌",
        "force"       : 400,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIC"密雲不雨"NOR,
        "action"      : "$N身形微動，使出一式「$a」，只見$N大喝一聲，雙掌推出，雙手掌氣已綿延不絕地攻向$n",
        "force"       : 500,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIC"震"HIY"驚"HIM"百里"NOR,
        "action"      : "$N朝著$n擊出一掌「$a」，看似平凡，其實蘊涵絕大的破壞力，彷彿龍嘯九天，不可攖其鋒銳",
        "force"       : 500,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIY"鴻漸於陸"NOR,
        "action"      : "只見$N一式「$a」使出，身形幾個起落已欺近至$n身前，雙手劃了圓同時擊向$n的$l",
        "force"       : 450,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIW"蟄"HIG"龍"HIY"驚"HIC"伏"NOR,
        "action"      : "$N使出一招「$a」，身形彷彿滿弓之弦般疾射向$n，並趁著$n尚未會意過來，朝著$n的$l擊出強勁的一掌",
        "force"       : 500,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIW"履霜冰至"NOR,
        "action"      : "只見$N一招「$a」使出，身形忽左忽右，突然一個轉身朝著$n的$l拍出一掌",
        "force"       : 450,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIG"氐羊觸藩"NOR,
        "action"      : "$N一式「$a」使出，對著$n拍出數掌虛招，正當$n覺得奇怪之際，$N已繞至$n身後，對$n擊出威力十足的一掌",
        "force"       : 500,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIG"損則有孚"NOR,
        "action"      : "$N使出一式「$a」，對$n擊出一掌，並在掌氣未至之際，欺近$n再發出一掌，使兩股掌氣和成一氣擊向$n",
        "force"       : 500,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIW"夜龍無垠"NOR,
    HIW"九龍奪珠"NOR,
    HIY"迴龍反嚙"NOR,
    HIY"雙龍出岬"NOR,
    HIR"九霄龍吼"NOR,
    HIR"青龍嘯天"NOR,
    HIM"雲龍無際"NOR,
    HIR"七海"HIY"蛟龍"HIB"浪滔天"NOR,
    HIC"八方"HIB"龍吟"HIM"震天地"NOR,
    HIW"九龍迴旋破九霄"NOR,
    HIY"皇龍"HIC"騰海"HIM"撼天關"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "忽見$N一掌往$n面門輕拂，驀地蓄勁握拳，暴出點點星火，右掌電閃而出，一招『$a』以迅雷不及掩耳之勢襲向$n$l",
        "force"       : 600,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N的身形急速移動，使出『$a』，將$n困在中間，並朝$n各大要門擊出九掌",
        "force"       : 750,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "一陣飛砂走石突起，$N團身急轉，掌底挾帶著風雷之勢，驀地躍上半空，一記『$a』似飛龍掠地般從$n身後反撲而至",
        "force"       : 900,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N忽然在惡鬥中僵立不動，背水一擊似的掌夾內勁，擊出一記『$a』，就在間不容髮之刻，瘁起發難，雙掌化爪撲向$n",
        "force"       : 1100,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N擊出『$a』一個箭步移到敵人面前虛晃一掌，當$n企圖招架開，$N已移到$n背後往腦門擊出致命的一掌",
        "force"       : 1200,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "龍吼之聲震耳欲聾，只見$N一個縱身躍上半空，連續打出幾道掌風其形看似一條龍形氣勁，擊向$n天靈蓋！好一招精妙絕倫的『$a』",
        "force"       : 1300,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N使出『$a』！連續朝$n各個方位轟出數掌，掌勁連綿不絕、剛中帶柔、柔裡夾威，頓時只見滿天拳雲，層疊而至",
        "force"       : 1400,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N箭步低伏蓄勢待發，衣袍無風自鼓！忽地右拳微轉，猛擊左掌！數道水柱破地而出擊向$n，好一式『$a』，果真勢如狂濤，擋者披靡",
        "force"       : 1500,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N力運掌中，雄渾的掌力牽動四方氣流，驀然狂喝巨力急吐扯動天電！將$n籠罩於無匹掌風、奔雷狂擊中！『$a』威力著實驚世駭俗",
        "force"       : 1600,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N使出降龍十八掌秘招『$a』！一瞬風雲變色，日月無光，天地精華盡納掌中，橫掌平推一連九次！龍勁層層相疊！一層猛於一層氣勁直擊$n",
        "force"       : 1800,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N身上爆出金光席捲天際，彷如水波盪漾擴散開來，大喝：『$a』，半拳半掌直擊橫推，一股至剛至陽霸道無雙的氣勢奪出，一時空間震動，驚天動地的龍吟之聲，隨著金色光華朝著$n飛去",
        "force"       : 1800,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

mapping query_action(object me) {
    int addition = me->query_action_level("dragonfist");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("dragonfist");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("dragonfist", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("dragonforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "dragonforce" || me->query_skill_mapped("unarmed") != "dragonfist") {
        return 1;
    }

    if (random(850) + random(850) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("dragonfist", 1);

        inspiration(HIY"\n       ◥◣      ◢◤"NOR
                    HIY"\n       ◢◤      ◥◣            "HIM"遠方忽然傳來一陣龍吟"NOR
                    HIY"\n       ◥◣      ◢◤"
                    NOR"\n     ◢▄"YEL"█▅▄▅█"NOR"▄◣          "GRN"一隻"HIG"青龍"NOR + GRN"一飛衝天"
                    NOR"\n     ◥"BWHT"  "NOR + BLK + BYEL"▃"NOR + BLK"  "BLK + BGRN"王"NOR"  "BLK + BYEL"▃"NOR + BWHT"  "NOR"◤"
                       "\n    ◥"BLK + BWHT"﹨"NOR + BLK + BGRN"◥"NOR"● "BLK + BGRN"mm"NOR" ●"BLK + BGRN"◤"NOR + BLK + BWHT"∕"NOR"◤         "HIW"只見  "HIR  + me->query("name") + HIW"  狂聲大笑"
                    NOR"\n    "BLK + BWHT"﹨﹨ "NOR + HIG + BGRN"≡ ▄▄ ≡"NOR + BLK + BWHT"∕∕"NOR"◤"
                       "\n   ◢"BWHT"    "NOR + GRN + BBLK"▇▆▅▆▇"NOR + BWHT"   "NOR"◣         "HIW"～"HIM"哇"HIW"～"HIM"哈"HIW"～"HIM"哈哈"HIW"～～"
                    NOR"\n     ◢"BLK + BWHT"∕"NOR + BGRN" "NOR + BRED"◤▼▼◥"NOR + BGRN" "NOR + BLK + BWHT"﹨"NOR"◣"
                       "\n    ◢"BLK + BWHT"∕"NOR + BGRN"▉"NOR + HIM + BRED"   ω   "NOR + GRN + BWHT"▏"NOR + BLK + BWHT"﹨"HIY + BYEL"◥◥◥◥"NOR"   "HIW"看來是領悟了"HIR"降龍十八掌"HIW"的"
                    NOR"\n   ◤◤◢"NOR + YEL + BGRN"▊"NOR + BRED"◣▲◢"NOR + GRN + BYEL"▎"NOR"◣"HIC + BYEL"  ◢█"NOR + HIC + BGRN"◣"
                    NOR"\n        ◤"YEL + BGRN"▄▅▅▄"NOR"◥ "HIY + BYEL"◤"NOR + HIC"███"NOR"    "HIW"『 " + my_attack_name[action_level] + HIW" 』"
                    NOR"\n                     "HIC + BGRN"  ◥█"NOR + HIC"◤\n\n"NOR);
    }
}

int valid_learn(object me) {
    if (me->query_skill("dragonfist", 1) < 1) {
        if (me->query("class") != "fighter") {
            return notify_fail("這項技能只能找洪七公學。\n");
        }

        if (me->query("family/generation") != 19) {
            return notify_fail("只有洪七公的嫡傳弟子才可以學。\n");
        }
    }

    return ::valid_learn(me);
}
