inherit "/std/skill/sword";

void create() {
    name = "全真劍法";
}

mapping *action = ({
    ([
        "name"        : HIR"彤雲千里"NOR,
        "action"      : "$N使一招「$a」，手中$w盪漾起漫漫劍光捲向$n的$l",
        "damage"      : 35,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIW"袖裡乾坤"NOR,
        "action"      : "$N迴身探腰，瀟灑的使出「$a」，一道黃金劍氣飛向$n的$l",
        "damage"      : 30,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIY"春風"HIG"拂柳"NOR,
        "action"      : "$N一招「$a」，身形擺動間，手中$w如烈焰似流水的纏繞住$n的$l",
        "damage"      : 30,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIW"白蛇吐"HIM"信"NOR,
        "action"      : "$N中宮直進，手中$w一式「$a」對準$n的$l刺出迅如閃電的一劍",
        "damage"      : 33,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : MAG"紫氣東來"NOR,
        "action"      : "$N身如大鵬臨空盤旋，一招「$a」，手中$w一道凌厲無匹劍氣射向$n的$l",
        "damage"      : 38,
    ]),
    ([
        "name"        : HIM"滿"HIC"天"HIY"星"HIG"雨"NOR,
        "action"      : "$N縱身一躍，手中$w一招「$a」蹦出萬點劍光對準$n的$l飛去",
        "damage"      : 25,
    ]),
    ([
        "name"        : HIG"碧濤"HIM"落霞"NOR,
        "action"      : "$N一式「$a」，$w由下而上捲起一道道劍幕，如波浪般衝向$n的$l",
        "damage"      : 35,
    ]),
    ([
        "name"        : HIM"穿"HIW"雲"HIM"破"HIW"日"NOR,
        "action"      : "$N手中$w向外一轉，使一招「$a」反手一劍對準$n$l刺去",
        "damage"      : 40,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIY"彎弓射日"NOR,
        "action"      : "$N左手搭上$w一拉一放，一道劍光疾射而出，一招「$a」對準$n$l飛去",
        "damage"      : 38,
        "damage_type" : "刺傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIC"雁行"HIW"斜"HIC"擊"NOR,
    HIW"白"HIR"虹"HIW"經天"NOR,
    HIC"天外飛"HIG"山"NOR,
    HIR"春花飛"HIG"柳"NOR,
    HIB"三"HIR"花"HIW"聚頂"NOR,
    HIM"五"HIC"內"HIR"朝元"NOR,
    HIW"三冬抱雪眠"NOR,
    HIY"九夏迎陽立"NOR,
    HIC"天地"HIB"陰"HIY"陽"HIC"開乾坤"NOR,
    HIC"乾坤復始"HIG"化"HIY"無"HIB"極"NOR,
    HIC"點三清"HIW"˙"HIB"凌"BLK"太虛"HIW"˙"HIR"劍指"HIY"漫"HIG"八荒"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N身子貼地斜飛，尚未落地，$w已直刺$n後心，此招叫作『$a』，乃是全真派的劍法",
        "damage"      : 70,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$n「咦」的一聲，招式未止，重擊向$N頭上砸到。$N一招全真派的『$a』，平劍向$n打去",
        "damage"      : 100,
        "damage_type" : "傷勢。\n本來無效的一招，卻因恰合四兩撥千金之理，而頓收其效",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N身形一晃，奇招突飛$w交左手來使，變化無方連下殺手，酣鬥中驀地一道劍芒，$N使了招『$a』，猛向$n$l劈去",
        "damage"      : 130,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N喝道：當真是活得不耐煩了。不給你些厲害，$n還道全真派盡是無能之輩。語聲甫畢！長劍幌動，踏奇門，走偏鋒，一招『$a』夾$w刺向$n$l",
        "damage"      : 170,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "劇鬥中，$N的身法突緩，內息遊走全身，聚精化氣神轉虛，勁貫$w，一式『$a』掌法化劍法，毫無花巧，直擊$n",
        "damage"      : 190,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N衣袖無風自擺，手起一招『$a』，$w內夾五道緩勁，舞起劍幕重重！突然$N一聲清嘯，數道劍氣由劍幕中脫出，如雨點般擊向$n",
        "damage"      : 200,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N劍尖直刺$n$l，劍身削向$n腰際，迴劍收招，劍柄撞向$n脅肋要穴的“章門穴”！好一招『$a』",
        "damage"      : 230,
        "damage_type" : "傷害。\n$n被迅雷不及掩耳之勢一式連攻三招，身上三孔血流難止",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N將最大的注意力集中在手中的$w劍尖，突然間暴起發難，迅疾無比的一劍刺$n$l",
        "damage"      : 250,
        "damage_type" : "傷害。\n只見$n周身四十八處大穴！幾乎半數被刺中，好一招全真劍法『" + my_attack_name[7] + "』",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N$w揮動，劍影捲起陣陣漩風。當$n微感詫異時，長劍夾周圍氣流，只見劍光閃爍，『$a』攻向$n",
        "damage"      : 280,
        "damage_type" : "刺傷。\n在這看似一閃的劍光之中，實際卻有數十後著！只見$n已被攻來的一十三劍戳到血流成河",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N如蜻蜓點水般遊走在$n身旁方圓丈內，腳下步法一沾即走，手中$w劍劍不留情，揮灑出全真劍法中最強一式",
        "damage"      : 300,
        "damage_type" : "刺傷。\n只見一式『" + my_attack_name[9] + "』，讓$n只覺身陷幻境，一切皆在渾沌之中，當$n回過神來時，已身中數劍",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N手中的$w頓時金光大盛，劍影化而為三，一式無上劍招『$a』，無數巨大若有若無的劍氣從$w發出直接衝向$n",
        "damage"      : 300,
        "damage_type" : "刺傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("alltruthsword");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("alltruthsword", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("taiiforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "taiiforce" || me->query_skill_mapped("sword") != "alltruthsword") {
        return 1;
    }

    if (random(2000) + random(2000) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("alltruthsword", 1);

        inspiration("\n"
                    "        "HIG"║╗"HIY"    ～～天地大氣震動，看來有人揮出了全真劍法中的『" + my_attack_name[action_level] + HIY"』！！\n"
                    " "HIR" ⊙ⅢⅢⅢ"HIG"║"HIW"▇▇▇▇▇▇▇▇▇▇▇▇▇▇＞\n"
                    "        "HIG"║╝"HIY"　　～～應該是"HIC + me->query("name") + "(" + me->query("id") + ")"HIY"悟出了新的全真劍招！！\n\n"NOR);
    }
}

mapping query_action(object me) {
    int addition = me->query_action_level("alltruthsword");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
