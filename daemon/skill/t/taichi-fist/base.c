inherit "/std/skill/unarmed";

void create() {
    name = "太極拳";
}

mapping *action = ({
    ([
        "name"        : HIC"高探馬"NOR,
        "action"      : "$N使出"HIC"太極拳"NOR"中的「$a」，右腳實，左腳虛，當即扣住了$n的手腕",
        "force"       : 220,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIY"攬雀尾"NOR,
        "action"      : "$N提腕沉身，雙手抱圓，使出"HIC"太極拳"NOR"中一招「$a」單鞭甩出，隨即化掌為履，右掌疾按$n胸膛，內勁直透$n前胸大穴",
        "force"       : 230,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIG"閃通臂"NOR,
        "action"      : "$N兩臂一合，使出"HIC"太極拳"NOR"中「$a」綿中蓄勁，雙手將$n的招式如數奉還",
        "force"       : 250,
        "damage"      : 30,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIY"龍抬頭"NOR,
        "action"      : "$N使出"HIC"太極拳"NOR"中的「$a」，身形一縮，人已鑽進$n懷中，肩頭撞向$n胸前膻中要穴，隨即昂手上揮，攻向$n咽喉要害",
        "force"       : 270,
        "damage"      : 40,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIG"白蛇吐信"NOR,
        "action"      : "$N一招"HIC"太極拳"NOR"中的「$a」，左掌推右掌讓，看似迂緩，實則輕靈似羽，勁力一吐，直往$n擊去",
        "force"       : 290,
        "damage"      : 40,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIM"摟膝拗步"NOR,
        "action"      : "眼看$n招勢儘是攻向己身下盤，$N急忙使出"HIC"太極拳"NOR"中一招「$a」右掌下揮，沉腰落胯，盡封$n攻勢，同時向其後心破綻之處一掌拍落",
        "force"       : 300,
        "damage"      : 30,
        "damage_type" : "瘀傷",
    ]),
    ([
        "action"      : "$N雙手下垂，手臂向外，手指為殊，兩足分開平行，接著兩臂慢慢提至胸前，左臂半環，掌與面對成陰掌，右掌翻過成陽掌，這是"HIC"太極拳"NOR"的起手式",
        "force"       : 320,
        "damage"      : 30,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIY"斜飛勢"NOR,
        "action"      : "$N轉身跨步斜斜躍出，身形圓轉不息，驀地使出"HIC"太極拳"NOR"中的一招「$a」拍向$n",
        "force"       : 340,
        "damage"      : 30,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIY"綿掌"NOR,
        "action"      : "$N使出"HIC"太極拳"NOR"中的絕學「$a」，只見掌影紛飛，若有若無的拍在$n身上，一掌將$n拍飛了三步",
        "force"       : 350,
        "damage"      : 40,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIB"野馬分鬃"NOR,
        "action"      : "$N合掌抱圓，借力用力，使出"HIC"太極拳"NOR"中一招「$a」以雲手之勢將$n纏繞其中，動彈不得只能任人擺佈，全無反抗的能力",
        "force"       : 360,
        "damage"      : 40,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : GRN"黏勁"NOR,
        "action"      : "$N緩緩的使出"HIC"太極拳"NOR"中的「$a」，手掌順勢遊走$n的身軀，隨即掌中吐勁",
        "force"       : 370,
        "damage"      : 30,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIR"穿掌下勢"NOR,
        "action"      : "$N單掌畫圓，右掌穿圓而出，正是"HIC"太極拳"NOR"中一招「$a」緩緩攻向$n下盤虛浮之處",
        "force"       : 380,
        "damage"      : 30,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : YEL"倒攆猴"NOR,
        "action"      : "$N倏地退了幾步，兩手化圓，扭身趨近$n雙掌含勁一吐，正是"HIC"太極拳"NOR"中的「$a」",
        "force"       : 390,
        "damage"      : 40,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIY"手揮琵琶"NOR,
        "action"      : "$N右掌往內微拂，右掌以捧物之姿向前揚掌上揮，正是"HIC"太極拳"NOR"中一招「$a」，弧形氣勁震得$n飛退數尺",
        "force"       : 400,
        "damage"      : 40,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIY"雲手"NOR,
        "action"      : "$N使出"HIC"太極拳"NOR"中的「$a」，左手高，右手低，一個圓圈已將$n套住，"HIR"武當心法"NOR"的剛勁使出，$n大叫一聲，轟的一聲，跌撞了開去",
        "force"       : 410,
        "damage"      : 50,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIC"白鶴亮翅"NOR,
        "action"      : "$N眼見來勢迅疾，不慌不忙使出"HIC"太極拳"NOR"中一招「$a」，不僅化去來招，在$n無可防備之間，分掌雙擊$n肩膊",
        "force"       : 420,
        "damage"      : 50,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIY"雙圈手"NOR,
        "action"      : "$N身腰左轉成寒雞式，雙掌舉過額角，左手虎口與右手虎口遙遙相對，使出"HIC"太極拳"NOR"的一招「$a」，挾著一股巨力衝向$n",
        "force"       : 430,
        "damage"      : 30,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIY"上步七星"NOR,
        "action"      : "$N掌畫太極，拳分兩儀，一個發勁，打出"HIC"太極拳"NOR"的一招「$a」，肘拳指掌以七星方位連續擊出",
        "force"       : 440,
        "damage"      : 30,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIR"四通八達"NOR,
        "action"      : "$N馬步微蹲，左掌與右掌交互擊出，掌影籠罩四面八方，使出的正是"HIC"太極拳"NOR"中的「$a」",
        "force"       : 450,
        "damage"      : 30,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIG"雙峰貫耳"NOR,
        "action"      : "$N弓步前跨，轉瞬間已逼近$n身前，打出"HIC"太極拳"NOR"的一招「$a」以弧形之勢擊向$n額際兩側太陽穴",
        "force"       : 460,
        "damage"      : 30,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIR"軸底看錘"NOR,
        "action"      : "$N施展出"HIC"太極拳"NOR"之精妙絕招，左掌陽，右掌陰，目光凝視左手手臂，雙掌慢慢合攏，竟是凝重如山，卻又輕靈似羽，使的便是「$a」",
        "force"       : 470,
        "damage"      : 60,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIM"迴身擺蓮"NOR,
        "action"      : "$N含胸迴身，閃過$n一波波攻勢，一招"HIC"太極拳"NOR"之「$a」使出，足尖已從避無可避的方位踢向$n",
        "force"       : 480,
        "damage"      : 60,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIY"如封似閉"NOR,
        "action"      : "$N施展出"HIC"太極拳"NOR"之精妙絕招，雙手一圈，如抱太極，一股雄渾無比的力道，組成一個富含陰陽變化的漩渦，使$n勁道如泥牛入海，全然不知去向，驀地一股更強的氣勁反襲朝$n急湧來，正是一招「$a」",
        "force"       : 490,
        "damage"      : 60,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIY"亂環訣"NOR,
        "action"      : "$N使出"HIC"太極拳"NOR"中的「$a」，兩手運勁成圈，有如大小圓圈在$n身邊飛舞，使出"HIB"六合勁"NOR"中的"HIY"螺旋"NOR"牢牢扣住$n的雙臂",
        "force"       : 500,
        "damage"      : 50,
        "damage_type" : "瘀傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIR"無極"HIY"混元"HIW"生"BLK"太極"NOR,
    HIW + BLK"太極"HIR"一動"HIB"分"HIW"兩儀"NOR,
    HIW"兩儀"HIB"相生"HIG"成"HIY"天地"NOR,
    HIY"天地"HIG"三才"BLK"定"HIB"四象"NOR,
    HIB"四象"HIY"五行"HIR"育"HIM"萬氣"NOR,
    HIM"萬氣"HIW"秩序"HIY"分"HIG"八卦"NOR,
    HIG"八卦"HIR"循環"BLK"述"HIW"陰陽"NOR,
    HIW"陰陽"BLK"混沌"HIY"成"BLK"太極"NOR,
    HIW + BLK"太極"HIY"圓滿"HIB"歸"HIR"無極"NOR,
    HIC"返璞歸真"HIY"道威"HIG"無"HIB"盡"NOR,
    HIG"乾"HIM"三連"NOR"‧"HIB"坤"BLK"六斷"NOR"‧"HIR"顛倒"HIY"乾坤"HIB"轉"HIW"陰陽"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N以退為進，在化解$n攻勢的同時向前一靠，雙掌突然向$n胸前一貼，按在$n胸口的雙掌緩緩畫出太極一圖，正是太極奧義『$a』，周身混元之氣從掌心排山倒海向$n襲去",
        "force"       : 600,
        "damage"      : 60,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N忽地雙掌驟分陰陽，陰陽相生之理在$N掌中應運而生，周身兩儀之氣受$N雙掌引動凝聚於掌，正是太極奧義『$a』，陰陽雙掌帶著澎湃掌勁一前一後向$n攻去",
        "force"       : 700,
        "damage"      : 60,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N收回拳勢緩閉雙眼，雙分的陰陽之氣一改左右之勢，在胸前畫一太極後，陽掌朝天陰掌向地，正是太極奧義『$a』，雙掌溝通天地之力，帶著浩然正氣緩緩推向$n",
        "force"       : 800,
        "damage"      : 60,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N緩緩引動周身陰陽之氣，動靜之勢孕含剛柔之理，攻守之間盡顯仁義之風，正是太極奧義『$a』，雙掌不急不徐的攻向$n太陽、太陰、少陽、少陰四處要害",
        "force"       : 900,
        "damage"      : 60,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N倏地回身連退數步，掌運太極分別向青龍、白虎、玄武、朱雀四方位虛擊一掌，應$N的掌勢五行相生之風徐徐流轉，正是太極奧義『$a』，孕含萬物相生之理的五行之風隨$N雙掌襲向$n",
        "force"       : 1000,
        "damage"      : 70,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N沈勁於腰運勁於腿，雙腳隨著無法言喻的相生之理，踏著先天八卦方位飛快移動，運勁越快越趨圓融，$n攻擊履次落空，倏地$N沉聲一喝，正是太極奧義『$a』，雙掌撲天蓋地隨著八卦方位同時襲向$n要害",
        "force"       : 1100,
        "damage"      : 70,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N默念“乾、兌、離、震、巽、坎、艮、坤”八字真言，雙腳不由自主踏向相應之八卦方位旋轉不定，雙掌引導周身沛然之氣旋轉圓融，正是太極奧義『$a』，忽地$N雙足一緩，掌分陰陽同時攻向$n",
        "force"       : 1200,
        "damage"      : 70,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N忽然深吸一口氣，陰陽兩儀掌勢畫圓一收竟是要歸回到太極之終式．定，$n見機不可失向$N攻來，卻見$N精氣神合而為一，緩緩向前推出一掌，正是太極奧義『$a』，周身浩然之氣凝於雙掌緩緩按向$n胸口",
        "force"       : 1350,
        "damage"      : 70,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N毫無徵兆的連退數步，圓融無盡的太極之勢在呼吸之間盡納於身，雙目微閉似乎所有時間空間皆已停止，眼中心中再不分敵我，正是太極奧義『$a』，靜動之間，已在$n身前，輕一撫掌，無極混沌之掌勁無聲按向$n心口",
        "force"       : 1500,
        "damage"      : 80,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N丹田中陰陽匯集，激烈的變化爆發開來，震盪轟鳴。雙掌往身側緩速揮動，揮過之處跟隨著閃動出數道氣勁，正是一招『$a』，綿密的掌勁蘊藏著穿膚刺骨的內勁轟往$n胸口",
        "force"       : 1500,
        "damage"      : 80,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N忽而雙手大開，一招『$a』，一手呈淡金色，一手漆黑如墨，雙手聚合，兩股至陰至陽之氣交匯。雙掌中漩渦陣陣，強大的氣息爆發，一陣恐怖波動擴散，轟向$n",
        "force"       : 1500,
        "damage"      : 80,
        "damage_type" : "瘀傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("taichi-fist");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("taichi-fist", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("wudonforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "wudonforce" || me->query_skill_mapped("unarmed") != "taichi-fist") {
        return 1;
    }

    if (random(850) + random(850) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("taichi-fist", 1);

        inspiration("\n"
                    "\t     "HIW + me->query("name") + HIW"雙眼微閉"NOR"，"HIW"週身"BLK"混沌之氣"HIR"圓轉"HIG"自然"NOR"，"HIW + BLK"陰"HIW"陽"HIM"兩儀之氣"HIW"遵循"HIY"天地法則\n\n"
                    "\t                "HIW"．"BLK"太極"HIR"生"HIW"兩儀．兩儀"HIR"生"HIB"四象"HIW"．"HIB"四象"HIR"生"HIG"八卦．\n\n"
                    "\t               "HIM"竟是領悟了"HIW"《太極奧義》．《" + my_attack_name[action_level] + HIW"》\n\n"NOR);
    }
}

int valid_learn(object me) {
    if (me->query_skill("taichi-fist", 1) < 1) {
        if (me->query("family/family_name") != "武當派") {
            return notify_fail("這項技能只能找張三豐學。\n");
        }

        if (me->query("family/generation") != 2) {
            return notify_fail("只有張三豐的嫡傳弟子才可以學。\n");
        }
    }

    return ::valid_learn(me);
}

mapping query_action(object me) {
    int addition = me->query_action_level("taichi-fist");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
