inherit "/std/skill/sword";

void create() {
    name = "玉女劍法";
}

mapping *action = ({
    ([
        "name"        : HIC"木蘭迴射"NOR,
        "action"      : "$N迴身急刺，一招「$a」將$w刺向$n的$l",
        "damage"      : 40,
        "force"       : 25,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIY"分花拂柳"NOR,
        "action"      : "$N長劍略挺，劍尖顫了幾顫，一招巧妙無比的「$a」，似左實右，已點在$n的$l",
        "damage"      : 33,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIM"花前月下"NOR,
        "action"      : "$N單劍顫動，如鮮花招展風中，來回揮削，一招「$a」將$w削向$n的$l",
        "damage"      : 35,
        "force"       : 50,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : MAG"彩筆畫眉"NOR,
        "action"      : "$N的$w不過微微兩顫，一招「$a」，橫劍斜削，削向$n的$l",
        "damage"      : 29,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIG"撫琴按蕭"NOR,
        "action"      : "$N迴身探腰，一招「$a」，手中$w以刺向$n的$l",
        "damage"      : 38,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIY"掃雪烹茶"NOR,
        "action"      : "$N縱身一躍，手中$w奮力向下一劈，一招「$a」劈向$n",
        "damage"      : 32,
        "force"       : 50,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIC"松下對弈"NOR,
        "action"      : "$N一招「$a」，手中$w化成層層劍影，刺向$n的全身穴道",
        "damage"      : 40,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIM"池邊調鶴"NOR,
        "action"      : "$N中宮直進，一招「$a」，將手中的$w刺向$n的$l",
        "damage"      : 30,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIG"小園藝菊"NOR,
        "action"      : "$N手中$w抖動，一式「$a」，點向$n的$l",
        "damage"      : 31,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIR"竹簾臨池"NOR,
        "action"      : "$N迴身一轉，一式「$a」，劃出了一道弧光斬向$n的$l",
        "damage"      : 30,
        "damage_type" : "割傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIG"竹馬青梅"HIC"兩無猜"NOR,
    HIW"玉手纖纖"HIM"滿盈握"NOR,
    HIM"千里"HIY"送君"NOR + RED"終須別"NOR,
    BLU"一點"HIC"相思"HIR"寄離愁"NOR,
    HIG"千山"HIW"萬嶽"HIC"一秋水"NOR,
    HIR"怒顏揮劍"HIG"斬情絲"NOR,
    GRN"青燈殘髮"HIW"玉顏泣"NOR,
    HIW + BLK"午夜夢迴"HIR"不願醒"NOR,
    HIC"伊人"NOR + RED"燈火"YEL"闌珊處"NOR,
    RED"殘燈"HIW"拂曉"HIC"眼迷離"NOR,
    HIY"鳳冠"HIR"霞帔"HIC"女兒紅"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N牽起$n的雙手，嘻笑的轉著圈圈，轉的$n頭昏眼花，剎那間幾道劍氣刺入$n體內，正是玉女劍法密招『$a』",
        "damage"      : 70,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "但見$N還劍入鞘雙手緊握，一幅欲語還羞的樣子，$n突的一愣，丈二金剛摸不著頭緒，晃忽之間只覺得$l一痛，赫然是玉女劍法的密招『$a』",
        "damage"      : 100,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N手握$w大喝一聲『$a』，在地上留下了一道深達兩寸的劍痕，一個轉身頭也不回的朝遠方走去，$n見狀大怒越過劍痕直要找$N討個道理，只見劍氣爆發刺穿了$n的雙腳",
        "damage"      : 130,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "激鬥中只見$N稍一提氣身法驟快，一劍往$n的$l點去，倉促下$n閃躲不及，竟是玉女劍法密招『$a』",
        "damage"      : 170,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "激鬥中只見$N與$n擦身而過，身形一凝還劍入鞘，遠望群山一幅望穿秋水的樣子，竟是在交錯的剎那間使出了一招『$a』",
        "damage"      : 190,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N怒目圓睜狀似瘋態大喝出聲：「你無情，我無義」，憤然出手，一式『$a』朝著$n斬去，只見光華萬丈萬千劍氣加諸其身",
        "damage"      : 200,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$n大喝一聲，身法連閃逕自朝著$N衝去，只見$N反手一劍，臉色一股悲淒，似是有說不出的哀傷，卻是一招『$a』",
        "damage"      : 230,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N歇斯底里的對著$n尖叫出聲：「為什麼？？為什麼要打醒我的夢！？為什麼！！」，眼露殺機，殺意鎖定$n周身幾大要害，手中$w一抖挽出幾個劍花，一式『$a』直襲$n而去",
        "damage"      : 250,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "只見$N雙手環胸負劍而立，對著$n綻出一抹淺淺的微笑，$n突的一愣，神色時而猶豫，時而悲淒，最後竟發出一聲悲鳴，其音刻骨，其聲銘心，恍惚之間竟一掌向自己天靈蓋擊去，原來是玉女劍法中失傳的絕學『$a』",
        "damage"      : 280,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N稍一提氣腳下蓮步輕移，身形蕩出片片的幻影，似夢似真宛若天上的仙女，只見$n目光迷離神游物外，待$N身形一凝，$n滿身劍痕血如泉湧，全身血肉翻飛不見一處完好，原來是玉女劍法中失傳的絕學『$a』",
        "damage"      : 300,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N手中$w劍花一挽一式『$a』盪出片片幻影，卻見$n輕挽$N的柔夷喜不自勝，$N朱唇輕吐：「倌人，妾身明天將要嫁于您了，還望倌人自重」，聞言$n大喜，幾碗黃湯下肚倒在桌上久久不醒，但$N卻飄然遠去，回望$n卻是倒臥於血泊之中",
        "damage"      : 350,
        "damage_type" : "刺傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level;

    if (me->query("gender") != "女性") {
        return 6;
    }

    action_level = me->query_action_level("girlsword");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("girlsword", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("girlforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "girlforce" || me->query_skill_mapped("sword") != "girlsword") {
        return 1;
    }

    if (random(1700) + random(1700) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("girlsword", 1);

        inspiration("\n"
                    "      "HIW"                    " + me->query("name") + HIM" 秀眉"HIW"微蹙 孤注一擲連出"HIR"險招\n"
                    "      "HIW"█◣\n"
                    "      "HIW"◥█◣              "HIC"清麗脫俗"HIW"的劍法 "HIG"顧盼神飛 "HIY"婉若遊龍\n"
                    "      "HIW"  ◥█◣"HIG"◢\n"
                    "      "HIW"    ◥"HIB"█"HIG"◤      "HIW"竟"HIR"突破"HIW"以往劍招窠臼 使出的"HIM"玉女劍法"HIW"更上層樓\n"
                    "      "HIG"    ◢◤"HIM + BMAG"◣"NOR"\n"
                    "      "HIW"                     原來是"HIY"領悟"HIW"了【"BLINK + my_attack_name[action_level] + HIW"】\n\n"NOR);
    }
}

mapping query_action(object me) {
    int addition = me->query_action_level("girlsword");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
