inherit "/std/skill/staff";

void create() {
    name = "打狗棒法";
}

mapping *action = ({
    ([
        "name"        : HIY"狗急"HIC"跳牆"NOR,
        "action"      : "$N倏然間使出一式「$a」，手中$w以無比絕倫的速度挺向$n的下盤，$N趁勢將$w上挑，重重擊向$n的$l",
        "damage"      : 60,
        "force"       : 80,
        "damage_type" : "挫傷",
    ]),
    ([
        "name"        : HIW"斜打"HIC"狗背"NOR,
        "action"      : "$N氣沉心靜，手中$w微動，剎那間一式「$a」使了出來，手中$w氣勢萬鈞地向$n的$l點了過去",
        "damage"      : 60,
        "force"       : 80,
        "damage_type" : "挫傷",
    ]),
    ([
        "name"        : HIG"棒打"HIY"雙獒"NOR,
        "action"      : "$N哼的一聲，一式「$a」使了出來，身影仿彿幻化成兩個，以迅雷之勢，雙雙擊向了$n的破綻，使$n左滯右肘",
        "damage"      : 60,
        "force"       : 80,
        "damage_type" : "挫傷",
    ]),
    ([
        "name"        : HIC"天下"HIW"無狗"NOR,
        "action"      : "$N收攝心神，使出"HIY"打狗棒法"NOR"最高的境界「$a」，$n只覺眼前一花，已被$N無數身影所籠罩，$N趁機揮舞著$w，以破山烈地之勢掃向$n",
        "damage"      : 40,
        "damage_type" : "挫傷",
    ]),
    ([
        "name"        : HIW"棒壓"HIC"狗背"NOR,
        "action"      : "$N以絕快的身法，瞬間游走至$n的背後，隨即使出一招「$a」，$w擊中$n的脊椎",
        "damage"      : 40,
        "damage_type" : "挫傷",
    ]),
    ([
        "name"        : HIC"撥狗朝"HIY"天"NOR,
        "action"      : "$N$w伸出，一招「$a」，將杖身挑著$n的身子甩了上來！杖頭直翻起來，砸向$n額角",
        "damage"      : 40,
        "damage_type" : "挫傷",
    ]),
    ([
        "name"        : HIW"打"NOR + GRN"草"HIW"驚蛇"NOR,
        "action"      : "$N將$w橫舉胸前，左一招「$a」，右一招「"HIC"撥"NOR + GRN"草"HIC"尋蛇"NOR"」，分攻$n兩側，只見$n忽露破綻，叫聲：「著！」一棒打在$n的天靈蓋上",
        "damage"      : 40,
        "damage_type" : "挫傷",
    ]),
    ([
        "name"        : HIY"黃"HIG"狗"HIY"撒"HIG"尿"NOR,
        "action"      : "$n捨命的攻擊$N，只見$N手端$w使出「$a」，棒勢一迴後狠狠地擊向$n的臉部",
        "damage"      : 40,
        "damage_type" : "挫傷",
    ]),
    ([
        "name"        : HIB"人"HIY"狗"HIB"爭食"NOR,
        "action"      : "$N$w使了一記「$a」，忽地翻身一滾$w伸處，向$n腰間挑去",
        "damage"      : 40,
        "damage_type" : "挫傷",
    ]),
    ([
        "name"        : HIR"快擊"HIY"狗"HIR"臀"NOR,
        "action"      : "$n以絕強的攻勢由上攻向$N，$N在這險象環生之際，手持$w揮出「$a」，棒棒戳向$n$l",
        "damage"      : 40,
        "damage_type" : "挫傷",
    ]),
    ([
        "name"        : HIR"倚"HIB"杖"HIG"喝"HIW"狗"NOR,
        "action"      : "$N在這險象環生之際，隻手舉$w朝天揮出「$a」，棍中夾經硬捶$n$l",
        "damage"      : 40,
        "damage_type" : "挫傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIW"絆"HIY"字訣"NOR,
    HIG"劈"HIY"字訣"NOR,
    HIC"纏"HIY"字訣"NOR,
    HIM"戳"HIY"字訣"NOR,
    HIR"挑"HIY"字訣"NOR,
    HIB"引"HIY"字訣"NOR,
    HIY"封字訣"NOR,
    HIY + BLINK"轉"NOR + HIY"字訣"NOR,
    HIW + BLK"提"HIY"字訣"NOR,
    HIW + BMAG"鉤"NOR + HIY"字訣"NOR,
    HIW + BCYN"攔"NOR + HIY"字訣"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N持$w忽使出打狗棒法中的『$a』，棍影綿密如絲，圍繞在$n身旁，$N趁此空檔攻向$n$l",
        "damage"      : 120,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "內力灌注$w一招『$a』，勢如奔雷掃向$n，$n避不及而被打飛了",
        "damage"      : 150,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "『$a』一出勢如「"HIG"天狗食日"NOR"」，棒勢完全壟罩住$n，你一記重棍就往$n身上招呼過去",
        "damage"      : 180,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N心念一動一招『$a』腳步如飛身形移到$n身後，手中的$w直搗$n的後背",
        "damage"      : 210,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N以手中的$w連環點地，猶如「"HIM"竹籬擋"HIW"犬"NOR"」擋住$n的攻勢，順勢轉為以『$a』使了招「"HIB"掃"HIW"狗"HIB"出門"NOR"」攻向$n$l",
        "damage"      : 240,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$n出招在即時，只見$N使出『$a』把$n的武器蕩開，在$n還不知所措時，順勢一棍攻向$n$l",
        "damage"      : 270,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N手中$w隨大氣流動，使了『$a』，將$n攻勢完全鎖死，$N趁此空檔拿著手中的$w往$n捻去",
        "damage"      : 300,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N內力疾走全身，使出『$a』從「"HIY"棒打"HIW"雙犬"NOR"」轉招至「"HIG"天下"HIM"無狗"NOR"」，攻的$n手足無措",
        "damage"      : 330,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N右腿向前腿一彈，左手將$w向後一抽，回身一招『$a』揮向$w，$w身子被一棍掃飛到半空十丈之高，隨即重重摔下，手腳抽搐",
        "damage"      : 330,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N握棍之右手，如出反背拳一般，猛然向外一抖，同時左手一鬆，$w棍梢隨即抖出，使出『$a』甩向$w頭部、肋部等處，頓時讓其一陣暈眩",
        "damage"      : 330,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N胳膊掄動，手腕一抖，$w由上到下猛力劈擊，乾淨利索，一棍劈中後跟著一招『$a』，仿佛甩鞭子一樣將$w甩向$n，而後再迅速收回",
        "damage"      : 330,
        "damage_type" : "刺傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("pkdogstaff");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("pkdogstaff", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("dragonforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "dragonforce" || me->query_skill_mapped("staff") != "pkdogstaff") {
        return 1;
    }

    if (random(2000) + random(2000) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("pkdogstaff", 1);

        inspiration(HIW
                    "\n  ﹨●     ∕    ◢◢ 　　　～～～遠遠傳來狗叫聲～～狗叫狂吠了幾聲！～～～"
                    "\n    █﹨ ∕    ■■■    ◤　　　　汪！汪！啊鳴～～～～～～～～～"
                    "\n    ▼ ∕        ■■■■  看來是有人打出了打狗棒法中的－－－『" + my_attack_name[action_level] + HIW"』！"
                    "\n   ∕﹨          ■    ■   只見"HIC + me->query("name") + HIW"縱聲狂笑～哈哈哈，我領悟了！\n\n"NOR);
    }
}

int valid_learn(object me) {
    if (me->query_skill("pkdogstaff", 1) < 1) {
        return 0;
    }

    return ::valid_learn(me);
}

mapping query_action(object me) {
    int addition = me->query_action_level("pkdogstaff");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
