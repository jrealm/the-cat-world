inherit "/std/skill/throwing";

void create() {
    name = "唐門大散手";
}

function post_action = (: call_other, WEAPON_D, "throw_weapon" :);

mapping *action = ({
    ([
        "name"        : HIC"笑問客從何處來"NOR,
        "action"      : "$N嘴角含笑，讓$n感覺不到一絲一毫的殺意，嘴唇微張。慕然！$w由$N袖中急馳而出，直取$n雙目！正是殺招「$a」",
        "damage"      : 35,
        "force"       : 200,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIC"使我三軍淚如雨"NOR,
        "action"      : "$N一招「$a」，只見數道金華劃破空間，在$n面前交叉互碰，$w碎裂成點點金華。\n"
                        "$n怒吼一聲，淚如雨下，兩眼已遭細粉侵入，一時之間雙目難睜。一見$n受創，$N又吶喊一聲：『"HBRED + HIY"著"NOR"』！金光點點再朝$n$l擊去",
        "damage"      : 37,
        "force"       : 240,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIC"青山朝別暮還見"NOR,
        "action"      : "$N緩緩道了聲：「$a」，身行展開，瞬間逃的無影無蹤。\n"
                        "在$n因正因失去敵蹤而錯愕時，$w無聲息的飛至，擊向百會大穴！$N有如天外飛仙身影也同時地出現在空中，掀起重重掌浪壓向$n$l",
        "damage"      : 40,
        "force"       : 280,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIC"有時空望孤雲高"NOR,
        "action"      : "$N一聲輕嘆，抬頭望向天空，兩眼間淨是落寞惆悵一陣喊殺聲起，$n狀似瘋虎般的殺到！\n"
                        "$N眉頭微皺，搖頭嘆息～數點寒光自髮鬢閃出！$w直奔$n$l，這正是殺招「$a」",
        "damage"      : 33,
        "force"       : 320,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIC"津吏停舟渡不得"NOR,
        "action"      : "$N連發數針，$n身軀數晃，勘勘得以避過。$n欲穩住反攻時，$w閃著光又已飛近$l，這可真是「$a」啊",
        "damage"      : 27,
        "force"       : 360,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIC"一聲已動物皆靜"NOR,
        "action"      : "$N喝道：『看$w』！卻不見$N有任何動作，$n在錯愕中！$N輕視的眼神盯得$n心理直發毛，$n慌張的向四周望去！\n"
                        "只左右各三叢閃著綠芒呈品字的$w殺到，以射至你雙頰之前！這正是一招「$a」",
        "damage"      : 40,
        "force"       : 380,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIC"上林繁花照眼新"NOR,
        "action"      : "$N一招「$a」，立刻金光漫空，彷彿身在開滿花朵的樹下。\n"
                        "$n雙目為光華所擾，連忙將雙目、胸口護的密不透風。但一陣細微的風聲從側面傳來，卻見$N將$w射向$n喉頭",
        "damage"      : 50,
        "force"       : 400,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIC"抽刀斷水水更流"NOR,
        "action"      : "$N發出一道不明顯的光華，$n冷哼道：『惑我耳目，想都別想』！勁力到處，$w斷成兩半。"
                        "剎時，只見斷了的$w又飛出數叢比『"HIY + HBRED"牛毛"NOR"』還細的暗器！將$n籠罩其中，果然「$a」",
        "damage"      : 36,
        "force"       : 400,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : HIC"風頭如刀面如割"NOR,
        "action"      : "$n才做喘息，$w無聲無息射到胸前，$n正凝神應對，一股強大勁氣撲向臉！只見$N已繞到側面，「$a」，撮掌成刀！挾著無限潛力劈向$n",
        "damage"      : 37,
        "force"       : 400,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIY"久旱適逢"HIC"及時雨"NOR,
    HIB"長夜森森"HIY"朝露華"NOR,
    HIM"逆流群鯉"HIY"躍龍門"NOR,
    HIC"長毫一揮"HIG"氣萬千"NOR,
    HIY"千金散盡"HIM"還復來"NOR,
    HIG"陶隱折腰"HIC"五斗米"NOR,
    MAG"常使英雄"HIC"淚滿襟"NOR,
    HIW"寒山吹笛"HIM"喚春歸"NOR,
    HIM"瀟湘何事"HIW"等閑回"NOR,
    HIY"電光"HIR"石火"BLK"神不知"NOR,
    HIR"摧枯拉朽"HIG"一唐手"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N倒立一翻，兩手揮灑大開大闔，只見數枚$w交叉而射，如網般罩向$n上下兩路，殺氣颯然，盡得『$a』，陰陽倒置的奧妙",
        "damage"      : 60,
        "force"       : 450,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N立馬壓身，使出『$a』快手連揮之法，只見$w從奇數到偶，時單時複地分次射向$n，逼得$n抓不準攻勢，只得連連後退",
        "damage"      : 70,
        "force"       : 500,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N一灑$w落地，趁$n臉露詫異之時使出『$a』，只見$N展腿連掃連揮，$w猶如破空疾矢般接連射向$n$l",
        "damage"      : 80,
        "force"       : 600,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N著地滾近，以拳腳手段逼住$n，緊接頭髮一揮，內藏無數$w激射而出，逼得$n無處可退，這招『$a』可謂神妙毫顛",
        "damage"      : 90,
        "force"       : 700,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N以$w海戰術主攻，手上暗器預射封住$n的九處後路，只見$N妙手一著使出『$a』，一枚$w在半空中轉了個彎，射向毫無防備的$n$l",
        "damage"      : 100,
        "force"       : 850,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N負手而立，仿效『$a』依禮倨恭，只見數篷$w如疾雨般從背後破衣飛出，出奇不意地射向$n$l",
        "damage"      : 110,
        "force"       : 1000,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N藉壁勢急踩而上，『$a』隨即發動，手中$w無一虛發，成乾坤畫一之弧射向$n任脈諸穴",
        "damage"      : 120,
        "force"       : 1150,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N雙足釘立，下盤穩然不動，上身左晃右擺，再度猱身而上，抓起一枚$w，一招『$a』，劈面勁射而出",
        "damage"      : 140,
        "force"       : 1300,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N低哼一聲，左手一揚，再度猱身而上，一招『$a』，$w從三個不同方位射出，$n只見一片寒光閃爍，$w如暴雨驟落",
        "damage"      : 140,
        "force"       : 1300,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N負手而立，輕闔雙眼，以耳代眼，聆聽$n的一舉一動，在$n以為有機可乘之時，一招『$a』，滿空飛舞的$w打入$n的胸口",
        "damage"      : 140,
        "force"       : 1300,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N雙手扣滿$w，輪番以刁鑽角度射出，$w行至中途被潛勁震碎，數倍的$w碎片登時化成滿天花雨罩向$n，正是唐門散手極招－『$a』",
        "damage"      : 140,
        "force"       : 1300,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("wasp_thron");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("wasp_thron", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("six-of-force", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "six-of-force" || me->query_skill_mapped("throwing") != "wasp_thron") {
        return 1;
    }

    if (random(1400) + random(1400) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("wasp_thron", 1);

        inspiration("\n"
                    HIY"\t\t         ＊＊＊號外！！號外！！ ＊＊＊\n"
                    "          "HIR"一日郊外石壁上插滿了無數暗器，似乎有人正在此鍛鍊不世奇招\n"
                    "            "NOR"只見壁旁用暗器排成了一行小字："HIC + me->query("name") + "\n"
                    "\t    "NOR"得悟唐門極招 －「"BLINK + my_attack_name[action_level] + "」於此。\n"
                    "          "HIY"＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊\n\n"NOR);
    }
}

mapping query_action(object me) {
    int addition = me->query_action_level("wasp_thron");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
