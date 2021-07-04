inherit "/std/skill/staff";

void create() {
    name = "白雲杖法";
}

mapping *action = ({
    ([
        "name"        : HIW"天光"NOR"乍現",
        "action"      : "$N使一招「$a」，手中$w掃向$n下盤",
        "damage"      : 50,
        "damage_type" : "挫傷",
    ]),
    ([
        "name"        : HIC"雨後"HIW"初晴"NOR,
        "action"      : "$N揮起$w，一招「$a」攻向$n$l",
        "damage"      : 50,
        "damage_type" : "挫傷",
    ]),
    ([
        "name"        : "浮"HIW"雲"NOR"寫意",
        "action"      : "$N橫過手中$w，使出「$a」擊向$n$l",
        "damage"      : 50,
        "damage_type" : "挫傷",
    ]),
    ([
        "name"        : "游龍"HIW"穿雲"NOR,
        "action"      : "$N使出一招「$a」，$w一挺撞向$n$l",
        "damage"      : 50,
        "damage_type" : "挫傷",
    ]),
    ([
        "name"        : HIW"雲遊四"HIB"海"NOR,
        "action"      : "$N使出一招「$a」，手中$w一撥，撥的$n東倒西歪",
        "damage"      : 50,
        "damage_type" : "挫傷",
    ]),
    ([
        "name"        : HIG"愁"HIW"雲慘霧"NOR,
        "action"      : "$N舉起$w使了一記「$a」，左連三刺，右連四點，一共七道棍花紛紛向$n襲來",
        "damage"      : 50,
        "damage_type" : "挫傷",
    ]),
    ([
        "name"        : HIW"白雲"HIM"千載"NOR,
        "action"      : "$N單手抓$w甩了一招「$a」，一時間滿天棍花，棍頭隨而回擊$n",
        "damage"      : 50,
        "damage_type" : "挫傷",
    ]),
    ([
        "name"        : HIW"浮雲蔽"HIY"日"NOR,
        "action"      : "$w頭在$N手上轉了一圈，發了一記「$a」，回戳$n$l",
        "damage"      : 50,
        "damage_type" : "挫傷",
    ]),
    ([
        "name"        : HIW"白"NOR"髮"HIW"空"NOR"悲",
        "action"      : "$N發了一記「$a」，往$n$l身上連戳四記",
        "damage"      : 50,
        "damage_type" : "挫傷",
    ]),
    ([
        "name"        : HIW"白"HIY"日"NOR"山盡",
        "action"      : "$N長吟：「$a」，舉$w就往$n的武器上一挑，順勢往下一捶",
        "damage"      : 50,
        "damage_type" : "挫傷",
    ]),
    ([
        "name"        : HIY"春"HIW"暉"HIR"花"HIY"暖"NOR,
        "action"      : "雙手高舉$w的$N倒跳幾丈，突而躍向$n一記「$a」重棍一敲",
        "damage"      : 50,
        "damage_type" : "挫傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIW"行雲"HIC"流水"NOR,
    HIW"披雲"HIY"戴月"NOR,
    HIW"翻雲"HIB"覆雨"NOR,
    HIG"撕天"HIW"排雲"NOR,
    HIG"風隨"HIW"白"HIC"雲"HIM"飛"NOR,
    HIM"夢中"HIC"雲萊境"NOR,
    HIC"坐看"HIW"雲起時"NOR,
    HIY"黃河"HIG"遠上"HIW"白雲間"NOR,
    HIC"海波"HIB"飛處"HIW"彩雲飛"NOR,
    HIW"雲想"HIM"衣裳"HIY"花想容"NOR,
    HIW"白"HIC"雲"HIC"深深深"HIW"幾"HIM"許"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N狂嘯一聲：『著』，一招『$a』長棍離手！$w應聲而飛，筆直朝$n射去",
        "damage"      : 80,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "勘破$n的意圖後，$N隨即將$w舞得渾圓，『$a』連綿不絕的棍影襲向$n",
        "damage"      : 110,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N手握$w，一式『$a』側身連人帶棒，向$n的下盤撥去去，腳步虛浮的$n來不及反應，被連刺廿十多下",
        "damage"      : 140,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N將手中$w以迴旋之勢拋出，隨即奮力縱身而上，$n正感詫異迷矇之繼，$N早以一棒落下，正是由白雲杖法悟出的一招『$a』劈向$n",
        "damage"      : 170,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N馬步一紮，蓄勢發勁，四周的氣息在一瞬停止！突然使出白雲杖法中的『$a』攻向$n，一棍往$n$l橫掃而去",
        "damage"      : 200,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N躍起手中$w上而下擊，向$n上三路擊出六棍！招中俠招、虛實交雜！$n如置夢境，因而露出破綻，$N一棍刺向$n$l，正是白雲杖法精髓『$a』",
        "damage"      : 240,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N端坐於地手持$w立面前，$n見狀，立時加勁急攻！只見$N往地上一滾，閃到$n身後，一招『$a』棍夾氣勁，掃向$n",
        "damage"      : 270,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N使出『$a』朝著$n打去，內勁灌入$w，頓時棍端光芒四射，金光燿燿，暴出數百道的棍影擊向$n",
        "damage"      : 300,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "只見$n一記猛招揮來，$N瞬時抽身後退，隨之雙手持棍$w，$N身形突如龍捲拔地而起，一記『$a』棍橫一揮，把$n打飛了數十丈",
        "damage"      : 330,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$n只見$w飛旋而出，$n卻已中招！原來剛才$N出手之快，以捻絲手法打出『$a』！早用$w在$n戳了三個洞",
        "damage"      : 360,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N站穩身形，氣運頂關！氣柱由$N頭上升起，一時間光芒萬丈，瑞氣千條！手中$w舞動之疾，有如天雷鳴動！只見$n口吐鮮血，卻還不明發生何事，好一招精妙絕倫的『$a』",
        "damage"      : 400,
        "damage_type" : "刺傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("cloudstaff");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("cloudstaff", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("lotusforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "lotusforce" || me->query_skill_mapped("staff") != "cloudstaff") {
        return 1;
    }

    if (random(2000) + random(2000) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("cloudstaff", 1);

        inspiration("\n"HIW"\t\t\t～～～～天上突然大放光明～～～～～"
                    "\n\t"HIC"　　　　看來是有人揮出了白雲杖法密招『" + my_attack_name[action_level] + HIC"』扯動四周氣團！！"
                    "\n\t"HIW"　　　　　　只見" + me->query("name") + HIW" 縱聲狂笑～哈哈哈，我領悟了！\n\n"NOR);
    }
}

mapping query_action(object me) {
    int addition = me->query_action_level("cloudstaff");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
