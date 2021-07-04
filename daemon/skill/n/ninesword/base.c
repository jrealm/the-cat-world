inherit "/std/skill/sword";

void create() {
    name = "獨孤九劍";
}

mapping *action = ({
    ([
        "name"        : HIG"總訣式"NOR,
        "action"      : "$N使一招「$a」，手中$w如一條銀蛇般刺向$n的$l",
        "damage"      : 5,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIC"破劍式"NOR,
        "action"      : "$N使出獨孤九劍中的「$a」，劍影化作萬丈金光斬向$n的$l",
        "damage"      : 3,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIW"破刀式"NOR,
        "action"      : "$N一招「$a」，身形陡然滑出數尺，手中$w斬向$n的$l",
        "damage"      : 5,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIM"破槍式"NOR,
        "action"      : "$N手中$w中宮直進，一式「$a」對準$n的$l刺出一劍",
        "damage"      : 10,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIY"破鞭式"NOR,
        "action"      : "$N縱身一躍，手中$w一招「$a」對準$n的$l斜斜刺出一劍",
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIG"破索式"NOR,
        "action"      : "$N的$w憑空一指，一招「$a」刺向$n的$l",
        "damage"      : 1,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIW"破掌式"NOR,
        "action"      : "$N手中$w向外一分，使一招「$a」反手對準$n$l一劍刺去",
        "damage"      : 7,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIM"破箭式"NOR,
        "action"      : "$N橫劍上前，身形一轉手中$w使一招「$a」畫出一道光弧斬向$n的$l",
        "damage"      : 4,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIY"破氣式"NOR,
        "action"      : "$N彈劍向前，手中$w使一招「$a」射出一道光弧飛向$n的$l",
        "damage"      : 15,
        "damage_type" : "割傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIY"光翼天雨"NOR,
    HIW"拔"HIC"劍"HIW"不"HIC"思"HIW"理"NOR,
    HIR"用"HIW"劍"HIR"不"HIW"思"HIR"招"NOR,
    HIW"棄"HIY"劍"HIG"不"HIY"思"HIR"危"NOR,
    HIW"九微"HIR"片片"HIM"飛花"HIG"璅"NOR,
    HIW"夢餘荒塚"HIC"照斜陽"NOR,
    HIW"白波九"HIB"道"HIM"流"HIW"雲"HIC"山"NOR,
    HIW"直向"HIM"蒼"HIC"天"HIW"橫冷"HIY"劍"NOR,
    HIW"一睨"HIC"人才"HIM"天下"HIB"空"NOR,
    HIB"無劍"HIR"忘劍"HIW"始得劍"NOR,
    CYN"無心"NOR"無我"HIY"劍"HIC + BWHT"空破"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N順手一招『$a』，手中$w一抖劍勢一變。出招後劍身反射光芒，$n被包圍於燦爛奪目的劍網之中",
        "damage"      : 80,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$n一發勁，遶到了$N的背後，只見$N頭也不回，手腕翻動！一招『$a』手中$w早往身後的$n刺了過去",
        "damage"      : 100,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N舉劍喝道：『著』！劍式幻化，有如掌擊、刀勢、棍捻、鞭纏，招式雜亂無章！$n完全無法看透此招的破綻，$n$l中招了，好一招『$a』",
        "damage"      : 120,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$n的攻擊虛實參雜，$N的手上$w的震離五丈之外，只見$N雙腳往地一跺，反撲到了$n的身旁！以氣發招、以指使劍！$n中招了，好一招『$a』",
        "damage"      : 140,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N手中$w化出千道寒芒，萬點光雨，一時天地間盡是劍鋒和激動的氣旋一招『$a』將光芒化作點點毫光，有如一張網般向$n襲來",
        "damage"      : 180,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N將$w向下一擲，左腳踏在劍上，以腳運勁於劍身，劍身扯動四周氣流，使出了這一式『$a』",
        "damage"      : 200,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N手中$w連顫數下，一招『$a』帶起層層浪濤，$n亦感到波濤翻動有若實質，$n的身形為之一滯，被著浩翰洶湧的一招刺中$l",
        "damage"      : 250,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$n守招滴水不漏，$N攻招連綿不絕，但仍無法攻破$n的守勢，一招『$a』虛是直攻，實則橫刺，虛晃一招就往$n$l刺去",
        "damage"      : 300,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N催動內力，往前大踏一步使出了九劍領悟之招『$a』，手中$w破空而去，利器去速之疾使得$n$l中招了",
        "damage"      : 350,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N使出『$a』雙手倒握$w，立於胸前，口中唸著劍訣：「八風不動撼山河，劍出罡芒耀九洲」出手如閃電雷霆，$n來不及反應而被$w刺穿$l",
        "damage"      : 400,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N手握$w衝近$n。一瞬，一招『$a』破空而至，如離弦之箭。\n"
                        "$N面冷如霜，但一雙明眸之中，倒映著身前$w的奇異光芒，彷彿竟有開天破山、不死不回的無匹氣勢",
        "damage"      : 400,
        "damage_type" : "刺傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("ninesword");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("ninesword", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("starforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "starforce" || me->query_skill_mapped("sword") != "ninesword") {
        return 1;
    }

    if (random(850) + random(850) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("ninesword", 1);

        inspiration(HIB"\n           ╱◣"
                       "\n         ╱  ╱◣            ◢◣"
                       "\n       ╱  ╱  ╱◣         ︱ ◥◣      "HIY"這一劍"
                       "\n ╭╮"HIB"╱  ╱  ╱  ╱◣      ╱    █              "HIM"無從擋起"
                    HIY"\n ╰╯"HIB"╲╱  ╱  ╱  ╱◣  ╱      █"
                    HIR"\n ●"HIG"╭╮"HIB"╲╱  ╱  ╱  ╱█      ◢◤      "HIR"這一式"
                    HIG"\n   ╰╯  "HIB"╲╱  ╱  ╱╱      ◢"NOR + BLU"◤"NOR"                "HIW"不同以往"
                    HIC"\n ╭╮"NOR + RED"●    "HIB"╲╱  ╱╱      ◢"NOR + BLU"◤"NOR
                    HIC"\n ╰╯        "HIB"╲╱╱      ◢"HIW + HBBLU"◢"NOR + HIW"◣          但見 "HIG + me->query("name") + HIW" 神態灑脫"
                    HIR"\n●"HIB"╭╮         ╱      ◢"NOR + BLU"◤"HIW"██◣"
                    HIB"\n  ╰╯       ╱      ◢"NOR + BLU + BWHT"◤"NOR"█  "HIW"██◣        一式「 "NOR + my_attack_name[action_level] + HIW" 」"
                    HIB"\n           ╱      ◢"NOR + BLU + BWHT"◤"NOR"███  "HIW"██◣"
                    HIB"\n       ╱￣      ◢"NOR + BLU"◤"NOR"◥████  "HIW"██        領悟 "NOR + GRN"獨孤九劍 "HIW"全新劍意"
                    HIB"\n       ╲      ◢"NOR + BLU"◤      "NOR"████"HBWHT"◥"NOR + HIW"██◣"
                    HIB"\n         ╲＿◢"NOR + BLU"◤        "NOR"◥████"HBWHT"◥"NOR + HIW"██◣\n\n"NOR);
    }
}

int valid_learn(object me) {
    if (me->query_skill("ninesword", 1) < 1) {
        return 0;
    }

    return ::valid_learn(me);
}

mapping query_action(object me) {
    int addition = me->query_action_level("ninesword");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
