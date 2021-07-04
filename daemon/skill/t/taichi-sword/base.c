inherit "/std/skill/sword";

void create() {
    name = "太極劍法";
}

string *parry_msg = ({
    "$n身軀一引，手中$w將$N的攻勢盡數曳了開去。\n",
    "$n把手中的$w舞成圓環，將$N的攻勢盡數擋了下來。\n",
    "$n以靜制動，平舉手中$w，無招勝有招，化解了$N的攻勢!\n",
});

int size_of_parry_msg = sizeof(parry_msg);

mapping *action = ({
    ([
        "name"        : HIW"三環套"HIY"月"NOR,
        "action"      : "$N向前橫步落地，兩手抱劍胸前使出「$a」，只見三團劍光連綿不絕，返復畫向$n",
        "damage"      : 15,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIC"指南針"NOR,
        "action"      : "$N跨左半步，右足併合前屈，兩手所抱之劍向前平刺，一式「$a」直取$n$l",
        "damage"      : 15,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIY"等魚式"NOR,
        "action"      : "$N後退繞圈，沉肩垂肘，一式「$a」劃出，劍尖先退而後進刺，迅速地點向$n手肘",
        "damage"      : 15,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIC"射雁式"NOR,
        "action"      : "$N左足前移而成虛步，順勢提劍使出「$a」，劍刃由上往$n右側斫劈，劃出一道亮麗的青色長虹",
        "damage"      : 20,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIM"燕子"HIW"抄水"NOR,
        "action"      : "$N兩足成弓步式，劍隨腰腿往左斜畫出一劍，一式「$a」徐徐斬向$n$l",
        "damage"      : 20,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIW"流星趕"HIY"月"NOR,
        "action"      : "$N身隨劍轉使出「$a」，突然劍隨右轉翻上，復向下斫劈至$n$l",
        "damage"      : 20,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIM"仙人指路"NOR,
        "action"      : "$N勁落兩足，屈膝坐實，突然一個進步使出「$a」，只見一道劍光直取$n$l",
        "damage"      : 25,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIW"白猿獻"HIG"果"NOR,
        "action"      : "$N兩足移步而後併齊，同時左手劍前繞成平圓劍圈，一式「$a」攪亂$n的攻勢，接著$w隨勢迴刺$n咽喉",
        "damage"      : 25,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIR"小魁星式"NOR,
        "action"      : "$N右手劍刃翻上，眼神平視前方，含胸拔背，一式「$a」由上往左後劃出，似慢實快地劈至$n左脅",
        "damage"      : 25,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIB"大魁星式"NOR,
        "action"      : "$N右手接劍使出「$a」，劍勢向下往右後撩向$n，同時左手劍指順勢翻腕刺向$n$l",
        "damage"      : 30,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIG"迎風撢塵"NOR,
        "action"      : "$N兩腿成斜弓步，左手劍指搭於右腕使出「$a」，劍隨腰腿向右往上平平截向$n$l",
        "damage"      : 30,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIC"魚躍龍門"NOR,
        "action"      : "$N將$w收帶胸前，抱劍畫圓，接著進足跳步，一式「$a」忽然刺出，劍尖平刺向$n右脅",
        "damage"      : 30,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIY"鳳凰展翅"NOR,
        "action"      : "$N左足向內旋移，身隨腰腿向右旋轉，虛領頂勁，劍隨勢轉，一式「$a」迅速地劃向$n咽喉",
        "damage"      : 35,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIC"左右攔掃"NOR,
        "action"      : "$N斜進右足使出「$a」，右手$w往下平刺$n左腳，接著左手一分，右手翻腕刺向$n右臂",
        "damage"      : 35,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIW"順水推舟"NOR,
        "action"      : "$N手中$w向下往後上撩，接著一式「$a」順勢提足，迅速向$n平刺一劍",
        "damage"      : 35,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIC"風捲"HIG"荷葉"NOR,
        "action"      : "$N劍蓄綿勁，以一式「"HIY"懷中抱月"NOR"」扯偏$n的攻勢，接著使出「$a」，只見一道圓月如電光般畫向$n$l",
        "damage"      : 40,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : GRN"蜻蜓"HIC"點水"NOR,
        "action"      : "$N覷準空檔使出「"HIG"撥草尋蛇"NOR"」壓制$n雙腕，接著一個轉身使出「$a」，手中$w已向後繞圈往下，平平刺向$n",
        "damage"      : 40,
        "damage_type" : "刺傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIC"綿裡針"NOR,
    HIC"纏絲劍"NOR,
    HIC"圓融如意"NOR,
    HIC"風撫塵不落"NOR,
    HIC"繞指秋風動"NOR,
    HIC"兩儀並濟源相生"NOR,
    HIC"反璞萬法終歸真"NOR,
    HIC"翻覆乾坤終歸渾沌"NOR,
    HIC"心無拘囿始成太極"NOR,
    HIC"無極無盡萬劍歸一"NOR,
    HIC"無法無道萬物歸原"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N使劍護住全身，『$a』的連綿劍勁將$n逼開數步，只見$N左手捏起劍訣，右手抖動的$w突然從劍圈透出直指$n",
        "damage"      : 80,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N以意運劍使出『$a』，道道劍弧彷彿放出柔絲纏住$n雙臂，使得$n反被帶著連連轉圈，突然間，一道劍弧已經趁隙劃至$n胸前",
        "damage"      : 100,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "只見$N原本凝嶽的劍勢突然一變，行招速度倏地加快，劍弧、劍圈一道接一道地攻向$n週身要穴，這招『$a』數十招彷彿渾成一大招，無跡可尋",
        "damage"      : 120,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N左手劍訣歸於右手腕，右手$w東畫一圈，西畫一圈，這招『$a』式式連環無半點斧鑿痕跡，隱隱挾著一股柔韌風攻向$n",
        "damage"      : 140,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N將於綿勁蓄於$w身，左手劍劃向$n左臂，就在劍招將老之際，你釋出剛勁逼得$w鋒一彎，這式『$a』出人意料地攻向$n咽喉",
        "damage"      : 160,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N凝神使出『$a』，劍圈攻守並重，心地一片空明，陰陽動靜均達至「"HIW"御眾之形"NOR"」的境界，突然嗤嗤兩聲，連環兩劍已削向$n兩處要害",
        "damage"      : 200,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N一劍劃出長弧，至半空時突然化出無數個大小劍環，虛虛實實令人神眩，$n眼睛一花，『$a』化出的所有劍環已齊朝$n頭頂落下",
        "damage"      : 250,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N一改原有的圓融劍勢，手中$w隨意亂擊，一式『$a』看似亂無章法，卻將$n發出的勁道連同劍鋒，巧妙地全數撥返自身",
        "damage"      : 300,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N捨棄所有招式的稜角束縛，隨手舞劍雖無招式，卻暗合太極意象，心之所向，一個眨眼間，這式『$a』的劍鋒陰影突然落在$n額前三寸之處",
        "damage"      : 350,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N一團真氣運至丹田後散開，緩緩流於四肢百脈，口念：『$a』，右手騰起，$w光芒大盛，$N握著劍柄的手掌，微微一用力，便是有著無數道劍氣飛射而出，朝著$w飛去",
        "damage"      : 350,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N體內真氣流轉，陡然爆發出了一股極為強烈的氣勢，猶如沉澱了百年的火山一般，猛然爆發了出來。一招『$a』，伴隨沉悶的聲響，讓整個大地猛烈顫抖",
        "damage"      : 350,
        "damage_type" : "刺傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level;

    if (me->query("gender") != "男性") {
        return 6;
    }

    action_level = me->query_action_level("taichi-sword");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("taichi-sword", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("wudonforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "wudonforce" || me->query_skill_mapped("sword") != "taichi-sword") {
        return 1;
    }

    if (random(1700) + random(1700) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("taichi-sword", 1);

        if (random(2)) {
            inspiration("\n"
                        HIR"沉寂已久的武林帖重現江湖!!\n"
                        NOR"**********************************************************\n"
                        HIW"「\n"
                        "   太極劍法名家"HIC + me->query("name") + HIW" 臨陣創出了全新奧義 『"BLINK + my_attack_name[action_level] + HIW"』!!\n"
                        HIW"                                                       」\n"
                        NOR"**********************************************************\n\n");
        } else {
            inspiration("\n"
                        HIR"武林泰斗張三豐撫鬚笑道：\n\n"
                        HIW"「"HIC + me->query("name") + HIW"得我太極劍絕詣，臨陣創出的『"BLINK + my_attack_name[action_level] + HIW"』威力不凡，\n"
                        "日後必能倚此懲奸除惡，發揚我輩俠義道精神!!」\n\n"NOR);
        }
    }
}

mapping query_action(object me) {
    int addition = me->query_action_level("taichi-sword");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}

string query_parry_msg(object weapon) {
    string msg = parry_msg[random(size_of_parry_msg)];

    if (weapon) {
        msg = replace_string(msg, "$w", weapon->name());
    }

    return msg;
}
