inherit "/std/skill/unarmed";

void create() {
    name = "柔虹指法";
}

mapping *action = ({
    ([
        "name"        : HIM"菊樓採月"NOR,
        "action"      : "$N左手一揮，一招「$a」右手點向$n$l",
        "force"       : 400,
        "damage"      : 30,
        "damage_type" : "刺傷",
        "weapon"      : "右手食指",
    ]),
    ([
        "name"        : HIC"雪橋翦梅"NOR,
        "action"      : "$N使一招「$a」，身影忽前忽後，突然一轉身左手往$n的$l點去",
        "force"       : 350,
        "damage"      : 40,
        "damage_type" : "刺傷",
        "weapon"      : "左手中指",
    ]),
    ([
        "name"        : HIM"柳亭簪花"NOR,
        "action"      : "$N身法稍頓，左手一揚使出「$a」往$n的$l點去",
        "force"       : 320,
        "damage"      : 40,
        "damage_type" : "刺傷",
        "weapon"      : "左手中指",
    ]),
    ([
        "name"        : HIM"桃墳撲蝶"NOR,
        "action"      : "只見$N纖腰一擺，陡然滑出數尺，右手順著來勢一招「$a」往$n的$l點去",
        "force"       : 380,
        "damage"      : 45,
        "damage_type" : "刺傷",
        "weapon"      : "右手食指",
    ]),
    ([
        "name"        : HIC"柔情似水"NOR,
        "action"      : "只見$N雙手合攏，氣集指尖，身形忽快忽慢，使出一招「$a」往$n的$l點去",
        "force"       : 350,
        "damage"      : 35,
        "damage_type" : "刺傷",
        "weapon"      : "右手中指",
    ]),
    ([
        "name"        : HIG"虹柔破天"NOR,
        "action"      : "$N將全身的力道集於右手食指，左手打出一式虛招，企圖擾亂$n，右手一招「$a」往$n的$l點去",
        "force"       : 380,
        "damage"      : 45,
        "damage_type" : "刺傷",
        "weapon"      : "右手食指",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIC"五玉柔風"HIR"拂天塵"NOR,
    HIR"翔雲虹橋"HIG"築天宮"NOR,
    HIY"金虹銀瀑"HIC"映龍泉"NOR,
    YEL"楓落秋水"HIR"纏柔情"NOR,
    HIC"柔風落"HIR"情"HIW"君無意"NOR,
    HIY"心繫郎君"NOR + BLU"且無"HIR"情"NOR,
    HIW"意指緣心"NOR"盼君歸",
    HIR"虹築楓橋"NOR + YEL"落葉"HIC"碎"NOR,
    HIC"柔影飛揚"HIR"滅"HIM"紅塵"NOR,
    HIY"穿陰破陽"HIR"斷"HIC"魂指"NOR,
    HIM"柔"HIG"虹"HIM"陰"HIG"旋"HIM"破"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N輕快的踏起奇妙身法，捲起一陣清風，一招『$a』如暴雨般凌空襲向$n",
        "force"       : 550,
        "damage"      : 40,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N盡力一躍，沒入雲端，一時之間讓$n摸不著頭緒，『$a』使出有如幻影般的向$n突進，同時右掌畫圓，擊向$n",
        "force"       : 710,
        "damage"      : 45,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N氣行眉心，左掌發勁一出，其勢有如一頭巨龍，一招『$a』襲向$n",
        "force"       : 850,
        "damage"      : 40,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N將真氣行至雙掌，同時雙掌來回運行，一股柔中帶剛的勁道油然生起，一招『$a』向$n擊去",
        "force"       : 1000,
        "damage"      : 40,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N手捻蓮花，力道集於右手食指一招『$a』使出，一個旋身點向$n",
        "force"       : 1150,
        "damage"      : 40,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N一個旋身，左足輕踏，一招『$a』左手指突地一股氣勁竄出，衝向$n",
        "force"       : 1250,
        "damage"      : 40,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N一聲爆吼$n頓時反應不及，$N反身一招『$a』氣行指尖，擊向$n",
        "force"       : 1450,
        "damage"      : 60,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N身形忽快忽慢，力道集於右手食指『$a』使出，震得$n雙手發麻，$N順勢點向$n",
        "force"       : 1650,
        "damage"      : 60,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N內勁一吐，使一招『$a』，四周的空氣都仿佛實質般，隨即身影急速的游走，緊接著十多道錐形氣芒，隨著虛幻的身影向$n「轟」的一聲狂擊而去",
        "force"       : 1650,
        "damage"      : 60,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N哼的一聲，勁氣凝聚周身，雙目精光大綻，一招『$a』手指凌空而出，泛起周圍的空氣震盪，點向$n的眉心要害",
        "force"       : 1650,
        "damage"      : 60,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N急運身法，閃至$n身後，爆喝一聲一招『$a』氣勁由十指竄出，衝向$n",
        "force"       : 1800,
        "damage"      : 60,
        "damage_type" : "刺傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

mapping query_action(object me) {
    int addition = me->query_action_level("tenderzhi");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}

varargs int improve_new_action(object me, int flag) {
    int action_level;

    if (me->query("gender") != "中性") {
        return 6;
    }

    action_level = me->query_action_level("tenderzhi");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("tenderzhi", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("pollyforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "pollyforce" || me->query_skill_mapped("unarmed") != "tenderzhi") {
        return 1;
    }

    if (random(2000) + random(2000) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("tenderzhi", 1);

        inspiration(HIW"\n\t    --------------- 黑暗忽然降臨大地 ---------------"NOR"\n"
                    HIC"遠方聽到 " + me->query("name") + HIC"大喝一聲，我領悟了柔虹指法一個秘招 "HIG"『" + my_attack_name[action_level] + HIG"』\n\n"NOR);
    }
}

int valid_learn(object me) {
    if (me->query_skill("tenderzhi", 1) < 1) {
        if (me->query("family/family_name") != "日月神教") {
            return notify_fail("這項技能只能找東方不敗學。\n");
        }

        if (me->query("family/generation") != 3) {
            return notify_fail("只有東方不敗的嫡傳弟子才可以學。\n");
        }
    }

    if (me->query("gender") != "中性") {
        return notify_fail("柔虹指法是斷絕情慾後才能練的武功。\n");
    }

    return ::valid_learn(me);
}
