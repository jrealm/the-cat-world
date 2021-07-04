inherit "/std/skill/staff";

void create() {
    name = "八極棍";
}

mapping *action = ({
    ([
        "name"        : HIC"攔"NOR"之"HIY"提膝抱槍"NOR,
        "action"      : "$N手中$w由內至外，一式「$a」對準$n的$l猛烈一槌",
        "damage"      : 80,
        "damage_type" : "傷害。\n$n亦要以勁卸勁，結果『碰！』的一聲，已被$w硬生生打趴在地",
    ]),
    ([
        "name"        : HIR"拿"HIW"之"HIB"斜上扎槍"NOR,
        "action"      : "$N一招「$a」，身形陡然滑出數尺，手中$w由外至內往$n腹部捲刺而去",
        "damage"      : 80,
        "damage_type" : "傷害。\n$n將內力壓制丹田，只聽$n一聲長嚎活生生被拋向空中數丈",
    ]),
    ([
        "name"        : HIG"扎"HIW"之"HIM"白蛇吐信"NOR,
        "action"      : "$N身影虛晃數下，身形一轉手中$w一招「$a」，$w夾雜一鼓強勁的氣，朝$n的胸前猛烈突刺",
        "damage"      : 80,
        "damage_type" : "傷害。\n一聲慘嚎，$n被刺飛數尺",
    ]),
    ([
        "name"        : HIC"崩"HIW"之"HIC"猛虎衝天"NOR,
        "action"      : "「$a」，$N一聲大喝，短握$w，將全身勁道集於棍尖，迅速貼近$n身旁，朝$n腹中猛烈撞擊",
        "damage"      : 80,
        "damage_type" : "傷害。\n$n被震的當場趴倒在地",
    ]),
    ([
        "name"        : HIR"破"HIW"之"HIC"通天炮"NOR,
        "action"      : "$N緊握$w，身子左右一晃頓時幻化數條人影，環繞在$n四周，並同時打出「$a」",
        "damage"      : 80,
        "damage_type" : "傷害。\n剎那間，$n全身多數要害受傷",
    ]),
    ([
        "name"        : HIY"挑"HIC"之"HIM"漁夫搖槳"NOR,
        "action"      : "$N雙手一前一後緊握著$w，一招「$a」，雙手持$w由下往上，往$n的陰部打去",
        "damage"      : 80,
        "damage_type" : "傷害。\n$n立即捂住要害倒趴在地",
    ]),
    ([
        "name"        : "實"HIC"之"HIR"棍笑江湖"NOR,
        "action"      : "$N左足一蹬，身子一旋，一招「$a」人棍合一，如魚躍龍門般朝$n以尖錐之勢刺去",
        "damage"      : 80,
        "damage_type" : "傷害。\n$n立即聚氣硬擋但仍被打個半死",
    ]),
    ([
        "name"        : HIR"定"HIC"之"NOR"棍定中原",
        "action"      : "$N將$w拋向空中，隨即跟著躍上空中，握住$w，一招「$a」以開天僻地之勢朝$n猛烈擊去",
        "damage"      : 80,
        "damage_type" : "傷害。\n$n匆忙想格擋，然而天不從人願，一聲骨碎之聲響遍天際",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIR"曲"NOR"之"HIY"連舞大旗"NOR,
    HIR"闖"NOR"之"HIB"林沖夜奔"NOR,
    HIR"劈"NOR"之"HIW"破釜沉舟"NOR,
    HIR"伏"NOR"之"YEL"霸王甩鞭"NOR,
    HIR"壓"NOR"之"HIG"殃雨天降"NOR,
    HIR"掄"NOR"之"MAG"奇兵突起"NOR,
    HIR"遊"NOR"之"HIM"糾龍拔峰"NOR,
    HIR"亂"NOR"之"HIC"百家爭鳴"NOR,
    HIR"穿"NOR"之"HIM"破"HIC"雲"HIY"裂石"NOR,
    HIR"勁"NOR"之"HIG"點"HIR"染"HIG"山河"NOR,
    HIR"嘯"NOR"之"HIY"君臨"HIC"天"HIW"下"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N手中$w由下而上，『$a』連續三個迴棍，對準$n上中下分別旁敲側擊",
        "damage"      : 100,
        "damage_type" : "傷害。\n結果$n全身同時劇痛，眼前滿是金星，差點暈了過去",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N一招『$a』應手使出，前棒分撥天地，棍尖聚十足勁急點$n$l，分毫不差",
        "damage"      : 140,
        "damage_type" : "傷害。\n只見$n$l被襲，整個人被一股直衝勁道震退數十步遠",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N舉棒甩圈牽制$n下盤，身形猛地一轉，一招『$a』破空砸向$n天靈，擋者匹靡",
        "damage"      : 180,
        "damage_type" : "傷害。\n只見$n矮身想逃竄，仍然不自覺地將要害迎了上去",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N一棒點向$n腰眼，棒至中途縮而變招，一式『$a』橫甩而出，重重打向$n$l",
        "damage"      : 220,
        "damage_type" : "傷害。\n$n想全力抵擋，兩股內息一撞，硬生生將$n撞飛",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N頂棒一躍至$n上方，足點倒拖棒，一式『$a』連環棒影整個兒罩住了$n上盤",
        "damage"      : 260,
        "damage_type" : "傷害。\n只見$n奮力想逃開包圍，卻怎麼也逃不出棒影的威脅",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N棒架腰際轉出，欺近之際手揮$w長，『$a』撿了上下路$n兩個要害硬撞而出",
        "damage"      : 300,
        "damage_type" : "傷害。\n卻見$n難敵上下兩棍奇襲，要害分別中招，痛得差點跪下",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N單手倒拖$w，走趟無方，一聲大喝，『$a』單棒彈地衝向$n$l，$N則配合腿掃$l",
        "damage"      : 340,
        "damage_type" : "傷害。\n$n硬是格下了腿招，卻被$N一棍趁隙命中，傷處脈息紊亂不已",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N揮棍使出『$a』，棒如活龍在$n全身懸晃，劈卦點撞衝無一不出",
        "damage"      : 400,
        "damage_type" : "傷害。\n只見$n被打得像爛泥一般浴血哀嚎，而$N卻打得興起，落手更加強勁",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N左手朝著$n右肩猛往自己面前一拽，右手握$w棍端隨即一頂，一招『$a』，棍頭分別猛烈對$n的腹部、胃、肝、脾、襠等要害頂擊",
        "damage"      : 400,
        "damage_type" : "傷害",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N腳下之輕靈，可謂龍行虎步，同時將$w揚過頭部的右側，一式『$a』由右上方向左下方一劈，$n躲避不及，登時慘呼一聲，隨即重重趴下",
        "damage"      : 400,
        "damage_type" : "傷害",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N仰天長嘯，隨之霸道勁氣周身湧現，所過之處無不殘滅。帶著開天破地之勢，隆隆衝下。猛然上步，擊出『$a』猛打$n頭、肩等要害，力求一棍制敵",
        "damage"      : 400,
        "damage_type" : "傷害",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("bagistaff");

    if (action_level >= sizeof(my_attack_name)) {
        return 9;
    }

    if (me->query_skill("bagistaff", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("bagiforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "bagiforce" || me->query_skill_mapped("staff") != "bagistaff") {
        return 1;
    }

    if (random(1700) + random(1700) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("bagistaff", 1);

        inspiration("\n"HIY
                    "\t一晚...\n\n"
                    "\t寧靜的夜風吹拂下，只見"HIW + me->query("name") + HIY"死命舞棒，意態若狂...\n\n"
                    "\t突然一聲得意長嘯傳遍四方!!\n\n"
                    "\t@@@  "HIW + me->query("name") + HIY"反覆鍛鍊八極棍法霸極奧義，終於得悟「"BLINK + my_attack_name[action_level] + HIY"」的真義  @@@\n\n"NOR);
    }
}

mapping query_action(object me) {
    int addition = me->query_action_level("bagistaff");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}

int valid_learn(object me) {
    if (me->query_skill("bagistaff", 1) < 1) {
        if (me->query("class") != "officer") {
            return notify_fail("這項技能只能由李書文親傳。\n");
        }

        if (me->query("family/generation") != 2) {
            return notify_fail("只有李書文的弟子方可以學。\n");
        }
    }

    return ::valid_learn(me);
}
