inherit "/std/skill/blade";

void create() {
    name = "金烏刀法";
}

mapping *action = ({
    ([
        "name"        : HIG"開門揖盜"NOR,
        "action"      : "$N放下手中$w誘使$n全力攻擊，趁著$n疏於防範的契機，握起$w由下往上拉起，往$n縱橫交錯連砍數刀",
        "damage"      : 45,
        "damage_type" : "斬傷",
    ]),
    ([
        "name"        : HIG"梅雪逢夏"NOR,
        "action"      : "$N一聲呼嘯不管敵人的攻勢，手中$w上三刀、下三刀、左三刀、右三刀，眨眼間向$n劈出三四一十二刀",
        "damage"      : 50,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIG"千鈞壓駝"NOR,
        "action"      : "$N利用$w刀背反光，使$n一時之間眼睛無法適應，衝至$n背後奮力跳起，舉起$w朝$n頭上往下猛劈",
        "damage"      : 40,
        "damage_type" : "斬傷",
    ]),
    ([
        "name"        : HIG"大海沉沙"NOR,
        "action"      : "$N腳踢地面，揚起一陣塵土，隨即不見人影。突然，$n耳後傳來刀勢聲響，嚇得$n魂不附體，轉身後躍",
        "damage"      : 45,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIG"赤日炎炎"NOR,
        "action"      : "$N不斷的運用刀背讓光一直照射$n臉上，眼見$n因淚造成眼睛無法明視，$N急忙穩住腳步握住$w往前猛砍數十刀",
        "damage"      : 35,
        "damage_type" : "斬傷",
    ]),
    ([
        "name"        : HIG"鮑魚之肆"NOR,
        "action"      : "$N急忙把$w藏於地上，並且空手而上，誘使$n踏到刀口之上，$n心知不妙，硬生生接下$N數掌",
        "damage"      : 35,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIG"赤日金鼓"NOR,
        "action"      : "$N反握$w猛衝到$n前面不到一步距離，舉起刀背便往$n臉、屁股、手、腳各部位猛力拍打",
        "damage"      : 50,
        "damage_type" : "瘀傷",
    ]),
});

