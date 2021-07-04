inherit "/std/skill/whip";

void create() {
    name = "牛蛇生死搏";
}

mapping *action = ({
    ([
        "name"        : HIC"九"HIY"牛"HIC"二"HIW"虎"NOR,
        "action"      : "$N手中$w一幌，腳下步法連換向右滑出三步，反手一招「$a」背轉過身來，身子微矮，手裡$w緩緩地倒刺向$n的$l",
        "damage"      : 40,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIY"畫"NOR + YEL"蛇"HIY"添足"NOR,
        "action"      : "$N左手使了破穴指，一招「$a」，手如靈蛇閃扭不定攻向$n，打中$n的$l",
        "damage"      : 42,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : HIC"引"HIW"蛇出"HIC"洞"NOR,
        "action"      : "$N丟下長鞭並做了個～來啊～來啊～來打我的姿勢，$n往前跨去！突然$N一招「$a」一指點得$n鮮血狂吐",
        "damage"      : 30,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : HIY"牛"HIC"鬼"HIW"蛇"HIM"神"NOR,
        "action"      : "$N深吸口氣，突地蠻腰一扭如大蛇轉身，左手指天、口中喃喃，手中$w一握，一招「$a」，舉鞭向$n的$l處猛然抽去",
        "damage"      : 30,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : YEL"牛"HIR"頭"HIB"馬"HIM"面"NOR,
        "action"      : "$N身法連換，忽至$n左側，又忽飄至右；眨眼間手中$w朝左處，長鞭似蛇糾纏不休的一招「$a」，鞭勢有如暴雨驟下，鞭勢重逾萬斤抽向$n的$l處",
        "damage"      : 30,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : HIW"虎"HIC"頭"HIG"蛇"HIR"尾"NOR,
        "action"      : "$N迅捷狠辣的出手，使了虛招，$n出力過猛正想後退，想不到$n$l卻已經中招，好一招「$a」",
        "damage"      : 25,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : HIG"牛"NOR + GRN"刀"HIG"小"NOR + GRN"試"NOR,
        "action"      : "$N手中$w一挺倏地抽出，連綿不止，一氣五鞭，一套「$a」朝著$n的$l處疾點",
        "damage"      : 37,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : CYN"蛇鼠"YEL"一窩"NOR,
        "action"      : "$N忽然往地上滾，右手鞭虛做撩陰式，左手握了蛇形，猛往$n身上$l刺去，原來是一招「$a」",
        "damage"      : 37,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : HIW"九"HIB"牛"HIW"一"HIB"毛"NOR,
        "action"      : "只見$N右掌出了虛招，左手$w往$n$l處甩了過去，使了一記重達千斤的「$a」一招，$w直往$n$l處落下",
        "damage"      : 35,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : HIM"杯"HIB"弓"HIM"蛇"HIB"影"NOR,
        "action"      : "$N長聲嘯到：「$a」，猛然劈一記掌刀！鞭上使了劍訣虛劃，雙腳卻往$n$l夾去",
        "damage"      : 32,
        "damage_type" : "斲傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    "打"HIG"蛇"HIR"隨"NOR"棍",
    HIM"對"HIW"牛"NOR"彈琴",
    "打草"HIB"驚"HIG"蛇"NOR,
    "隔"HIG"山打"HIW"牛"NOR,
    "一"HIY"蛇撼"HIC"三"NOR"關",
    "翻身"HIM"震"HIR"四海"NOR,
    HIW"坐看"HIC"牛郎"HIM"織女星"NOR,
    HIY"靈蛇"HIM"舞動"HIC"墜"HIR"紅塵"NOR,
    HIM"牛轉乾坤"HIC"蛇無極"NOR,
    HIY"蛇"HIG"牛"HIW"相搏爭何事"NOR,
    HIW"牛蛇征戰"HIB"我"HIR"為"HIY"尊"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N喝道：小賊，教你知道我唐門絕藝「"HIR"牛蛇生死搏"NOR"」的厲害！蓄勁發力，一招『$a』直劈$n$l",
        "damage"      : 100,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N全身氾紅，四周空氣為固結，猛然鞭聲大作，啪～聲一招『$a』，$n受到聲波震盪，受了不小的傷",
        "damage"      : 140,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N吼著:接我一招『$a』長鞭虛閃，重重鞭影往$n招呼！手上也沒停著，一連點了你身上十六處重穴",
        "damage"      : 180,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N一彈$w，出鞭疾快刺向$n，鞭離$n尚有三尺處便突然急轉如渦輪！一式『$a』，去勢奇疾而鞭不停，有如閃雷疾速點向$n的$l處",
        "damage"      : 200,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$n提氣一縱，手中招式急攻$N招身要穴。$N一招『$a』，體內真氣行走雙掌，轟的一聲！擊出兩股氣勁，擊向閃避不及的$n",
        "damage"      : 250,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "一招『$a』，$N長鞭突然潛入地下，一時間地面由如萬牛竄動，$n大驚之下，手足無措連忙運功穩住身行，門戶大開",
        "damage"      : 300,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N身形一變，腳下如踏輕空，輕點貓步移近了$n的身邊；手中$w一挺，如御車駕馬行熟路般接連鞭，一鞭快似一鞭，刺向$n的$l！好一招精妙絕倫的『$a』",
        "damage"      : 250,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N手揮$w鞭落如閃電般霹靂作響，冷冷一聲：『$a』，身形猛然一轉威勢而下，$n全身彷彿置於蛇口毒牙之下",
        "damage"      : 250,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N丟下了手中的$w，彷入無我之境，我是空空是我，全身黃芒大做，忽地$N用腳挑起了$w，往$n砸去，$n受你身形迷惑，中了這招好一招精妙絕倫的『$a』",
        "damage"      : 270,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$n卸掉$N的攻擊，趁機搶近$N身邊，一招往$N要害刺去！危急中，$N一招『$a』棄$w改用肉掌夾勁平推而出，打向$N$l",
        "damage"      : 350,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N一招『$a』，高舉$w，盡納四方真氣，扯動天雷，只見$N周身電光急馳，狂風走石。突然轟然一聲，天光一閃，天外三顆隕石如發怒毒蛇，如暴衝猛牛，擊向$n",
        "damage"      : 400,
        "damage_type" : "刺傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("cs-whip");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("cs-whip", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("six-of-force", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "six-of-force" || me->query_skill_mapped("whip") != "cs-whip") {
        return 1;
    }

    if (random(1700) + random(1700) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("cs-whip", 1);

        inspiration("\n"
                    HIG"   ︿＿︿      "HIR"●    "HIB"～╮   "HIW"Λ  Λ "HIM"<" + me->query("name") + "("HIB + me->query("id") + HIM")悟出了新牛蛇生死搏>\n"
                    HIG" ＜‵  ′＞  "HIR"∕█﹨"HIB"～～╯ "HIW"＜  ︺  ＞ "HIC"只見天地同鳴 ～哞哞～哞～哞～\n"
                    HIG"    ＶＶ       "HIR"▼-          "HIW"[‵′]   "HIM"<之中的一招:『" + my_attack_name[action_level] + HIM"』>\n"
                    HIG"====└┘     "HIR"∕ ∕        "HIW"//╰oo╯|| "HIY"同時山海齊嘯 ～嘶～～～嘶嘶嘶\n\n"NOR);
    }
}

mapping query_action(object me) {
    int addition = me->query_action_level("cs-whip");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
