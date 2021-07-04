inherit "/std/skill/throwing";

void create() {
    name = "辟邪針法";
}

string *limbs = ({
    HIR"志堂"NOR"穴", HIR"命門"NOR"穴", HIR"曲池"NOR"穴", HIC"或中"NOR"穴", HIC"中府"NOR"穴",
    HIC"靈門"NOR"穴", HIY"天府"NOR"穴", HIY"夾白"NOR"穴", HIY"太陽"NOR"穴", MAG"膻中"NOR"穴",
    MAG"通理"NOR"穴", MAG"肩貞"NOR"穴", HIM"脊中"NOR"穴", HIM"環跳"NOR"穴", HIM"中脘"NOR"穴",
    HIC"肩井"NOR"穴", HIC"眉心"NOR"穴", HIC"人中"NOR"穴", GRN"風府"NOR"穴", GRN"啞門"NOR"穴",
    GRN"天池"NOR"穴", YEL"商曲"NOR"穴", YEL"天鼎"NOR"穴", YEL"淵液"NOR"穴", RED"玉枕"NOR"穴",
    RED"笑腰"NOR"穴", RED"內關"NOR"穴", HIG"外關"NOR"穴", HIG"大椎"NOR"穴", HIG"神藏"NOR"穴",
    HIC"靈墟"NOR"穴", HIC"神封"NOR"穴", HIC"步廊"NOR"穴", HIC"幽門"NOR"穴", HIC"百匯"NOR"穴",
    HIC"通谷"NOR"穴",
});

function post_action = (: call_other, WEAPON_D, "throw_weapon" :);

