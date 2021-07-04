inherit "/std/skill/whip";

void create() {
    name = "白蓮鞭法";
}

mapping *action = ({
    ([
        "name"        : HIC"白蓮出水"NOR,
        "action"      : "$N使一招「$a」，手中$w啪地一聲向$n的$l揮去",
        "damage"      : 70,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIG"出水芙蓉"NOR,
        "action"      : "$N身形一轉，一招「$a」$w顫動不定，揮向$n的$l",
        "damage"      : 60,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIM"水蓮折腰"NOR,
        "action"      : "$N拿起$w過肩，蓄勁發力，一招「$a」直劈$n$l",
        "damage"      : 80,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : HIC"東施效顰"NOR,
        "action"      : "$N一個側步轉身，一招「$a」鞭子霍霍揮向$n的$l",
        "damage"      : 100,
        "damage_type" : "斲傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIC"蓮開九轉"NOR,
    HIG"踏蓮渡世"NOR,
    HIY"蓮破百器"NOR,
    HIM"水蓮交合"NOR,
    HIR"落蓮回塵"NOR,
    HIC"祥蓮天降化百花"NOR,
    HIG"白蓮流轉渡蒼生"NOR,
    HIY"祈蓮回眸百媚生"NOR,
    HIB"蒼"HIW"蓮"HIY"歸道"HIC"萬物生"NOR,
    HIC"雲"HIW"蓮"HIG"暉曜"HIR"五彩生"NOR,
    BGRN + HIY"聖蓮"NOR + HIG"飛渡"HIW"化"HIM"大千"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N急運身法繞著$n打轉，一招『$a』，鞭隨身轉，硬是向$n$l捲了過去",
        "damage"      : 100,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N忽然雙腳猛踏住鞭子末梢，在$n摸不著頭緒時，一招『$a』鞭子握柄猛地朝$n天靈穴擊去",
        "damage"      : 150,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N將深厚的內力凝聚在手中的鞭上，打出白蓮密招『$a』攻破$n擋架的兵器，直刺對手腦門",
        "damage"      : 160,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N回身使出一鞭，$w如水波般急刺$n周身大穴，使得$n無力招架。這正是『$a』",
        "damage"      : 180,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "只見$N不疾不徐使出一式『$a』地上的砂屑在你內力運轉下聚成一團，但見鞭影如鬼魅，從砂團中竄出攻到$n面門",
        "damage"      : 230,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "只見$N一抖鞭身，幻出數朵蓮花『$a』使出，$n頓時反應不及，$N手中$w竄出擊向$n面門",
        "damage"      : 250,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "只見$N忽然疾退數步，使出密招『$a』將$n困在鞭勢中動彈不得",
        "damage"      : 270,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N爆喝一聲，身形數個變化，使出密招『$a』將$n後路完全封住，隨即鞭身一抖一股氣勁直往$n打去",
        "damage"      : 340,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N前招未盡遽然後收，雙腿一沉，手持$w橫掃，心念：『$a』，長鞭不斷游走，鞭影四處翻騰形如蛟龍，往$n捲去",
        "damage"      : 340,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N手中$w行雲流水般的劃著，平靜心念：『$a』，晃動之間幻化出無數的五彩光團宛如星河一般，四周鞭影萬千，曠世無匹，鞭影壟罩$n",
        "damage"      : 340,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N雙腳猛的一跺地面，口中輕喝一聲『$a』，身體陡然加速，$w嗖的一聲從手腕上飛出，一片銀光在空中灑出，蓮花碎裂，花瓣飛舞，將$n給捲入",
        "damage"      : 340,
        "damage_type" : "割傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("whitewhip");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("whitewhip", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("six-of-force", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "six-of-force" || me->query_skill_mapped("whip") != "whitewhip") {
        return 1;
    }

    if (random(1700) + random(1700) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("whitewhip", 1);

        inspiration("\n"
                    HIR"武林傳來消息 "BLINK + HIY + me->query("name") + NOR + HIR" 領悟了白蓮鞭法一個秘招 『" + my_attack_name[action_level] + HIR"』\n\n"NOR);
    }
}

mapping query_action(object me) {
    int addition = me->query_action_level("whitewhip");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
