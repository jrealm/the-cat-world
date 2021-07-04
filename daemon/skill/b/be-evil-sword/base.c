inherit "/std/skill/sword";

void create() {
    name = "辟邪劍法";
}

mapping *action = ({
    ([
        "name"        : HIC"流星飛墜"NOR,
        "action"      : "$N躍至半空一招「$a」，由上往下，手中$w狂風驟雨般地向$n的$l連攻數劍",
        "damage"      : 50,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIC"群魔亂舞"NOR,
        "action"      : "$N身形一轉，幻出數道身影一招「$a」手中$w刺向$n的$l",
        "damage"      : 60,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIC"鬼影幢幢"NOR,
        "action"      : "$N身形飄忽，有如鬼魅一招「$a」手中$w脫手而出，直取$n的$l",
        "damage"      : 60,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIC"花開見佛"NOR,
        "action"      : "$N一招「$a」手中$w四下撥動擋去$n的攻勢，順勢旋身手中$w直刺$n的$l",
        "damage"      : 45,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIC"群邪辟易"NOR,
        "action"      : "$N屈身作勢一招「$a」，手中$w突然連點$n三十六道大穴，$n慌忙避開，$N手中$w一緩，直取$n的$l",
        "damage"      : 70,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIC"飛燕穿柳"NOR,
        "action"      : "$N移步向西，一招「$a」一聲嬌喝，$N身軀猶如飛燕般直逼$n，手中$w直取$n的$l",
        "damage"      : 50,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIC"紫氣東來"NOR,
        "action"      : "$N全身爆出一陣寒氣一式「$a」手中$w精芒炫目，直取$n的$l",
        "damage"      : 60,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIC"流星趕月"NOR,
        "action"      : "$N一招「$a」腳踏連環，手腕翻轉$w幻出數道寒光直逼$n的$l",
        "damage"      : 55,
        "damage_type" : "刺傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIR"舞袖"HIM"碎"HIG"玲瓏鳳凰"NOR,
    HIR"懵懂"HIM"慾"HIG"歡喜無量"NOR,
    HIR"撲朔"HIM"意"HIC"人前顯貴"NOR,
    HIR"香魂"HIM"蕩"HIC"鴛鴦迷離"NOR,
    HIR"薰風"HIM"醉"BLK"雪鬢淋漓"NOR,
    HIR"淒然"HIM"笑"BLK"人世汙濁"NOR,
    HIR"瘋魔"HIM"念"HIW"心繫成活"NOR,
    HIR"日月"HIM"憾"HIW"劍指長空"NOR,
    HIR"無悔"HIM"願"HIY"混沌絕世"NOR,
    HIR"混沌"HIM"劍"HIR"千古不敗"NOR,
    HIR"鋒芒"HIM"盡"NOR + HBYEL"陰陽無邊"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N柳腰輕移、細眉微蹙，雙袖微擺，以$w舞出『$a』，$n雙眼迷離，渾然未覺劍尖已至$l",
        "damage"      : 75,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N輕踩蓮步使出『$a』，$w幻化無數風花雪月，直把$n撩撥得心笙搖動，腳步一個踉蹌，$N瞬時躍上半空，劍尖直指$n$l",
        "damage"      : 100,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N緩下步伐，$w虛垂在地，$n正專注尋獵破綻之時，$N身影卻已飄至$n身前，一式『$a』，由下至上劃過$n正面身軀，誓將$n一刀兩斷",
        "damage"      : 125,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N吐氣如蘭，帶著一股香風直撲$n懷裡，暗藏於袖中的$w直透$n心窩，一招『$a』現其淒迷絢爛",
        "damage"      : 150,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N以極快速度繞行$n數圈，香鬢撲打在$n臉上，讓他一時精神渙散，『$a』趁勢輕吐$w劍尖，試圖千刀萬剮$n",
        "damage"      : 175,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N淺笑兮然，卻突然轉而淒然大笑：只恨世間男子陽汙，女子陰穢，唯陰陽混沌者歡喜無量，『$a』聲聲如刀，入$n耳中，直教$n心神大亂",
        "damage"      : 200,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N手挽劍花，以『$a』踏出雜亂無章步伐，心心念念滅敵存己，$w看似亂舞，劍尖卻朝$n$l刺出數劍",
        "damage"      : 225,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "喝！$N一聲怒吼，直斥天地不仁，『$a』以$w為勢，沖天而起，奪日月光輝為己用，一抹長虹劃向$n",
        "damage"      : 250,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N雙手緊握$w，以無悔之姿使出『$a』，無悔之劍帶著殺戮劍意刺透$n$l",
        "damage"      : 275,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N將$w正立於心，以皓皓之勢使出禁招『$a』，瞬時將$w幻化萬千劍影斬向$n",
        "damage"      : 300,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N面露絕望之色，然絕望之中卻顯露出瘋狂，狂笑著，狂喊著。手中$w揮舞，禁招『$a』滿天劍雨綿延擴展三尺，將$n的身影籠罩其中",
        "damage"      : 300,
        "damage_type" : "刺傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level;

    if (me->query("gender") != "中性") {
        return 6;
    }

    action_level = me->query_action_level("be-evil-sword");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("be-evil-sword", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("pollyforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "pollyforce" || me->query_skill_mapped("sword") != "be-evil-sword") {
        return 1;
    }

    if (random(1200) + random(1200) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("be-evil-sword", 1);

        inspiration("\n"
                    "\t       "HIR"日出東方  "HIY"唯我不敗  "HIM"揮劍自宮  "HIC"無勢稱霸\n\n"
                    "\t          "HIG"滾滾"HIY"劍光"HIR"中  "HIM"只聽見"HIW + me->query("name") + HIY"一聲長嘯\n\n"
                    "\t"HIR"辟邪劍法"HIY"禁招"HIW"【" + my_attack_name[action_level] + HIW"】"HIC"又現"HIW"江湖，"HIM"再次"HIR"血洗"HIW"武林\n\n"NOR);
    }
}

int valid_learn(object me) {
    if (me->query_skill("be-evil-sword", 1) < 1) {
        if (me->query("class") != "sunmoon") {
            return notify_fail("這項技能只能找東方不敗學。\n");
        }

        if (me->query("family/generation") != 3) {
            return notify_fail("只有東方不敗的嫡傳弟子才可以學。\n");
        }
    }

    if (me->query("gender") != "中性") {
        return notify_fail("辟邪劍法需自宮方能學習。\n");
    }

    return ::valid_learn(me);
}

mapping query_action(object me) {
    int addition = me->query_action_level("be-evil-sword");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