mapping *action = ({
    ([
        "action"      : "$N手捻起一把$w，眼中精光大異，信手一揮，忽然間手中$w朝著$n$l疾射而去",
        "force"       : 35,
        "damage"      : 85,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
    ([
        "action"      : "$N指捻蓮花，指間$w突然連點$n三十六道大穴，$n慌忙避開，$N指間$w一緩，直取$n的$l",
        "force"       : 350,
        "damage"      : 95,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
    ([
        "action"      : "$N氣運指尖，雙手幻化出無數幻影，$n頓時無法反應，$N指尖$w飛竄而出直取$n的$l",
        "force"       : 450,
        "damage"      : 105,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
    ([
        "action"      : "$N一個縱身指間輕彈，咻地一聲指間$w精芒炫目，直飛而出刺向$n的$l",
        "force"       : 550,
        "damage"      : 115,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
    ([
        "action"      : "$N手指微曲，氣流指尖$w嗡嗡作響，$w從$N指尖激射而出直取$n的$l",
        "force"       : 650,
        "damage"      : 115,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
    ([
        "action"      : "$N一個鷂子翻身，雙掌攤開十指間$w飛竄而出，直取$n的$l",
        "force"       : 750,
        "damage"      : 125,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
    ([
        "action"      : "$N身形飄忽，有如鬼魅，凌空翻轉，指間$w破空飛竄而出，直取$n的$l",
        "force"       : 850,
        "damage"      : 135,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
    ([
        "action"      : "$N兩指輕捻$w四下撥動擋去$n的攻勢，剎時兩指彈出$w直取$n的$l",
        "force"       : 900,
        "damage"      : 145,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
    ([
        "action"      : "$N移步向西，指間$w精芒大盛，一聲爆喝，$w由$N指間飛竄而出直取$n的$l",
        "force"       : 950,
        "damage"      : 155,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
    ([
        "action"      : "$N一個縱身，凌空飛躍，腳踏連環，手腕翻轉，十指連彈，$w破空飛竄，直奔$n的$l",
        "force"       : 1000,
        "damage"      : 160,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIC"欲斷"HIY"向陽"HIR"生機絕"NOR,
    HIW"學宦"HIM"追影"HIG"瞬弒殺"NOR,
    HIB"人間"HIC"無道"HIW"雨盡疾"NOR,
    HIW"妖嬈"HIM"作孽"HIC"迅風刺"NOR,
    HIC"針鋩"HIY"裂隙"HIR"血滔滔"NOR,
    HIW"法空"BLK"無道"HIY"斬情義"NOR,
    HIM"須臾"HIW"奪命"HIM"速決魂"NOR,
    HIY"揮戈"HIR"夕火"HIW"如奔雷"NOR,
    HIC"刀兵"HIY"屠戮"HIR"錯針散"NOR,
    HIR"自破"HIW"雄風"HIB"涌雲亂"NOR,
    HIM"宮刑"HIC"刖足"HIW"浣雪清"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N一個箭步向前，利用全身衝力將手上的$w擲出，辟邪針法秘招『$a』狂風般襲向$n的$l",
        "force"       : 1000,
        "damage"      : 160,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N身影連閃，一招『$a』，手上$w連發，$n一愣不知該如何閃躲，$w已直奔$n的$l",
        "force"       : 1050,
        "damage"      : 170,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N口念咒語引來天雷暴雨，震的天空轟轟作響，$w一招『$a』直取$n的$l",
        "force"       : 1100,
        "damage"      : 180,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N右手連彈，$w如流火般激射而出，$n閃避不及，一招『$a』直取$n的$l",
        "force"       : 1150,
        "damage"      : 190,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "殺氣驟盛！$n向前逼進數步，$N腳踏奇步閃開，左手$w斜射而出，一招『$a』飆往$n的$l",
        "force"       : 1200,
        "damage"      : 200,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N眼神冰冷，嘴角帶著一絲冷漠的笑意，一式『$a』手中$w無情地射往$n的$l",
        "force"       : 1250,
        "damage"      : 210,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N潛運內力氣貫指尖，一招『$a』將內力貫注在$w飛射而出，$n一時間無法反應，$w已直奔$n的$l",
        "force"       : 1250,
        "damage"      : 210,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N仰天長笑，一陣音波震的$n耳鼓生疼，$N趁著$n掩耳之際，一招『$a』手中$w直取$n的$l",
        "force"       : 1300,
        "damage"      : 220,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N左手五指連彈，右手卻出掌將飛射出去的$w擊碎，一招『$a』如漫天星雨般的攻向$n周身大穴",
        "force"       : 1350,
        "damage"      : 230,
        "post_action" : post_action,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N指間輕拈$w，一招『$a』把$w化成無數幻影，$n無法看破虛實，$w已直奔$n的$l",
        "force"       : 1400,
        "damage"      : 240,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N使出辟邪針法最終奧義『$a』，雙手幻出殘影，指間的$w直取$n的$l",
        "force"       : 1450,
        "damage"      : 250,
        "post_action" : post_action,
        "damage_type" : "刺傷",
        "limbs"       : limbs,
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level;

    if (me->query("gender") != "中性") {
        return 6;
    }

    action_level = me->query_action_level("be-evil-nail");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("be-evil-nail", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("pollyforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "pollyforce" || me->query_skill_mapped("throwing") != "be-evil-nail") {
        return 1;
    }

    if (random(850) + random(850) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("be-evil-nail", 1);

        inspiration("\n"
                    "\t        "HIW + me->query("name") + HIM"手上"HIW"拿著"HIC"刺繡"HIW"慢慢的繡著\n"
                    "\t             "HIW"在"HIB"一針"HIG"一線"HIW"完成之際\n"
                    "\t        "HIW"似乎"HIC"隱含著"HIW"一種"HIY"不可言喻"HIW"的至理\n"
                    "\t"HIW + me->query("name") + HIB"突然領悟了"HIR"辟邪針法"HIW"秘招"HIR"【" + my_attack_name[action_level] + HIR"】\n\n"NOR);
    }
}

int valid_learn(object me) {
    if (me->query_skill("be-evil-nail", 1) < 1) {
        if (me->query("class") != "sunmoon") {
            return notify_fail("這項技能只能找東方不敗學。\n");
        }

        if (me->query("family/generation") != 3) {
            return notify_fail("只有東方不敗的嫡傳弟子才可以學。\n");
        }
    }

    if (me->query("gender") != "中性") {
        return notify_fail("辟邪針法需自宮方能學習。\n");
    }

    return ::valid_learn(me);
}

mapping query_action(object me) {
    int addition = me->query_action_level("be-evil-nail");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
