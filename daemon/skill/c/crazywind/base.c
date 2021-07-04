inherit "/std/skill/blade";

void create() {
    name = "狂風刀法";
}

mapping *action = ({
    ([
        "action"      : "$N一個旋身閃過了$n的攻勢，並趁著$n攻擊而疏於防範的契機，橫過$w，往$n胸腹間破綻連斬數刀",
        "damage"      : 45,
        "damage_type" : "割傷",
    ]),
    ([
        "action"      : "$N一聲呼嘯，手中$w由一化二、由二化四、由四化八，在眨眼間向$n劈出一百二十八刀",
        "damage"      : 50,
        "damage_type" : "割傷",
    ]),
    ([
        "action"      : "$n凝神慎防$N的斬擊，然而$N卻不依常規，舉起$w竟然朝$n進行連續突刺，迫的$n一陣手忙腳亂",
        "damage"      : 40,
        "damage_type" : "刺傷",
    ]),
    ([
        "action"      : "$N腳踢地面，頓時揚起一陣塵土，$n急忙後退擺起架勢，低頭嚴防$N進行近身搏擊。驀然，$n眼前一陣光亮，刀勢竟從天而降，嚇得$n魂不附體，起身後躍",
        "damage"      : 50,
        "damage_type" : "斲傷",
    ]),
    ([
        "action"      : "$N順著$n的攻勢輕飄飄的轉身，瞬間由$n的左方轉到右方手中$w翻轉，快如閃電的往$n的$l斬了一刀",
        "damage"      : 45,
        "damage_type" : "斬傷",
    ]),
    ([
        "action"      : "$N運起身法，順著$n的攻勢左旋右轉，不時夾雜著掌揮腳踢，弄得$n暈頭轉向。就在$n微露疲態的時候，$N一個閃身竄到$n後頭，攔腰揮擊",
        "damage"      : 35,
        "damage_type" : "斲傷",
    ]),
    ([
        "action"      : "$N把$w往空中拋去，並且揉身而上，一陣掌風腳舞將$n困在原地，$n心叫不妙，一抬頭，果然$w就近在咫尺",
        "damage"      : 50,
        "damage_type" : "斲傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIB"封龍斬"NOR,
    HIG"風"HIB"雨"HIY"交加"NOR,
    HIM"殘風"NOR + MAG"破浪"NOR,
    HIG"疾"HIW"風"HIC"勁"HIG"草"NOR,
    HIC"風"HIW"華"HIM"絕"HIB"代"NOR,
    HIW"風吹"HIC"旌旗"HIB"颺"NOR,
    HIW"風停"HIG"萬物"HIY"止"NOR,
    HIM"刀催魂"HIR"淚縱橫"NOR,
    HIR"吾入"HIB"魔道"HIW"橫行"NOR"刀",
    HIR"狂人一刀"HIW"斬"HIR"神州"NOR,
    HIW + BLK"橫刀問天嘆無敵"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N趁$n一個閃神，手中$w攻$n的下盤，以迅雷不及掩耳之勢拖刀上揮！回刀猛斬，好一招精妙的『$a』",
        "damage"      : 70,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N使出『$a』，捨去精妙招式，一手提著$w，一招單刀直入的攻擊！$n身影雖快，仍被砍中了$l",
        "damage"      : 100,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N使了一招『$a』隨手將$w的刀刃一彎，彈出一陣刀氣直襲對手！$n欲出招格檔，刀刃早已白進紅出",
        "damage"      : 130,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$n的身形如電，快速閃躲$N的出招，只見$N左掌右刀使了招『$a』！左手夾勁排開$n的武器，右手$w則向$n$l劈去",
        "damage"      : 160,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N大喝：看這招『$a』！只見$N使勁將$w纏在腿上，腿御刀、刀並腿、刀代腿招，腿含刀勁！就在那一瞬間，$n中招了",
        "damage"      : 190,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "『$a』一招被$N持$w使動！刀勢似奔雷不停，若不定朔風！$n站不穩腳，不慎被砍中$l了",
        "damage"      : 220,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N翻動手上$w，凜冽寒風捲掃四周枝頭綠葉，落葉夾刀勁，襲捲向$n！只見$n$l傷口爆出了血花！好一招『$a』",
        "damage"      : 250,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N只見$n技藝高絕，有去無回的局面，$N臉上的二行老淚不禁滴落在$w上！猛然一吼發了一招『$a』！力途困獸之鬥的一刀，劈往$n$l上",
        "damage"      : 280,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "看這招『$a』！只見$N運氣於全身各大穴，一時間風砂走石！空氣中凝結一股陰森之氣，手中$w往$n$l猛砍而去",
        "damage"      : 310,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$n見$N將$w插入土中，$n瞬招如行瀑般攻向$N！$N身形不動，刀勁卻早從身上暴發！一瞬間$n跪倒在地上！這正是狂風刀法中最凶險的一式『$a』",
        "damage"      : 350,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "看不見！看不見的一招！只看見$n口吐鮮血！這一招『$a』無形、無聲、無式、亦無招！只見$N持$w仰天而笑：『這世上恐怕沒人是我的敵手』",
        "damage"      : 400,
        "damage_type" : "割傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("crazywind");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("crazywind", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("godlight", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "godlight" || me->query_skill_mapped("blade") != "crazywind") {
        return 1;
    }

    if (random(2000) + random(2000) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("crazywind", 1);

        inspiration(HIY"\n －－－ "HIW"遠方傳來刀氣破空的巨聲，看來 "HIB"－－－　－－－　－－－－　－－－－"
                    HIY"\n －－－－        "HIY"◢◣ 是有人揮出了狂風刀法密招『" + my_attack_name[action_level] + HIC"』的聲音！"
                    HIY"\n －－　－        "HIY"█"HIW"▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁  "HIB"－－－　－－－"
                    HIY"\n －　－"NOR + GRN"  ◢◣◣◣□"HIB"▄▄▄▃▃▃▁▁▁                      ﹨　"HIB"－－　－－"
                    HIY"\n －－－"HIG"§████□"HIB"█████████▇▇▇▆▆▆▅▅▅▃▃▂﹨　"HIB"－－　－－"
                    HIY"\n －　－"NOR + GRN"　◥◤    "HIY"█                             　　　　　　"HIB"－－　－－　－"
                    HIY"\n －－－          "HIY"◥◤ "HIC"只見"HIR + me->query("name") + HIM"縱聲狂笑～哈哈哈，我領悟了！\n\n"NOR);
    }
}

mapping query_action(object me) {
    int addition = me->query_action_level("crazywind");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
