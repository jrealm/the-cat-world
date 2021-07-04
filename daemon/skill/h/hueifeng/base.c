inherit "/std/skill/throwing";

void create() {
    name = "迴風落雁手";
}

function post_action = (: call_other, WEAPON_D, "throw_weapon" :);

mapping *action = ({
    ([
        "name"        : HBYEL + HIC"峰迴路轉"NOR,
        "action"      : "$N右手暗扣數枚$w，雙手虛晃一招，使出「$a」！直取$n左肩",
        "damage"      : 50,
        "force"       : 150,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HBYEL + HIG"迴看風雲"NOR,
        "action"      : "$N雙手一抖，一招「$a」，只見$w夾帶一股凌厲氣勁直竄$n$l",
        "damage"      : 60,
        "force"       : 200,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HBYEL + HIC"風起雁落"NOR,
        "action"      : "$N爆喝一聲：『注意來！』，卻不見$N有何動作！$n吃了一驚！只見數叢閃爍的銀光，往$n的雙眼疾射而到～正是一招「$a」",
        "damage"      : 70,
        "force"       : 250,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HBYEL + HIG"回風拂柳"NOR,
        "action"      : "$N連發數針，$n身形數轉，好不容易得以避過，欲待反攻之際！$N反手一招「$a」卻又已見$w直竄$n$l",
        "damage"      : 80,
        "force"       : 300,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HBYEL + HIM"長空落雁"NOR,
        "action"      : "$N雙手放出點點光芒，手一揮便有無數$w朝$n飛去！待$n欲閃身之際$N反手一招「$a」只見$w直竄$n$l",
        "damage"      : 90,
        "force"       : 320,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HBYEL + HIR"風捲殘雲"NOR,
        "action"      : "$N身形數轉，手中$w連放三著！危急之際，$n幌身欲閃～～卻又驚見$w往$n臉頰招呼而到，正是殺招「$a」",
        "damage"      : 100,
        "force"       : 350,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIY"山雨欲來"HIC"風滿樓"NOR,
    HIC"風吹柳花"HIM"滿店香"NOR,
    HIG"閣道迴看"HIG"上苑花"NOR,
    HIM"長風萬里"HIY"送秋雁"NOR,
    HIY"春風拂檻"HIM"露華濃"NOR,
    HIB"長風破浪"HIY"會有時"NOR,
    HIC"願隨春風"HIR"寄雁然"NOR,
    HIW"寒雁春深"HIM"歸去盡"NOR,
    YEL"雲盡獨看"HIY"晴塞雁"NOR,
    CYN"捲雲還浪"HIW"千百折"NOR,
    HIC"落雁迴風"HIM"渡魂歸"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N雙手暗扣數枚$w，以虛拳出招，一擊不中便雙手一抖～使出『$a』，以極近的距離襲向$n周身要害",
        "damage"      : 90,
        "force"       : 450,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N隨手使出一招『$a』，$w自目標身旁飛過！就在$n趁虛而入之際，$N縱身後躍，更以潛勁收回$w，襲向$n$l",
        "damage"      : 120,
        "force"       : 650,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N左手水平一拂，一式『$a』$w以扇形之勢飛了開，封死左右兩路！$N右手又垂直一拂，四路同進的$w早已令$n難以招架",
        "damage"      : 150,
        "force"       : 750,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N以絕妙輕功圍繞在$n身邊，一式『$a』，食指虛點擾敵！左手卻暗扣$w使出打穴手，攻向$n$l要穴",
        "damage"      : 160,
        "force"       : 950,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "『$a』一出，$N右手擲出一把$w困住了$n的行動，再以左手發了一隻$w，$w射進了$n身上並留下一道傷口",
        "damage"      : 180,
        "force"       : 1050,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N在$n身邊遊走，不時地發出$w，以『$a』之勢將$n團團包圍！只要$n一個疏失，便成了刺蝟",
        "damage"      : 230,
        "force"       : 1150,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N暴吼一聲：『$a』，瞬間滿天皆是$w的影子！有如狂潮！有如暴雷！只見$n一個腳軟，$n$l中招了",
        "damage"      : 250,
        "force"       : 1250,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N一時紋風不動而佇立$n面前，趁著風勢拂過髮梢之時，一招『$a』藏在髮間的$w隨著風勢運氣而行，直撲$n面門",
        "damage"      : 300,
        "force"       : 1450,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N任督二脈上運行了一個小周天，當氣運行至下丹田處，一招『$a』，順勢將$w由掌心打出，隨著強烈的氣勁貫穿$n的肩胛",
        "damage"      : 300,
        "force"       : 1450,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N隨意跨出一步又後退二步，進一退二之間一招『$a』，藏在鞋間的$w在$n攻向$N之時筆直射出，紮實打入$n的腿腹",
        "damage"      : 300,
        "force"       : 1450,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N的手不停的揮舞著，$N手上$w正慢慢聚納青芒～環繞四周～壓力愈來愈凝重！$n彷彿入了地獄十八層，情狀好不恐怖！這正是一招『$a』",
        "damage"      : 300,
        "force"       : 1450,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("hueifeng");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("hueifeng", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("skyevilforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "skyevilforce" || me->query_skill_mapped("throwing") != "hueifeng") {
        return 1;
    }

    if (random(850) + random(850) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("hueifeng", 1);

        inspiration("\n"
                    YEL"\t      ╱  "HIW"就在一道流星劃空之際......."NOR"\n"
                    HIY"\t    ☆    "HIC"暗器名家"HIG + me->query("name") + HIC"腦中靈光一現"NOR"\n"
                    HIW"\t      《"MAG"迴風"HIM"落雁手"HIW"》 之「"BLINK + my_attack_name[action_level] + HIW"」，直奔對手命門"NOR"\n"
                    HIB"\t                              『喝』！！ "NOR"\n"
                    HIB"\t  『咕哇』！！                  "HIC"○"NOR"\n"
                    HIC"\t   ○∕          卍   ﹣﹉ ﹣ ＜ ▊﹀"NOR"\n"
                    HIC"\t  ∠ ▅︿             ﹉ ¯﹊  √ 〉"NOR"\n"
                    HIC"\t    〉 "NOR"\n\n");
    }
}

int valid_learn(object me) {
    if (me->query_skill("hueifeng", 1) < 1) {
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
    int addition = me->query_action_level("hueifeng");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
