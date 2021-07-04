inherit "/std/skill/sword";

void create() {
    name = "連城劍法";
}

mapping *action = ({
    ([
        "name"        : HIC"孤鴻海上來，池潢不敢顧"NOR,
        "action"      : "$N左手捏著劍訣，右手手腕微動，一招「$a」，$w快速無倫的刺向$n的$l",
        "damage"      : 15,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIW"俯聽聞驚風，連山若波濤"NOR,
        "action"      : "$N右手$w迭然遞出，猛地裏劍交左手，一招「$a」，劍尖從$n意想不到的方位刺去",
        "damage"      : 17,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIR"落日照大旗，馬鳴風蕭蕭"NOR,
        "action"      : "$N手中$w自左上方斜劈向下，一招「$a」，一聲吆喝，橫削三劍",
        "damage"      : 20,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIY"舉頭望明月，低頭思故鄉"NOR,
        "action"      : "$N手中$w連轉數圈，一招「$a」，攻得$n中宮大開，隨即一劍刺出",
        "damage"      : 17,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIG"萬國仰宗周，衣冠拜冕疏"NOR,
        "action"      : "$N將$w一立，低頭躬身，使一招「$a」，隨即挺身向$n的$l刺去",
        "damage"      : 13,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : YEL"大漠孤煙直，長河落日圓"NOR,
        "action"      : "$N身子一側，一招「$a」，$w轉了個圈圈，一劍砍向$n",
        "damage"      : 10,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIB"長安一片月，萬戶擣衣聲"NOR,
        "action"      : "$N手中$w虛空劃了一圈，一招「$a」，冷不防的一劍刺向$n",
        "damage"      : 18,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIM"天花落不盡，處處鳥啣飛"NOR,
        "action"      : "$N連攻三劍，劍劍刺向$n要害，正是一招「$a」",
        "damage"      : 16,
        "damage_type" : "刺傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIG"晚宵一星火，滿城遍流螢"NOR,
    HIG"舉兵發胡虜，胭脂繞愁雲"NOR,
    HIG"案前焚香牘，操琴譜新曲"NOR,
    HIG"每逢佳節近，遊子倍思親"NOR,
    HIG"梅林飛紅絮，天女灑繽紛"NOR,
    HIG"孤注虎穴進，一擲得虎子"NOR,
    HIG"躂劍遊仙峰，湖海入我簾"NOR,
    HIG"擁懷無爭志，天下烽煙止"NOR,
    HIG"夕陽連城起，無處不禪機"NOR,
    HIG"亂花迷人眼，淺草沒馬蹄"NOR,
    HIG"千山鳥飛絕，萬徑人蹤滅"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N縮劍三寸輕輕迴旋，一招『$a』，劍身暴長，劍尖亂顫刺向$n$l",
        "damage"      : 60,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N右手高舉$w過頭，一招『$a』，一聲叱喝，四劍連發直攻$n頭部",
        "damage"      : 80,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N手中$w自左下方斜劈向上，一招『$a』，一個轉身後，曲劍斬向$n$l",
        "damage"      : 100,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N倒轉$w順臂，一招『$a』，轉身欺近，趁掩勢向$n腰眼橫砍一劍",
        "damage"      : 140,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N彈指劍鋒，呼嘯起劍，一招『$a』，身如天女舞動，燦爛劍光由八方加向$n",
        "damage"      : 160,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N手中$w一劍力挺，一招『$a』，劍身灌足內勁，劍尖抖動直指$n$l",
        "damage"      : 180,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N改以足御劍，姿態瀟灑若仙，一招『$a』，轉身跳躍，橫腳揮出一劍削向$n$l",
        "damage"      : 220,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N收劍背後一個後躍轉身，一招『$a』，一出三劍順勢橫削$n全身三路要害",
        "damage"      : 250,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N手中$w一彈飛起，激出一線劍光，一招『$a』，高躍執劍，由上欺下向$n連攻致命五劍",
        "damage"      : 280,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N舞動手中$w在空中連出數劍，白色奇花在空中一閃再閃，剎那間白光掠處，一招『$a』彷彿幻化出無數白色花瓣，化作滿天花雨，只見$n踏入一面幽清花海",
        "damage"      : 300,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "『$a』再現，空氣中響起了「嗖」的破空之聲，緊接著鋪天蓋地而來的，竟是破空銳嘯之聲，無數$w劃出的劍招，前赴後繼帶著無比殺意，刺向$n",
        "damage"      : 300,
        "damage_type" : "刺傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("deadlysword");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("deadlysword", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("godlight", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "godlight" || me->query_skill_mapped("sword") != "deadlysword") {
        return 1;
    }

    if (random(1200) + random(1200) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("deadlysword", 1);

        inspiration("\n"
                    HIR"    ◎      ◎     "HIY"◢■◣\n"
                    HIR"  ◢■■■■■◣   "HIY"■■■  "HIW + me->query("name") + "一招一式地揮灑..全新劍意源源湧出...\n"
                    HIR"    □      □     "HIY"◥■◤\n"
                    HIR"■  □  ■  □  ■         "HIW"口中吟出詩號：「"BLINK + my_attack_name[action_level] + HIW"」\n"
                    HIR"■■■■■■■■■\n"
                    HIR"■■■□□□■■■\n"
                    HIR"■■■□□□■■■         "HIW + me->query("name") + "順利地透過連城訣一窺劍道的全新境界!!\n\n"NOR);
    }
}

mapping query_action(object me) {
    int addition = me->query_action_level("deadlysword");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
