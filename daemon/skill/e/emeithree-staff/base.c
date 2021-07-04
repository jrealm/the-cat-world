inherit "/std/skill/staff";

void create() {
    name = "峨嵋三皇棍";
}

mapping *action = ({
    ([
        "name"        : HIB"聖劈訣"NOR,
        "action"      : "$N凝氣於棍頭，手中的棍子微微泛起光芒，掃出"RED"峨嵋"YEL"三皇棍"NOR"中的「$a」，棍頭勁力排山倒海劈向$n",
        "damage"      : 60,
        "damage_type" : "內傷",
    ]),
    ([
        "name"        : HIC"聖全訣"NOR,
        "action"      : "$N運起內力，加速繞著敵人旋轉，忽然繞到身後，使出"RED"峨嵋"YEL"三皇棍"NOR"中的「$a」，剎時$n的全身被$N的棍勢鎖住，突然$n身後猛中一棍，倒地不起",
        "damage"      : 60,
        "damage_type" : "內傷",
    ]),
    ([
        "name"        : HIG"聖旋訣"NOR,
        "action"      : "$N催動內力，將螺旋氣勁聚在棍頭，大喝一聲，$N使出"RED"峨嵋"YEL"三皇棍"NOR"中的「$a」，螺旋氣勁像箭一樣向$n射去",
        "damage"      : 60,
        "damage_type" : "內傷",
    ]),
    ([
        "name"        : HIR"聖十訣"NOR,
        "action"      : "$N往後一跳，將內力聚在棍上，舉起棍子揮舞十字，$N忽然長嘯一聲，使出"RED"峨嵋"YEL"三皇棍"NOR"中的「$a」，十字氣勁籠罩$n",
        "damage"      : 60,
        "damage_type" : "內傷",
    ]),
    ([
        "name"        : HIW"聖天訣"NOR,
        "action"      : "$N舉起棍子，運起內勁，使出"RED"峨嵋"YEL"三皇棍"NOR"中的「$a」，棍子飛向空中，頓時不見蹤影，忽見棍子從天而降，擊中$n",
        "damage"      : 60,
        "damage_type" : "內傷",
    ]),
    ([
        "name"        : HIM"聖虛訣"NOR,
        "action"      : "$N使出巧妙手法，頓時產生數十道棍影，$N大喝一聲，使出"RED"峨嵋"YEL"三皇棍"NOR"中的「$a」，虛影中棍頭從中竄出，直取$n的心窩",
        "damage"      : 60,
        "damage_type" : "內傷",
    ]),
    ([
        "name"        : HIY"聖龍訣"NOR,
        "action"      : "$N右手斜舉棍子，左手運起掌力，頓時風沙四起，$N運起"RED"峨嵋"YEL"三皇棍"NOR"中最剛猛的一式「$a」，兩股力量衝出，頓有開山破石之勢，棍勢大開大闊，威猛的力道讓$n無法招架",
        "damage"      : 60,
        "damage_type" : "瀕臨死亡",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIY"聖"HIW"乾"HIY"訣"NOR,
    HIY"聖"HIC"兌"HIY"訣"NOR,
    HIY"聖"HIR"離"HIY"訣"NOR,
    HIY"聖"HIG"震"HIY"訣"NOR,
    HIY"聖"HIG"巽"HIY"訣"NOR,
    HIY"聖"HIR"坎"HIY"訣"NOR,
    HIY"聖"HIC"艮"HIY"訣"NOR,
    HIY"聖"HIW"坤"HIY"訣"NOR,
    HIY"聖"HIM"皇"HIY"訣"NOR,
    HIY"聖"BBLU"闕"NOR + HIY"訣"NOR,
    HIY"聖"BRED"跡"NOR + HIY"訣"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N催動內力，使出"RED"峨嵋"YEL"三皇棍"NOR"中的『$a』頓時狂風大作！$w脫手而出，筆直朝$n射去",
        "damage"      : 90,
        "damage_type" : "內傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N舞動$w，默念口訣，使出"RED"峨嵋"YEL"三皇棍"NOR"中的『$a』霎時產生數十道光芒，$n被光芒震攝住，$N見機不可失，棍子已直取命門",
        "damage"      : 120,
        "damage_type" : "內傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N將$w舉起，雙手高速旋轉，使出"RED"峨嵋"YEL"三皇棍"NOR"中的『$a』，$N大喝一聲，將氣勁籠罩在$n身上",
        "damage"      : 160,
        "damage_type" : "內傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N舉起$w，長嘯一聲！將$w插入地面，這是"RED"峨嵋"YEL"三皇棍"NOR"中的『$a』，數千氣勁往$n奔去",
        "damage"      : 180,
        "damage_type" : "內傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N馬步一紮，蓄勢發勁，四周的氣息在一瞬停止！突然使出"RED"峨嵋"YEL"三皇棍"NOR"中的『$a』攻向$n，一棍往$n$l橫掃而去",
        "damage"      : 220,
        "damage_type" : "內傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N舉起手中$w運氣斜擊，向$n下三路擊出數棍！招中有招、虛實交雜！$n被招式迷惑，因而露出破綻，$N一棍打向$n$l，正是"RED"峨嵋"YEL"三皇棍"NOR"精髓『$a』",
        "damage"      : 250,
        "damage_type" : "內傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N站穩馬步，氣運丹田！真氣壟罩$w，一時間光芒萬丈，瑞氣千條！只見$n口吐鮮血，卻還不明發生何事，好一招精妙絕倫的『$a』",
        "damage"      : 270,
        "damage_type" : "內傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N使出"RED"峨嵋"YEL"三皇棍"NOR"的『$a』朝著$n打去，催動內勁灌入$w，頓時棍端光芒四射，好不耀眼，$N大喝一聲便出勁，暴出數千道的棍影擊向$n",
        "damage"      : 300,
        "damage_type" : "內傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N使出"RED"峨嵋"YEL"三皇棍"NOR"秘招『$a』！一瞬風雲變色，日月無光，天地精華盡納棍中，橫棍迴旋數十次！氣勁重重相疊！一波強於一波氣勁直擊$n",
        "damage"      : 330,
        "damage_type" : "內傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N身形迴旋捲起滿天黃沙，四周滾石狂颳，勁風颼颼，將一式『$a』使出，$w迅捷無倫地擊出，伴隨那飛沙走石與狂風怒吼，同時掃向$n的胸膛",
        "damage"      : 330,
        "damage_type" : "內傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N手中$w漸漸亮了起來，微微泛亮的紅光，一個突進往$n肩膀一掄不中，被閃避的同時，再一個進步貼身而上，一式『$a』劃了數個圓圈，以無窮棍勢圈住$n",
        "damage"      : 330,
        "damage_type" : "內傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("emeithree-staff");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("emeithree-staff", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("emeiforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "emeiforce" || me->query_skill_mapped("staff") != "emeithree-staff") {
        return 1;
    }

    if (random(1700) + random(1700) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("emeithree-staff", 1);

        inspiration("\n\t"HIY"☆★☆"HIW"★☆★"HIY"☆★☆"HIW"★☆★"HIY"☆★☆"HIW"★☆★"HIY"☆★☆"HIW"★☆★"HIY"☆★☆"
                    "\n\t\t"          NOR + BLINK + WHT" ˋˋ"NOR
                    "\n\t"  HIM"  狂      "      NOR + BLINK + WHT"ˋ"NOR + HIG"╱  "HIY"只見"NOR + RED"峨嵋"YEL"山區"HIY"靈光乍現！！！"
                    "\n\t"  HIM"  賀    "    HIW"○"HIG"╱        "HIR"天庭傳來一陣威嚴聲響..."
                    "\n\t"  HIM"  !!  "  HIW"ㄑ∥ㄟ    "HIC"天"HIW"、"NOR + YEL"地"HIW"、"NOR + MAG"人"CYN"三皇齊聲讚誦..."
                    "\n\t"     HIG"     ╱ "HIW"/\\         原來是"HIM"棍法至尊  "  HIY + me->query("name") +
                    "\n\t"   HIG"   ╱"NOR + BLINK + WHT"ˋ         "NOR + HIC"領悟出"NOR + RED"峨嵋"YEL"三皇棍"HIC"之奇招"
                    "\n\t"   NOR + BLINK + WHT"   ˋˋ"NOR
                    "\n\t\t"RED"     ═Ξ═Ξ═   "  BLINK + my_attack_name[action_level] + RED"   ═Ξ═Ξ═"
                    "\n\n\t"HIY"☆★☆"HIW"★☆★"HIY"☆★☆"HIW"★☆★"HIY"☆★☆"HIW"★☆★"HIY"☆★☆"HIW"★☆★"HIY"☆★☆\n\n"NOR);
    }
}

mapping query_action(object me) {
    int addition = me->query_action_level("emeithree-staff");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
