inherit "/std/skill/blade";

void create() {
    name = "醉刀";
}

mapping *action = ({
    ([
        "name"        : HIG"春風"HIY"拂人醉"NOR,
        "action"      : "$N使一招「$a」，手中$w輕飄飄地向$n的$l斬去",
        "damage"      : 55,
        "force"       : 30,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIG"人醉"HIY"刀不醉"NOR,
        "action"      : "$N使一招「$a」，手中$w輕飄飄地向$n的$l斬去",
        "damage"      : 55,
        "force"       : 30,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIG"刀醉"HIY"人不醉"NOR,
        "action"      : "$N使一招「$a」，手中$w輕飄飄地向$n的$l斬去",
        "damage"      : 55,
        "force"       : 30,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIW"一醉"HIC"解千愁"NOR,
        "action"      : "$N金刃劈風，$w隨著一招「$a」由下而上撩往$n的$l",
        "damage"      : 55,
        "force"       : 30,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIM"醉人"HIW"打誑語"NOR,
        "action"      : "$N身形一轉，一招「$a」$w刀光不定，斬向$n的$l",
        "damage"      : 55,
        "force"       : 30,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIG"柳葉"HIW"隨人醉"NOR,
        "action"      : "$N舞動$w，一招「$a」迅捷無倫地劈向$n的$l",
        "damage"      : 55,
        "force"       : 30,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : HIY"倩影"HIW"惹人"HIM"醉"NOR,
        "action"      : "$N手中$w一晃，一招「$a」往$n的$l斜斜砍出一刀",
        "damage"      : 55,
        "force"       : 30,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : HIW"蘆雪"HIM"醉"HIY"人影"NOR,
        "action"      : "$N提刀過肩，蓄勁發力，一招「$a」直劈$n$l",
        "damage"      : 55,
        "force"       : 30,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : HIY"醉蝶"HIC"灼"HIW"人衣"NOR,
        "action"      : "$N移步側身，使一招「$a」刀光霍霍斬向$n的$l",
        "damage"      : 55,
        "force"       : 30,
        "damage_type" : "斲傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIW"東風"HIY"日不醉"NOR,
    HIG"西風"HIY"刀不醉"NOR,
    HIB"南風"HIY"人不醉"NOR,
    HIR"北風"HIY"我不醉"NOR,
    HIY"金風"HIC"刀"HIG"獨醉"NOR,
    HIM"薰風"HIC"人"HIG"獨醉"NOR,
    HIW"朔風"HIC"我"HIG"獨醉"NOR,
    BLU"邪風"HIR"魔"HIY"眾醉"NOR,
    HIC"玄風"HIW"神"HIG"眾醉"NOR,
    HIW"醉臥"HIM"沙場"HIY"君莫笑"NOR,
    HIW"人醉"NOR + CYN"刀醉"HIW"天地醉"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N使一招醉刀秘技『$a』，手中$w輕飄飄地向$n的$l斬去",
        "damage"      : 200,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N左腳橫移！腰一沈！右手$w夾內勁，使一招醉刀奧義『$a』，只見手中$w倒橫一劈，斬向$n的$l",
        "damage"      : 260,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N右手$w向空發了一記醉刀密招『$a』，$n正迷惑之際，$N忽然左手擬了個刀勢，並突起發難，夾勁發勢斬向$n",
        "damage"      : 320,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "只見$n使勁急攻$N，$N一扭腰閃過了$n的攻勢，並使一招醉刀絕招『$a』，手中$w水平橫拖，卻形成了直的刀氣，往$n$l處甩了過去",
        "damage"      : 380,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N使出江湖失傳已久的『$a』，手中$w發出陣陣悲鳴，醉意化為一陣肅殺之氣，$n忽然墮入恐懼黑暗的深淵之中，一股殺意襲來，只聽得周遭陣陣鐵騎鏘響、刀槍鳴，$w已在瞬間劈向$n要害",
        "damage"      : 440,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N散發濃厚醉意，高聲吟道:『$a』，手中$w化幻化為一陣暖意，$n感受到陽光和煦溫暖，如沐春風之中，正徜徉得意之際，$N忽然從$n背後竄出，$w變回原型劈向$n$l",
        "damage"      : 500,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N將自身內力與醉意激盪，頓時風雲變色，空氣凝結成霜，時間彷彿被寒意凍結，$n如置身雪地，$N趁機縱身一躍，在長空中擲出手中的$w，幻化為冰霰紛飛，成千上萬的飛向$n，正是醉刀中的奧義『$a』",
        "damage"      : 560,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "突然間，$N一招『$a』揮舞攻擊$n，只見$w化成無數刀氣直往$n心口直劈",
        "damage"      : 560,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N縱身一躍仰天怒吼，身體在空中極速旋轉，散發藍色青光，使出一招『$a』往$n飛去",
        "damage"      : 560,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N大喝道：教你知道醉刀的利害，一個發勁，一式『$a』發招劈向$n，只見$N攻擊的同時氣勁一直不斷在周身環繞，突見滿天爆起了黃色金芒，刀氣突然爆體橫砍$n",
        "damage"      : 620,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N將烈酒灑向天空使出了『$a』；在酒氣彌漫四周同時，$w亦閃過數道寒光，只見一臉茫然的$n仍杵在原地",
        "damage"      : 620,
        "damage_type" : "割傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

mapping query_action(object me) {
    int addition = me->query_action_level("drunkblade");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("drunkblade");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("drunkblade", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("dragonforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "dragonforce" || me->query_skill_mapped("blade") != "drunkblade") {
        return 1;
    }

    if (random(1400) + random(1400) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("drunkblade", 1);

        inspiration("\n"
                    "        "HIW"▁▃▃▃▃▃▃▃▃▃▁"NOR"   「"HIG + me->query("name") + NOR"」拍開酒封\n"
                    "        "HIW"◥█████████◤"NOR"\n"
                    "          "BRED""HIY"XXXXXXXXXXXXXXXXXX"NOR"     空氣中彌漫著"RED"濃烈"HIC"酒香"NOR"\n"
                    "      "HIW"◢███████████◣"NOR"\n"
                    "      "HIW"◥█"BRED"◤   "BBLK"█"BRED"◥"BBLK"█"BRED"        "NOR"        "HIM"喃喃的"HIR"沉吟"NOR"\n"
                    "      "HIW"◢"BRED"◤     ◥  ◥        "NOR"\n"
                    "        "BRED"                      "NOR"         "HIY"獨酌"HIW"無相親"NOR"\n"
                    "       "BRED"                        "NOR"\n"
                    "      "BRED"        "BLK"╰╰╦╦╯        "NOR"   "HIC"不知被什麼"HIY"牽引"HIC"著"NOR"\n"
                    "      "BRED"        "BLK"╰╔╬╬╮        "NOR"\n"
                    "      "BRED"        "BLK"╭║╭╮║        "NOR"  "HIB"拿起手邊的刀"HIW"揮舞著"NOR"\n"
                    "       "BRED"        "BLK" ╰══╝       "NOR"\n"
                    "        "BRED"                      "NOR"     "HIW"似乎領悟了「"NOR + my_attack_name[action_level] + HIW"」"NOR"\n\n");
    }
}
