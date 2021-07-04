inherit "/std/skill/sword";

void create() {
    name = "玉簫劍法";
}

mapping *action = ({
    ([
        "name"        : HIG"蒼海映月明"NOR,
        "action"      : "$N翻轉手中$w，使出「$a」，瞬間劍花朵朵由上往下覆蓋$n周身要害",
        "damage"      : 70,
        "damage_type" : "多處刺傷",
    ]),
    ([
        "name"        : HIC"餘音繞樑"NOR,
        "action"      : "只見$N飛身沖天，一招「$a」，$w脫手而出宛如活物般刺向$n的$l",
        "damage"      : 70,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIM"桃臨牆帷"NOR,
        "action"      : "$N一招「$a」，身影前後飄渺不定，突然間倏的一聲一道劍氣疾射而出，斬向$n的$l",
        "damage"      : 70,
        "damage_type" : "割傷",
    ]),
    ([
        "action"      : "$N手中$w向$n的胸口平刺，$n移轉身形欲避其鋒，突然$w如乳燕歸巢般急轉擊向$n的$l",
        "damage"      : 70,
        "damage_type" : "斬傷",
    ]),
    ([
        "name"        : HIG"參動商移"NOR,
        "action"      : "$N手中$w如銀瓶乍破，一招「$a」幻出數道劍影，疾刺$n的$l",
        "damage"      : 70,
        "damage_type" : "刺傷",
    ]),
    ([
        "action"      : "$N腳步如行雲流水形轉影移，手中$w更如鐵騎槍鳴發出陣陣聲響擾亂$n的心神，一剎挪間$N趁$n精神恍惚之際冷不防一劍刺中$n的$l",
        "damage"      : 40,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIW"羽燕心歸"NOR,
        "action"      : "突然$N身如鴻毛輕輕飄然，借$n攻擊之力翻轉身形一招「$a」反手對準$n$l一劍刺去",
        "damage"      : 70,
        "damage_type" : "刺傷",
    ]),
    ([
        "action"      : "$N垂劍及地，待$n逼近之時手中$w如鋼絲拋向天際般，由下往上畫出一道光弧斬向$n的$l",
        "damage"      : 70,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIY"東籬狂客"NOR,
        "action"      : "$N神態飄逸，劍勢清雅，身形點塵不染，一招「$a」，瞬間劍勢走急揮灑如狂，$n一時錯愕，被$N攻其不備，$l中了一著",
        "damage"      : 70,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIB"滿溢招損"NOR,
        "action"      : "$n欲先搶攻，但被$N看出了破綻，$w右手換左手，一招「$a」不偏不以刺中$n的$l",
        "damage"      : 60,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIC"歌"HIY"狂"HIG"五柳"NOR,
        "action"      : "$N手中$w劍勢走狂，氣勢如鴻，虎虎生風，一招「$a」捲起磅礡氣勢斬向$n",
        "damage"      : 85,
        "damage_type" : "斬傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIY"金聲玉振"HIC"歌中流"NOR,
    HIG"山外清音"HIM"花點翠"NOR,
    HIC"瀟湘水云"HIY"蘭履霜"NOR,
    HIY"月射寒江"HIM"映佳人"NOR,
    HIC"響隔樓台"YEL"山別鶴"NOR,
    HIM"廣陵止息"HIY"識歸舟"NOR,
    HIY"星河千帆"HIR"史乘龍"NOR,
    HIC"蕭中隱歌"HIG"曲長鳴"NOR,
    HIG"碧澗流泉"HIR"音繞梁"NOR,
    HIW + BLK"十面埋伏"HIM"爭楚漢"NOR,
    HIG"春江夜畔"HIW"共明月"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N手中$w盤旋飛舞，使出一招，『$a』反手一劍刺出，半途中已連變好幾個方位，刺向$n右肩",
        "damage"      : 80,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N跨前一步，左手捏個劍訣，右手$w斜斜刺出，『$a』樸實無華，劍勁過處，嗤嗤作響，電光石火般刺向$n胸口",
        "damage"      : 100,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N腳下踩出九宮八卦方位，但見寒星點點，或七虛一實，或九虛一實，劍勢綿密如雨，一招『$a』使出身法飄逸若仙，$n全身要害無一處不在劍勁之下",
        "damage"      : 130,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N在半空中連轉兩個圈子，凌空揮出$w只見數道劍氣宛如新月般成弧圈轉，倏地一展，電光石火般刺向$n，正是一招『$a』",
        "damage"      : 170,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N袍袖一拂，順勢使出一招『$a』劍勢連綿，泠若御風，身形一沾即走，宛如翩翩起舞，飄然刺向$n上盤諸處大穴",
        "damage"      : 200,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N身形展動，使出一式『$a』劍勢尤如青天白雲，無暇無垢！刺向$n",
        "damage"      : 230,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N手中$w矯夭飛舞，如神龍破空一般，刺向$n，一式『$a』劍勢劍勢虛虛實實，應左則右，與通常劍理大相徑庭！攻的$n招架不及",
        "damage"      : 260,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N一聲長嘯，內力源源不絕注入劍身，劍上青芒大盛，一式『$a』只見一片茫茫劍氣中，無數青色光圈潮湧而至，傾刻之間$n已沒入劍光之中",
        "damage"      : 280,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "忽地只見$w碧芒瞬間爆發，整片空地剎那被綠色籠罩，幕天席地。銳嘯聲中，猛然使出『$a』，$w從手中飛馳而出，如電芒銳閃，疾衝而出飛向$n",
        "damage"      : 300,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N持著$w綿密的出手之下，一招『$a』，寒光四射的劍氣將$n團團圍住，導致$n寸步難動只能不停拆招化解，甚至呼吸也開始絮亂急促",
        "damage"      : 300,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N右手中的$w赫然大放光芒，丹田內真氣磅礡，透過劍尖劃出一招『$a』，$n瞬間大驚失色，但劍氣如山光柱，已排山倒海直攻而來",
        "damage"      : 300,
        "damage_type" : "刺傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("jade-flute-sword");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("jade-flute-sword", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("peachforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "peachforce" || me->query_skill_mapped("sword") != "jade-flute-sword") {
        return 1;
    }

    if (random(850) + random(850) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("jade-flute-sword", 1);

        inspiration(YEL"\n\t ▃▃▃▃▃▃▃▃   "NOR
                    HIY"\n\t∮         "HIB" ◣    "HIC"但見身旁旋風陣陣颳起"NOR
                    HIY"\n\t∮         "HIB" █ "HIW"只見 "HIR + me->query("name") +  HIW" 閉上雙眼 劍舞翩翩"NOR
                    HIY"\n\t∮  "HIB"◢▃▃▃█"HIW"███████████████████◣   "NOR
                    HIY"\n\t∮ "HIR"＆"HIB"▏"HIW"◆◆"HIB" █"HIW"ˍˍˍˍˍˍˍˍˍˍˍˍˍˍˍˍˍˍˍ∕      "HIY"∮"NOR
                    HIR"\n\t  ∮ "HIW" ￣￣￣"HIB"█                                              "HIY"∮"NOR
                    HIR"\n\t  ∮ "HIM"似是領會了"HIY"玉蕭劍法"HIM"失傳的奧義－"HIW"「"BLINK + my_attack_name[action_level] + HIW"」"NOR
                    HIB"\n\t            ◤"NOR"                              "YEL"▃▃▃▃▃▃▃▃"HIY"∮\n\n"NOR);
    }
}

int valid_learn(object me) {
    if (me->query_skill("jade-flute-sword", 1) < 1) {
        return 0;
    }

    return ::valid_learn(me);
}

mapping query_action(object me) {
    int addition = me->query_action_level("jade-flute-sword");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