string *my_attack_name = ({
    HIY"金刀"HIR"破勢"HIC"平地起"NOR,
    CYN"烏雲"RED"蔽日"NOR"光依現",
    HIC"凌雲"HIG"九霄"HIY"不惹塵"NOR,
    HIW"雪融"HIG"初春"HIB"生機現"NOR,
    HIR"霸"HIM"唱"HIY"天下"HIW"不求人"NOR,
    HIM"氣吞"HIR"虹霓"HIB"踏"HIW"五湖"NOR,
    HIW"傲雪"HIC"凌霜"HIR"無所"HIB"懼"NOR,
    YEL"天地"RED"盡"BLU"收"HIB"囊中物"NOR,
    HIW + BLK"睨視"HIY"黃泉"HIR"不歸路"NOR,
    CYN"眾人"MAG"生死"GRN"如塵"RED"煙"NOR,
    RED"生"HIR"去"NOR + GRN"死"HIY"來"BLINK + HIC"都是幻"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N將身體往前微傾，刀執於背，內勁暗發，眼神專注看著$n，趁其不備發力直衝，一招『$a』朝$n的胸膛奮力一砍",
        "damage"      : 80,
        "damage_type" : "斬傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N惦起腳尖，身軀向後飛縱拉開距離，卻又在須臾之間飛身向前，一招『$a』勢如破竹的砍向$n的天靈蓋",
        "damage"      : 100,
        "damage_type" : "斬傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N將刀隨意的橫放在胸前，看似輕鬆，轉動手腕運用巧勁發力，一招『$a』直取$n心窩",
        "damage"      : 130,
        "damage_type" : "斬傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N將刀從右手交至左手，再從左手交至右手，不斷來回交錯著，讓人摸不清攻勢會從何而來，一招『$a』砍向$n的雙肩",
        "damage"      : 170,
        "damage_type" : "斬傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N將刀置於腳邊，後退三步再加速向前以腳尖踢擊刀柄，一招『$a』刀鋒筆直劃過$n的腳裸",
        "damage"      : 200,
        "damage_type" : "斬傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N將刀收於刀銷，以九宮步逼進$n，身形移至$n之後趁其不備迅速拔刀而出，一招『$a』砍向$n的膕窩",
        "damage"      : 230,
        "damage_type" : "斬傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N將刀在胸前不斷的畫圓並加快速度，令人看不清、摸不透，等$n被晃暈之際，一招『$a』以虛虛實實的攻勢劈向$n的面門",
        "damage"      : 260,
        "damage_type" : "斬傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N將所有的內力運於刀，使刀產生一般人難以忍受的高熱，以掌心擊向刀柄，一招『$a』挾著高熱攻向$n的喉嚨",
        "damage"      : 280,
        "damage_type" : "斬傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N轉身背向$n，讓$n以為有機可趁揮刀砍向$N時，$N雙腿一劈坐在地上，整個上身向後彎，一招『$a』向後畫圓砍向$n的雙膝",
        "damage"      : 300,
        "damage_type" : "斬傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N運行全身內力，氣勁存於手臂與手腕，眼神銳厲，步伐沉穩，舉刀一招『$a』朝$n連砍十八刀",
        "damage"      : 300,
        "damage_type" : "斬傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N繞著$n不斷繞圈，時而近、時而遠，當$n視線追著$N的時候，$N突然反方向一跑，手上的$w一招『$a』直取$n的天樞",
        "damage"      : 300,
        "damage_type" : "斬傷",
    ]),
});

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("jinwu-blade");

    if (action_level >= sizeof(my_action)) {
        return 9;
    }

    if (me->query_skill("jinwu-blade", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("iceforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "iceforce" || me->query_skill_mapped("blade") != "jinwu-blade") {
        return 1;
    }

    if (random(850) + random(850) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("jinwu-blade", 1);

        inspiration(RED"\n\t        ˍ＿"
                    HIR"\n\t      ◢"NOR+BRED" ╱"NOR+HIR"▎"
                    HIR"\n\t     "BRED"▎ "NOR+BRED"∕"NOR+HIR"◤       "HIY"金光乍現"NOR"，"HIC"天上傳來"HIR"尖"HIW"銳"HIM"鳴叫聲"
                    HIR"\n\t    "BRED"▎ "NOR+BRED"∕"NOR+HIR"◤"
                    HIR"\n\t   "BRED"▏ "NOR+BRED"∕"NOR+HIR"◤      "HIR"一根"NOR+RED"火紅赤羽"NOR"緩緩自"HIC"天邊"NOR"飄落"
                    HIR"\n\t  "BRED"▎ "NOR+BRED"∕"NOR+HIR"◤"
                    HIR"\n\t  "BRED"▏"NOR+BRED"∕"NOR+HIR"◤      "NOR + me->query("name") + "停下腳步，"HIW"一招一式"HIG"緩緩在眼前清晰"
                    HIR"\n\t "BRED"▏"NOR+BRED"∕"NOR+HIR"◤"
                    HIR"\n\t  ◤        "NOR"有如"HIM"醍醐"HIB"灌頂"HIG"領悟"NOR"了一招『" + my_attack_name[action_level] + "』"
                    RED"\n\t╱\n\n"NOR);
    }
}

int valid_learn(object me) {
    if (me->query_skill("jinwu-blade", 1) < 1) {
        if (me->query("class") != "jinwu") {
            return notify_fail("這項技能只有金烏派掌門才能傳授。\n");
        }

        if (me->query("family/generation") != 2) {
            return notify_fail("這項技能只有金烏派掌門的嫡傳弟子才能學習。\n");
        }
    }

    return ::valid_learn(me);
}

mapping query_action(object me) {
    int addition = me->query_action_level("jinwu-blade");

    if (addition) {
        if (random(100) < addition * 50 / sizeof(my_action)) {
            return my_action[random(addition)];
        }
    }

    return action[random(sizeof(action))];
}
