inherit "/std/skill/throwing";

void create() {
    name = "彈指神通";
}

function post_action = (: call_other, WEAPON_D, "throw_weapon" :);

mapping *action = ({
    ([
        "name"        : HBRED + HIY"千夫所指"NOR,
        "action"      : "$N周身氣勁在體內不斷循環．雙手齊出，正是一招「$a」！$w由$N袖中急馳而出，直取$n左肩",
        "damage"      : 50,
        "force"       : 200,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HBRED + HIG"笑指天南"NOR,
        "action"      : "$N一招「$a」，雙足不丁不八，踏著東方乙木之位，食中二指反扣住拇指，反手彈出，只見$w夾帶一股凌厲氣勁直竄$n$l",
        "damage"      : 60,
        "force"       : 230,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HBRED + HIC"划天裂地"NOR,
        "action"      : "$N雙手籠入袖中，臉上青氣一閃即逝，一招「$a」$w由袖口曳出朝$n$l射去",
        "damage"      : 70,
        "force"       : 270,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HBRED + HIM"我心悠悠"NOR,
        "action"      : "$N將內力灌注於食指與拇指間，運勁彈出，只見$w宛如星芒般直奔$n齊門穴，正是一招「$a」",
        "damage"      : 80,
        "force"       : 290,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HBRED + HIB"彈指人生"NOR,
        "action"      : "$N身影翩然一閃，雙手晃出幻影，使出「$a」只見$w劃出一道圓弧直取$n$l",
        "damage"      : 90,
        "force"       : 310,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HBRED + MAG"擎天一指"NOR,
        "action"      : "只見$N右手中指漸變為淡青色，指捻$w一招「$a」$w如狂龍般直竄$n$l",
        "damage"      : 100,
        "force"       : 330,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIC"演虛御實"HIM"指上兵"NOR,
    HIB"后羿箭逼"HIY"金烏墜"NOR,
    HIY"玉兔盈空"HIC"星無光"NOR,
    HIM"碧亭弄笛"HIC"勝嬋姿"NOR,
    MAG"舟過湖心"HIY"且無痕"NOR,
    HIG"柳暗曲徑"HIY"通花明"NOR,
    HIY"白虹勁畫"HIR"瓊樓宇"NOR,
    HIW"旋擘煙嵐"HIW"上窅冥"NOR,
    CYN"朔雲邊月"HIM"滿西山"NOR,
    HIC"蘭花拂穴"HIR"顯神通"NOR,
    HIW"亦正"BLK"亦邪"HIG"吾"HIY"獨遨"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N眼神一變使出一招『$a』，只見$N左手揮袖作勢欲攻，右臂暗暗繞至身後，側身彈出一枚$w，出奇不意地射向$n$l",
        "damage"      : 100,
        "force"       : 430,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N沉膝坐馬，全身注勁如滿弦之弓，只見$N暴喝一聲，雙手扣住八枚$w應聲射出，勁猶利矢，一招『$a』準確無誤地指向$n的八處要害",
        "damage"      : 120,
        "force"       : 450,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N右腕一翻，食、中兩指各扣一枚$w分別勁射而出，後勁追前勁，發出一連串破空驚爆之聲，$w藉由『$a』的御勁變化竟憑空加速射向$n$l",
        "damage"      : 150,
        "force"       : 500,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N以五行換位搶得先機地利，眼神儼如獵鷹攫兔般銳利，手中$w依『$a』的要領由八方刁鑽方位連環射出，攻得$n左支右絀，難以招架",
        "damage"      : 160,
        "force"       : 570,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N近身溺戰$n，右手彈指需幌一招，左手一式『$a』彈射一道神通氣箭，悄然無形地直取$n眉心",
        "damage"      : 180,
        "force"       : 650,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N一個轉身使出『$a』，兩手各扣一枚$w嗤地彈出，兩枚$w竟在半空相撞轉而攻向$n$l，令人防不勝防",
        "damage"      : 230,
        "force"       : 700,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N彈射數枚$w牽制$n行動，忽見白影一閃，$N突以火流星般的速度近身，一式『$a』以雷霆之勢屈指彈向$n的章門穴",
        "damage"      : 250,
        "force"       : 800,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N左腳側跨在地上畫圓，右腳輕點縱身向後躍，$n起身直追的同時，一招『$a』，$w從袖間連發而出，朝著$n當頭蓋下",
        "damage"      : 300,
        "force"       : 1000,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N以蓮步優雅的向$n逼去，隱藏$w透出的奇異殺氣，令$n大意忘我，一招『$a』在$n脖子留下一道雪痕",
        "damage"      : 300,
        "force"       : 1000,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N循『$a』的要訣，兩手運轉陰陽勁道變化，十指輪番扣射無數$w，時而無聲無息，時而勁利招風，滿天的$w如狂風暴雨般襲捲$n週身要害",
        "damage"      : 300,
        "force"       : 1000,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N斂住全身氣息無聲無息的靠近$n，在$n一個失神尚未察覺之際，一式『$a』宛如一蓬光雨，挾著強烈氣勁的$w打入$n後心",
        "damage"      : 300,
        "force"       : 1000,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("tanzhi-shentong");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("tanzhi-shentong", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("peachforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "peachforce" || me->query_skill_mapped("throwing") != "tanzhi-shentong") {
        return 1;
    }

    if (random(2000) + random(2000) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("tanzhi-shentong", 1);

        inspiration("\n"
                    HIY"\t\t       ★"HIC"遠處突然傳來連續的破空響聲!!!!! "HIY"★\n"
                    "          "RED"▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△\n"
                    "            "NOR"【東邪】黃藥師 狂嘯道："HIG + me->query("name") + "\n"
                    " "NOR"不枉我黃老邪一番苦心竟然領悟了彈指神通之「"BLINK + my_attack_name[action_level] + "」，真的是江山代有才人出啊。\n"
                    "           "RED"△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼△▼\n\n"NOR);
    }
}

int valid_learn(object me) {
    if (me->query_skill("tanzhi-shentong", 1) < 1) {
        return 0;
    }

    return ::valid_learn(me);
}

mapping query_action(object me) {
    int addition = me->query_action_level("tanzhi-shentong");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
