inherit "/std/skill/whip";

void create() {
    name = "飛燕穿雲鞭";
}

mapping *action = ({
    ([
        "name"        : HIC"穿雲破日"NOR,
        "action"      : "$N使一招「$a」，手揚鞭起，手中$w將$n團團圍住，內力一吐，鞭圈勻速縮小！向$n的$l揮去",
        "damage"      : 70,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIM"飛燕歸巢"NOR,
        "action"      : "$N左手虛晃一招，右手$w一招「$a」，手中$w尤似一條青龍迅速擊向$n的$l",
        "damage"      : 65,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIG"雁入雲霄"NOR,
        "action"      : "$N騰空而起，手中$w舞成圓環，右手$w一招「$a」壓向$n，令$n無處可躲",
        "damage"      : 80,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : HIY"飛燕騰空"NOR,
        "action"      : "$N力貫鞭梢，一招「$a」，手中$w舞出滿天鞭影，排山倒海般掃向$n的$l",
        "damage"      : 100,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : HIC"敝雲遮日"NOR,
        "action"      : "$N往前一縱，忽然身形倒轉，一招「$a」，手中$w如鬼魅一般，神不知鬼不覺地襲向$n的$l",
        "damage"      : 50,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : MAG"雁翅展虹"NOR,
        "action"      : "$N力貫鞭稍，一招「$a」手中$w猶如彩虹般擊向$n，已將$n籠罩于鞭下",
        "damage"      : 45,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIR"愁燕衍雲"NOR,
        "action"      : "$N右腳突然向前邁出，一招「$a」，右手$w如同鬼魅一般無聲無息的刺向$n的$l",
        "damage"      : 55,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIC"雲飄似燕"NOR,
        "action"      : "$N晃出滿天鞭影，一招「$a」虛虛實實的鞭影，鋪天蓋地的擊向$n的$l",
        "damage"      : 75,
        "damage_type" : "割傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIC"孤雁獨鳴"NOR,
    HIG"萬燕齊飛"NOR,
    HIY"鴻雁長飛"NOR,
    HIM"金雁尋歸"NOR,
    HIR"秋風伴愁燕"NOR,
    HIC"落葉殘飛燕"NOR,
    HIG"穿雲破日萬燕騰"NOR,
    HIM"飛雁舞月不留痕"NOR,
    HIM"燕渡"HIB"寒潭"HIC"凌空影"NOR,
    HIR"怒雁"HIG"林間"HIW"嘯長空"NOR,
    HIY"任"HIC"迴旋"NOR"．"HIR"舞"HIG"風影"NOR"．"HIM"歸雁"HIG"寄"HIC"流雲"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N緩緩轉動手中$w，一式『$a』，手中$w去勢奇慢，不帶絲毫破空之聲，但所過之處塵土飛揚，$w上所帶勁風已刮$n撲面生疼",
        "damage"      : 110,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N佇立不動，揮動$w，使出密招『$a』，手中$w緩緩向$n的腰間擊去，去勢雖不勁急，但鞭勢沉滯，如同壓了幾千斤泥沙一般",
        "damage"      : 150,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N冷哼一聲，急催內力，使出一招『$a』，鞭勢加快，只見十數重鞭影如驚滔駭浪般襲向$n的$l",
        "damage"      : 160,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N使出一招『$a』，$w一端陡然一翻，點向$n前胸，勁風所至，將$n退路封住",
        "damage"      : 180,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N狂嘯一聲，雙目精光大盛，一招『$a』，鞭勢展開，或橫掃直擊，或盤旋翻卷襲向$n的$l",
        "damage"      : 230,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N身形遊走不定，忽地使出一招『$a』，$w上風聲大作，剎那間數十條鞭影從四面八方向$n周身要害擊去",
        "damage"      : 250,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N一聲清嘯，內力急催，一招穿雲絕學『$a』，但見寒星點點，或七虛一實襲向$n的$l",
        "damage"      : 270,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N身形飄然而起，身子在空中一旋，手中的$w便跟著飛揚起來，身法若舞梨花，好看至極，殊不知鞭鋒一轉，萬點星光蹦出攏罩$n周身大穴，正是鞭法絕學『$a』",
        "damage"      : 340,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N忽而拔身而起，彈向近九丈的高空，化身一隻輕盈的飛燕，突然一招『$a』$w以肉眼難以看清楚的速度，作螺旋形的前進，電光石火般一下子便把$n纏個結實",
        "damage"      : 340,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N手腕一震，$w頓時繃緊，腳下動作不停，身形隨即上前，一招『$a』一道銀色光芒由空中傾瀉而下，猶如橫飛的銀鎗襲向$n",
        "damage"      : 340,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N腳步向左一滑，突然迅移，宛如流水行雲般迫近對手，倏忽間閃到對手一側，右手猛縮，奧義『$a』$w化作萬千鞭影，像驟雨狂風般向$n罩去",
        "damage"      : 340,
        "damage_type" : "割傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("feiyanwhip");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("feiyanwhip", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("skyevilforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "skyevilforce" || me->query_skill_mapped("whip") != "feiyanwhip") {
        return 1;
    }

    if (random(2000) + random(2000) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("feiyanwhip", 1);

        inspiration("\n"
                    "\t"YEL" ╭────────────────────────╮"NOR"\n"
                    "\t"YEL" │"HIW"≡ 遠方傳來一陣爆響 ≡"YEL"                          │"NOR"\n"
                    "\t"YEL" │                 "HIW" ≡ 天際白雲被畫分兩半 ≡ "YEL"     │"NOR"\n"
                    "\t"YEL" │                                                │ "NOR"\n"
                    "\t"HIM"≧≦      "HIB"只見"HIG + me->query("name") + HIY" 單手高舉長鞭死命揮舞"YEL"            "NOR"\n"
                    "\t"HIB" ◆"HIW"領悟了"HIR"飛燕穿雲"HIW"的一個祕招－「"BLINK + my_attack_name[action_level] + HIW"」"YEL + NOR"\n"
                    "\t"HIB" ◆                                               "YEL" │"NOR"\n"
                    "\t"HIY" ￥"HIC"￡"HIG"◎"YEL"──────────────────────╯"NOR"\n\n");
    }
}

int valid_learn(object me) {
    if (me->query_skill("feiyanwhip", 1) < 1) {
        if (me->query("class") != "sanjiue") {
            return notify_fail("這項技能只有三絕盟主才能傳授。\n");
        }

        if (me->query("family/generation") != 25) {
            return notify_fail("只有門主的嫡傳弟子才能領悟。\n");
        }
    }

    return ::valid_learn(me);
}

mapping query_action(object me) {
    int addition = me->query_action_level("feiyanwhip");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
