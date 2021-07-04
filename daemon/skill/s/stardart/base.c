inherit "/std/skill/throwing";

void create() {
    name = "星梭手法";
}

function post_action = (: call_other, WEAPON_D, "throw_weapon" :);

mapping *action = ({
    ([
        "name"        : HIC"星"HIY"月"HIC"交輝"NOR,
        "action"      : "$N使招「$a」，微轉手腕，$w劃出條長虹，射向$n的$l",
        "damage"      : 50,
        "force"       : 150,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIW"星軺"HIM"紫"HIW"微"NOR,
        "action"      : "$N指間輕拈，一式「$a」雙手開閤間$w晃出投向$n$l",
        "damage"      : 55,
        "force"       : 250,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIC"星"HIW"霜"HIC"履移"NOR,
        "action"      : "$N使出「$a」，左手輕收，$w由袖口曳出朝$n$l射去",
        "damage"      : 60,
        "force"       : 300,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIW"星離"HIC"雨"HIW"散"NOR,
        "action"      : "$N雙手一圈，使出「$a」，$w由衣袖間閃出，投向$n$l",
        "damage"      : 65,
        "force"       : 300,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIC"星移"HIY"斗"HIC"轉"NOR,
        "action"      : "$N身影翩然一閃，一招「$a」，$w閃出擲向$n$l",
        "damage"      : 70,
        "force"       : 320,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIW"星羅"HIM"棋"HIW"佈"NOR,
        "action"      : "$N使出「$a」，雙手晃出幻影，$w於幻影間劃出圓弧投向$n$l",
        "damage"      : 75,
        "force"       : 350,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIC"破雲遮月"HIY"星逍遙"NOR,
    HIY"滿天星雨"HIM"化語愁"NOR,
    HIM"星海無垠"HIG"歸絕恨"NOR,
    HIG"天外摘星"HIY"女梳妝"NOR,
    HIC"瀑落清潭"HIM"星映色"NOR,
    HIB"風卷殘雲"HIY"星探路"NOR,
    MAG"星雨漫天"HIC"雲橫度"NOR,
    RED"幻影"YEL"星月"HIC"滿天晴"NOR,
    HIG"連袂"HIB"相邀"HIY"星帶月"NOR,
    HIM"殘星"HIC"落月"HIR"殞絕命"NOR,
    HIC"捲雲"HIM"追月"HIY"化星梭"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N突然一躍而上，以凌空之姿，兩袖一抖『$a』，只見$w破空聲響直取$n$l",
        "damage"      : 100,
        "force"       : 400,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N將左手袖口輕輕一撥，$w瞬時夾於指縫中，一招『$a』對準了$n的胸口疾射",
        "damage"      : 120,
        "force"       : 500,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N手捻蓮花將$w聚於掌中，一招『$a』使出$w宛如流星一閃往$n$l",
        "damage"      : 150,
        "force"       : 600,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N身形一閃，使出『$a』手腕輕抖，袖風猝起$w由袖內劃出一道圓弧直取$n$l",
        "damage"      : 160,
        "force"       : 700,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N全身注勁如滿弦之弓，右腕一翻，食、中兩指各扣一枚$w勁射而出，正是一招『$a』直取$n$l",
        "damage"      : 180,
        "force"       : 800,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N兩手運轉陰陽勁道變化，手中$w發出數道星芒『$a』使出，忽見星芒一閃，射向$n$l",
        "damage"      : 220,
        "force"       : 900,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N左手揮袖作勢欲攻，右臂暗暗繞至身後，旋身彈出一枚$w『$a』使出，$w出奇不意地射向$n$l",
        "damage"      : 240,
        "force"       : 1000,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N右手一抬，一招『$a』，凌空之中不慌不忙的的輕點『畢、橘、修、圉、則』五個方位，$w在$n尚未查覺之際，以破風的速度打入$n的雙膝，雙肘和胸口",
        "damage"      : 300,
        "force"       : 1100,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N面帶從容，原地旋轉數圈，衣擺飄飄帶起一陣迴風，在$n還在尋找破綻之時，一招『$a』，執起$w往$n的要害而去",
        "damage"      : 300,
        "force"       : 1100,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N低聲沉吟了一句：談經論古誰無死。嘴角微揚，一招『$a』，右手中指輕輕往腰帶上畫過，$w以疾風之速直取$n的喉嚨",
        "damage"      : 300,
        "force"       : 1100,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N氣遊周身，勁隱於指，一招『$a』使出只見數枚$w突以流星般疾射而出直取$n$l",
        "damage"      : 300,
        "force"       : 1100,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("stardart");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("stardart", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("iceforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "iceforce" || me->query_skill_mapped("throwing") != "stardart") {
        return 1;
    }

    if (random(1700) + random(1700) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("stardart", 1);

        inspiration("\n"
                    HIY"\t\t          ★遠處突然閃過一顆流星!!!!! ★\n"
                    "\t  "HIG"▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△\n"
                    "\t    "NOR"【貓姬】白鳳凰 柔聲說道："HIG + me->query("name") + "\n"
                    "\t     "NOR"竟然領悟了我星梭手法之奧義「"BLINK + my_attack_name[action_level] + "」，真是恭喜阿。\n"
                    "\t   "HIG"△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼\n\n"NOR);
    }
}

mapping query_action(object me) {
    int addition = me->query_action_level("stardart");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
