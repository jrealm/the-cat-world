inherit "/std/skill/throwing";

void create() {
    name = "生死符法";
}

string *limbs = ({
    HIC"天池"NOR"穴", HIC"天樞"NOR"穴", HIC"天泉"NOR"穴", HIW"天柱"NOR"穴", HIW"天兔"NOR"穴",
    HIW"太乙"NOR"穴", HIY"神封"NOR"穴", HIY"神藏"NOR"穴", HIY"神道"NOR"穴", HIR"陽豁"NOR"穴",
    HIR"陽交"NOR"穴", HIR"梁門"NOR"穴", HIG"曲池"NOR"穴", HIG"大陵"NOR"穴", HIG"懸樞"NOR"穴",
    HIM"氣海"NOR"穴", HIM"委中"NOR"穴", HIM"內庭"NOR"穴", YEL"伏兔"NOR"穴", RED"缺盆"NOR"穴",
    MAG"志室"NOR"穴", BLU"陰陵泉"NOR"穴", GRN"絲空竹"NOR"穴",
});

int size_of_limbs = sizeof(limbs);

function post_action = (: call_other, WEAPON_D, "throw_weapon" :);

mapping *action = ({
    ([
        "name"        : HIB"彈‧陰式"NOR,
        "action"      : "$N將$w輕輕彈出，看似無力的$w卻有如靈蛇，在空中拐了幾次彎後由刁鑽的角度襲向$n$l",
        "damage"      : 35,
        "force"       : 250,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
    ([
        "name"        : HIR"揮‧陽式"NOR,
        "action"      : "$N將袖袍用力一甩，一股剛猛氣勁挾帶著數枚$w激射向$n$l，攻擊未至便讓$n備感壓力",
        "damage"      : 40,
        "force"       : 280,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
    ([
        "name"        : HIR"彈‧陽式"NOR,
        "action"      : "$N右手猛然發力一彈，「叮」地聲響，$w如流星般在空中留下一道殘影，實體早已逼近$n$l",
        "damage"      : 37,
        "force"       : 300,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
    ([
        "name"        : HIB"揮‧陰式"NOR,
        "action"      : "$N輕揮手臂，一連三枚$w射向$n，但三枚暗器皆是寒氣化成的偽物，真正$w早已在$n$l吋許前，實在陰險",
        "damage"      : 33,
        "force"       : 320,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
    ([
        "name"        : HIR"撫‧陽式"NOR,
        "action"      : "$N忽然棲至$n身前，$w在$n手臂上劃過，一陣刺痛，$n登時感覺體內有股灼熱之氣正橫衝直撞地朝$l而去",
        "damage"      : 44,
        "force"       : 360,
        "post_action" : post_action,
        "damage_type" : "瘀傷",
        "limbs"       : limbs,
    ]),
    ([
        "name"        : HIB"撫‧陰式"NOR,
        "action"      : "$N身如鬼魅，不停遊走在$n四周，手掌偶爾由$n$l撫過，令$n一陣惡寒，似受影響而逐漸遲緩下來",
        "damage"      : 30,
        "force"       : 400,
        "post_action" : post_action,
        "damage_type" : "瘀傷",
        "limbs"       : limbs,
    ]),
    ([
        "name"        : HIR"刺‧陽式"NOR,
        "action"      : "$N手持$w，劈頭就是一輪猛刺，攻的$n措手不及，正當反應不及之時，$w脫手而出，直射$n$l",
        "damage"      : 50,
        "force"       : 400,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
    ([
        "name"        : HIB"刺‧陰式"NOR,
        "action"      : "$N輕輕地捻起了一枚$w，趁$N攻擊時順勢回手，將$w刺入$n$l中，使$n頓時感覺真氣受阻，氣血難通",
        "damage"      : 40,
        "force"       : 450,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIG"一枝濃艷"HIM"露凝香"NOR,
    HIB"雲雨巫山"HIY"枉斷腸"NOR,
    HIM"多情種子"NOR + RED"枉留痕"NOR,
    YEL"一笑到頭"HIW"萬事亡"NOR,
    HIY"富貴在勤"HIR"不在奸"NOR,
    HIW + BLK"生死由我"HIW"不由天"NOR,
    HIM"尋芳飄渺"HIR"紅塵渡"NOR,
    HIG"八荒六合"HIC"天地間"NOR,
    HIY"看破"HIR"紅塵"HIW"任"HIC"神遊"NOR,
    HIC"無念"HIW"無相"HIG"樂悠活"NOR,
    HIM"自由"HIY"自在"HIW"逍遙仙"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N指間捏起$w，隨手揮出，劃起了一道長虹『$a』，獨此一發射出，卻接連貫通$n"HIY"神封"NOR"、"HIY"神藏"NOR"、"HIY"神道"NOR"三條神通大穴，凌厲無比",
        "damage"      : 100,
        "force"       : 400,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N手腕不停翻湧，數百枚$w由左右兩側呼嘯而去『$a』，狂風暴雨般連續不斷，使$n只能轉攻為守，奮力抵抗",
        "damage"      : 120,
        "force"       : 500,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "忽然一聲巨響，$N手中$w有如炸彈開花，朝四面八方奪命而出『$a』，看似雜亂無章，其實皆在$N精準的朝$n"HIC"天池"NOR"、"HIC"天樞"NOR"、"HIC"天泉"NOR"、"HIW"天柱"NOR"、"HIW"天兔"NOR"五穴射去",
        "damage"      : 150,
        "force"       : 600,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N大笑三聲『$a』，左腳用力朝地上一踏，右手振臂高揮，那$w在空氣中發出一聲音爆，宛如雷霆般轟然砸向$n$l",
        "damage"      : 160,
        "force"       : 700,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N將真氣運轉至極限，登時光芒大放，令$n眼前一片花白『$a』趁勢而出，連擲數十發$w，皆朝著$n視線死角之處射去",
        "damage"      : 180,
        "force"       : 800,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N以極快之身法忽地出現在$n眼前『$a』，左手一巴掌打的$n暈頭轉向，右手順勢而起，夾著$w便朝"BLU"陰陵泉"NOR"、"GRN"絲空竹"NOR"兩穴刺去",
        "damage"      : 220,
        "force"       : 900,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N憑藉著身法縱橫戰場之上，十息之後猛地停止，兩手朝地面一拍『$a』，無數暗器如同機關一般從地表下激射而起，登時一片狼藉",
        "damage"      : 240,
        "force"       : 1000,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N衣袍鼓盪，渾身散發出一種唯我獨尊之氣勢『$a』，周圍的暗器自動聚於身前，隨著$N一拳揮出，暗器伴隨著炸響聲後發先至，狂飆向$n周身要穴",
        "damage"      : 300,
        "force"       : 1100,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N大喝一聲飛身而上，在$n尚未反應之際已來到$n正上方，一招『$a』$w夾在十指指間，手腕一甩$w往$n天靈穴直奔",
        "damage"      : 330,
        "force"       : 1200,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N臉上掛著一絲笑容『$a』，信手捻來$w便朝$n彈出，明明看似輕巧，卻讓$n渾身寒毛一炸，彷彿受到了什麼致命危機，立即放棄攻擊全力抵擋",
        "damage"      : 330,
        "force"       : 1200,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N一枚接著一枚$w連綿不絕射出，時而相互碰撞修正角度，時而摧命鎖魂防不勝防，一切隨性而起，正是秘招『$a』，將$n圍困其中，無路可逃，彷彿陷入了五里霧中，處處危機",
        "damage"      : 400,
        "force"       : 1300,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level;

    action_level = me->query_action_level("life-seal");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("life-seal", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("northmedforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "northmedforce" || me->query_skill_mapped("throwing") != "life-seal") {
        return 1;
    }

    if (random(1400) + random(1400) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("life-seal", 1);

        inspiration("\n"
    BRED + HIW + BLK"／ |"NOR + RED"▋　　　　　"HIW + BLK"◣　　◢　　　　　　　　"HIB"遠方一隻猛禽劃過天際－－"NOR"\n"
    BRED + HIW + BLK"　 |"NOR + RED"▍　　　　"BLINK + HIW + BLK"／"NOR + HIW + BLK"◢◣◢◣"BLINK + HIW + BLK"＼"NOR"\n"
    BRED + HIW + BLK"　 |"NOR" "BLINK + HIW + BLK"￣█▆▄  "NOR + HIW + BLK"◤"HIR"@"HIW + BLK"◥◤"NOR + HIR"@"HIW + BLK"◥　"BLINK + HIW + BLK"▄▆█￣      　　"NOR + HIY"令 "HIW + me->query("name") + HIY" 靈光乍現"NOR"\n"
    BRED + HIW + BLK" |"NOR"　 "BLINK + HIW + BLK"￣◥▇▇"NOR + HIW + BLK"◥█"HIY"▼"HIW + BLK"▇◤"NOR + BLINK + HIW + BLK"▇▇◤￣"NOR"\n"
    BRED + HIW + BLK"　"NOR + RED"▍　 "BLINK + HIW + BLK"￣◥▇"NOR + HIW + BLK"◢"NOR + BWHT + HIW + BLK"▲▲▲"NOR + HIW + BLK"◣"NOR + BLINK + HIW + BLK"▇◤￣              　　　"NOR + HIB"原來生死便是如此這般－－"NOR"\n"
    BRED + HIW + BLK"∥ |"NOR + RED"▋　　　　 "HIW + BLK"█"NOR + BWHT"　　　"NOR + HIW + BLK"█"NOR"\n"
    BRED + HIW + BLK"　＠"NOR + RED"▇▇▄╮　 "HIW + BLK"◥"NOR + BWHT"＼　／"NOR + HIW + BLK"◤　　　　　　　　　"HIM"將秘招"HIW + BLK"【"NOR + my_attack_name[action_level] + HIW + BLK"】"HIM"悟透"NOR"\n"
    BRED + HIW + BLK"]│ "NOR + RED"▇￣￣ ▇▇▇"HIY"↗"NOR + RED"▇"HIY"↖"NOR + RED"▇▄╮ "NOR + GRN"ㄓ"NOR"\n"
    BRED + HIW + BLK" ∥ "NOR + RED"▊　　 "RED"￣"NOR + GRN"市"NOR + RED"￣￣￣￣￣￣ ▇▇▇▄"NOR"　　　　　　 　　　　"HIM"融會貫通於生死符法之中\n"
    BRED + HIW + BLK"！　"NOR + RED"▋　　　　　　　　　　　"RED"￣￣￣￣￣"NOR"\n\n");
    }
}

int valid_learn(object me) {
    if (me->query_skill("life-seal", 1) < 1) {
        if (me->query("class") != "eagle") {
            return notify_fail("這項技能只能由靈鷲宮習得。\n");
        }

        if (me->query("family/generation") != 2) {
            return notify_fail("只有靈鷲宮宮主的嫡傳弟子才可以學。\n");
        }
    }

    return ::valid_learn(me);
}

mapping query_action(object me) {
    int addition = me->query_action_level("life-seal");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
