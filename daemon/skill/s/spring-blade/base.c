inherit "/std/skill/blade";

void create() {
    name = "春風快意刀法";
}

mapping *action = ({
    ([
        "name"        : HIC"春風拂人醉"NOR,
        "action"      : "$N使一招「$a」，手中$w輕飄飄地向$n的$l斬去",
        "damage"      : 30,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIY"遠山伴人痴"NOR,
        "action"      : "$N金刃劈風，$w隨著一招「$a」由下而上撩往$n的$l",
        "damage"      : 40,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIM"飛花逐人香"NOR,
        "action"      : "$N身形一轉，一招「$a」$N手中$w刀光不定，斬向$n的$l",
        "damage"      : 40,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIG"柳葉隨人笑"NOR,
        "action"      : "$N舞動$w，一招「$a」迅捷無倫地劈向$n的$l",
        "damage"      : 45,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : HIM"倩影惹人憐"NOR,
        "action"      : "$N手中$w一晃，一招「$a」往$n的$l斜斜砍出一刀",
        "damage"      : 50,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : MAG"蘆雪碎人影"NOR,
        "action"      : "$N提刀過肩，蓄勁發力，一招「$a」直劈$n$l",
        "damage"      : 55,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : HIR"彩蝶灼人衣"NOR,
        "action"      : "$N移步側身，使一招「$a」刀光霍霍斬向$n的$l",
        "damage"      : 60,
        "damage_type" : "斲傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIC"春影"HIG"去無蹤"NOR,
    MAG"風行"HIY"捲殘雲"NOR,
    HIM"快雨"HIC"御風飄"NOR,
    HIY"意語"HIM"歸深處"NOR,
    HIG"刀裡"HIR"藏歸燕"NOR,
    HIW"髮引"HIG"斷千鈞"NOR,
    HIY"梧桐"HIC"空山語"NOR,
    HIM"朝思"HIY"暮回春"NOR,
    HIC"飛浪"HIM"破空斬"NOR,
    HIG"常轉"HIW"過雲煙"NOR,
    HIR"快意"HIY"春風行"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N使一招『$a』，手中$w輕飄飄地向$n的$l斬去",
        "damage"      : 100,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N手起刀落，刀風如刃一招『$a』，$N隨著刀風順勢斬出數刀，捲起陣陣黃土直逼$n",
        "damage"      : 150,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N身形翻轉，刀隨影動，一招『$a』手中$w繞體迴旋，刀風陣陣掃向$n",
        "damage"      : 180,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N舞動$w，一招『$a』由上而下劈出數道刀風斬向$n",
        "damage"      : 220,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N順著$n的攻勢輕飄飄的轉身，使出『$a』瞬間由$n的左方轉到右方，手中$w翻轉，快如閃電的往$n的$l斬了一刀",
        "damage"      : 250,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N將$w一拋，就在$n應招之時，瞬動的身影先是左手一記手刀，順勢右手接刀迴身使出『$a』真正的殺招",
        "damage"      : 280,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N真氣提升，眼露兇光，手中$w冒出點點寒光，倏的一聲一招『$a』將手中$w隨風狂舞，陣陣刀風如雨下直砍$n周身要害",
        "damage"      : 280,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N縱身轉體迴旋，一招『$a』手中$w隨體迴斬，在地上斬出兩道刀氣斬向$n的腳邊",
        "damage"      : 300,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N氣運雙足，使出絕式『$a』，如風身形彷如一人三化，手中$w不知何時已斬向$n",
        "damage"      : 320,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N收起了$w，雙眼一閉，感受著微暖春風襲來；就在$n出招之際，『$a』已後發先至",
        "damage"      : 320,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N如鬼魅般輕飄飄的在$n身邊繞行，使出『$a』瞬間手中$w斬出數道白光直劈$n",
        "damage"      : 320,
        "damage_type" : "斲傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("spring-blade");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("spring-blade", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("skyevilforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "skyevilforce" || me->query_skill_mapped("blade") != "spring-blade") {
        return 1;
    }

    if (random(1700) + random(1700) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("spring-blade", 1);

        inspiration("\n"
                    HIY"\t\t            ★"HIC"突然吹來一陣春風!!!!!"HIY"★\n"
                    HIY"\t\t▲△▲△▲△▲△"HIG"●○●○●○●○"HIY"▲△▲△▲△▲△\n"
                    HIG"\t\t    " + me->query("name") + HIM"得意的狂笑～哈哈哈，我領悟了！\n"
                    HIW"\t\t    我努力的潛心苦修終於讓我領悟了\n"
                    HIC"\t\t    春風快意刀法之「"BLINK + my_attack_name[action_level] + HIC"」，哇哈哈哈哈。\n"
                    HIY"\t\t▼▽▼▽▼▽▼▽"HIG"●○●○●○●○"HIY"▼▽▼▽▼▽▼▽\n\n"NOR);
    }
}

int valid_learn(object me) {
    if (me->query_skill("spring-blade", 1) < 1) {
        if (me->query("class") != "sanjiue") {
            return notify_fail("這項技能只有三絕門主才能傳授。\n");
        }

        if ((me->query("family/generation") != 25)) {
            return notify_fail("只有門主的嫡傳弟子才能領悟。\n");
        }
    }

    return ::valid_learn(me);
}

mapping query_action(object me) {
    int addition = me->query_action_level("spring-blade");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
