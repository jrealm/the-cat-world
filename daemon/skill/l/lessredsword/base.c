inherit "/std/skill/sword";

void create() {
    name = "殘紅劍法";
}

mapping *action = ({
    ([
        "name"        : HIY"黃鶯穿柳"NOR,
        "action"      : "$N右手手腕微動，左手畫圓，一招「$a」，$w快速的刺向$n的$l",
        "damage"      : 20,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIW"燕子入林"NOR,
        "action"      : "$N左手一揮，一個虛招，猛然將劍刺出，一招「$a」，劍尖從劍花中刺向$n",
        "damage"      : 20,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : RED"拂花掠影"NOR,
        "action"      : "$N手中$w自左下方斜掠向上，一招「$a」，直取$n的命穴",
        "damage"      : 20,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIC"紫竹入雲"NOR,
        "action"      : "$N將手中$w連轉數圈，產生無數劍花，一招「$a」，使得$n一時迷惑，$N隨即一劍刺出",
        "damage"      : 20,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : YEL"素女撢塵"NOR,
        "action"      : "$N將$w一甩，使出一招「$a」，只見$w往$n疾飛而去",
        "damage"      : 20,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIG"分花拂柳"NOR,
        "action"      : "$N身型一轉，左手使出一招虛招，一招「$a」，一劍砍向$n",
        "damage"      : 20,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIB"移花接木"NOR,
        "action"      : "$N將手中$w虛空劃了一圈，交至左手，一招「$a」，冷不防的一劍刺向$n",
        "damage"      : 20,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIM"越女追魂"NOR,
        "action"      : "$N一聲大喝，舞動$w，使出一招「$a」，直取$n咽喉",
        "damage"      : 20,
        "damage_type" : "刺傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIR"一拓白雲在深處"NOR,
    HIR"身苦驚鴻鶯穿柳"NOR,
    HIR"劍似追魂不離人"NOR,
    HIR"順風擺柳勢法全"NOR,
    HIR"紫竹林中觀自在"NOR,
    HIR"白蓮台上現如來"NOR,
    HIR"縱是越女也失魂"NOR,
    HIR"殘紅映雪人倚劍"NOR,
    HIR"嫡傳應識蓮花印"NOR,
    HIR"玉女抽身妙入神"NOR,
    HIR"避青入紅定乾坤"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N揚劍平指，一招『$a』，劍鋒虛指$n，大喝一聲，劍尖刺向$n$l",
        "damage"      : 80,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N右手揮動$w，一招『$a』，一聲叱喝，劍氣連發直攻$n命穴",
        "damage"      : 100,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N將$w插入地上，右腳一踢，一招『$a』，$w射向$n$l",
        "damage"      : 120,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N運起身法，轉身欺近，一招『$a』，往$n$l猛砍一劍",
        "damage"      : 140,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N指彈劍鋒，$w發出聲響，一招『$a』，隨即刺向$n，劍光由四方包圍$n",
        "damage"      : 160,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N催動內勁，舞動手中$w，一招『$a』，劍身灌足內勁，一劍刺向$n$l",
        "damage"      : 180,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N姿態飄逸，一招『$a』，轉身跳躍，劍光四射，好不耀眼，一劍殺向$n",
        "damage"      : 220,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N將$w橫於胸前，運起氣勁注於$w上，一招『$a』，氣勁由劍端射出，直取$n咽喉",
        "damage"      : 280,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N運起輕巧的步法，繞到的$n側面，$w挑起朵朵蓮花使出『$a』，那朵朵半空中盛開的劍意蓮花快速飛過，在$n身上留下無數的印記",
        "damage"      : 280,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N持著$w翻轉飛舞，左遮右擋，牽引反攻，一招『$a』與那$n殺在一處，從地面殺到半空，又從半空殺回地面",
        "damage"      : 280,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N心念口訣「殘紅者，非言劍之殘者也，猶...」這時$N形神合一，劍我一體，右手緊緊握住$w，奮起一式『$a』一時玄光陣陣，劍勢凌厲，發出一陣「嗚嗚」刺耳的聲音，紅光閃過$n",
        "damage"      : 280,
        "damage_type" : "刺傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("lessredsword");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("lessredsword", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("emeiforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "emeiforce" || me->query_skill_mapped("sword") != "lessredsword") {
        return 1;
    }

    if (random(1200) + random(1200) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("lessredsword", 1);

        inspiration("\n\t╔─═─╗                                   ︻     ~~"
                    "\n\t│"HIR"殘    "NOR"║"HIW"            這一劍                "NOR" ∥  ~~      ~~"
                    "\n\t║"HIW"    人"NOR"│                                 "HIW"ˍ"NOR"Ξˍ     ~~"
                    "\n\t│"HIR"紅    "NOR"║"HIW"        去勢全然不同以往           ▍"NOR"▏ ~~      ~~"
                    "\n\t║"HIW"    倚"NOR"│                                   "HIW"▍"NOR"▏~~     ~~"
                    "\n\t│"HIW"映    "NOR"║"HIW"      傳言中的"HIR"殘紅劍法"HIW"密式         ▍"NOR"▏  ~~      ~~"
                    "\n\t║"HIR"    孤"NOR"│                                   "HIW"▍"NOR"▏~~    ~~"
                    "\n\t│"HIW"雪    "NOR"║"HIW"      【 "NOR + BLINK + my_attack_name[action_level] + HIW" 】         ▍"NOR"▏  ~~"
                    "\n\t║"HIR"    劍"NOR"│                                   "HIW"▼  "NOR"~~"
                    "\n\t╚─═─╝  "HIW"     重現於 "HIY + me->query("name") + HIW" 之手\n\n"NOR);
    }
}

mapping query_action(object me) {
    int addition = me->query_action_level("lessredsword");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
