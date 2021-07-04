inherit "/std/skill/sword";

void create() {
    name = "雪山劍法";
}

#include <combat.h>

mapping *action = ({
    ([
        "name"        : HIG"老樹橫斜"NOR,
        "action"      : "$N劍尖倏地翻上，斜刺$n的$l，正是一招「$a」",
        "damage"      : 25,
        "damage_type" : "刺傷",
        "post_action" : (: call_other, __FILE__, "SnowDamage" :),
    ]),
    ([
        "name"        : YEL"風沙莽莽"NOR,
        "action"      : "$N使出一招「$a」，頓時劍光閃閃，寒光點點，無數嬌小劍氣向$n的全身飛去",
        "damage"      : 22,
        "damage_type" : "割傷",
        "post_action" : (: call_other, __FILE__, "SnowDamage" :),
    ]),
    ([
        "name"        : YEL"大漠飛沙"NOR,
        "action"      : "$N一招「$a」劍狹勁風，向$n的$l刺去",
        "damage"      : 20,
        "damage_type" : "刺傷",
        "post_action" : (: call_other, __FILE__, "SnowDamage" :),
    ]),
    ([
        "name"        : HIW"蒼松迎客"NOR,
        "action"      : "$N一招「$a」左手捏了個劍訣，右手挺劍刺向$n",
        "damage"      : 25,
        "damage_type" : "刺傷",
        "post_action" : (: call_other, __FILE__, "SnowDamage" :),
    ]),
    ([
        "name"        : HIY"暗香疏影"NOR,
        "action"      : "$N使了一招「$a」，手中$w微微顫動，劍光若有若無，忽隱忽現，正當$n錯愕之際，忽然劍光往$n的$l一閃",
        "damage"      : 25,
        "damage_type" : "割傷",
        "post_action" : (: call_other, __FILE__, "SnowDamage" :),
    ]),
    ([
        "name"        : HIM"梅雪爭春"NOR,
        "action"      : "$N左手在$w的劍尖上一彈，頓時一股內勁從劍尖射向$n的$l，正是一招「$a」",
        "damage"      : 25,
        "damage_type" : "刺傷",
        "post_action" : (: call_other, __FILE__, "SnowDamage" :),
    ]),
    ([
        "name"        : YEL"朔風忽起"NOR,
        "action"      : "$N猛一回身，使出一式「$a」猶如雷轟電閃一般，手中$w一道劍氣向$n轟去",
        "damage"      : 25,
        "damage_type" : "刺傷",
        "post_action" : (: call_other, __FILE__, "SnowDamage" :),
    ]),
    ([
        "name"        : HIW"雲橫西嶺"NOR,
        "action"      : "$N忽的竄高伏低，一式「$a」手中$w使成一個劍光合成的鋼罩，向$n的各大要穴刺去",
        "damage"      : 20,
        "damage_type" : "刺傷",
        "post_action" : (: call_other, __FILE__, "SnowDamage" :),
    ]),
    ([
        "name"        : HIM"嶺上雙梅"NOR,
        "action"      : "$N手中$w一抄，使出一式「$a」急刺兩劍虛招，對$n的$l斜斜刺去",
        "damage"      : 19,
        "damage_type" : "刺傷",
        "post_action" : (: call_other, __FILE__, "SnowDamage" :),
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIW"冰雪"NOR + YEL"枯枝"NOR,
    HIW"松"HIG"嘯"NOR + GRN"河"HIW"山"NOR,
    HIC"雲竹"HIB"皓"HIY"月"NOR,
    HIC"雪"HIB"嶺"HIC"寒"HIW"霜"NOR,
    HIG"翼"HIW"凍"HIC"寒"HIW"風"NOR,
    HIG"鋒"HIW"霜寒"HIB"雨"NOR,
    HIY"心冷"HIY"照"HIM"清晶"NOR,
    HIR"真"HIW"。"HIR"亂雪月花"NOR,
    HIB"層疊"HIW"雪浪"HIR"絕"HIY"生機"NOR,
    HIB"瀚海"HIC"闌"HIG"千"HIY"百丈"HIW"冰"NOR,
    HIC"愁雲"HIR"慘澹"HIB"萬里"HIW"凝"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N將手中$w左右互使難分虛實的數劍刺出！正是一招『$a』！$n急閃中路大開，剛好$N一握$w封中路",
        "damage"      : 30,
        "post_action" : (: call_other, __FILE__, "IceDamage" :),
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N聲長笑，手中$w寒光閃，『$a』隨之而出，見$N劍式連綿不絕狂風驟雨，笑聲未止，向$n的$l刺出數十劍",
        "damage"      : 160,
        "post_action" : (: call_other, __FILE__, "SnowDamage" :),
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N手中$w橫掃，似青竹左右晃動劍光皓皓，一招『$a』帶起陣陣冷風，劍式斜斜刺向$n$l",
        "damage"      : 70,
        "post_action" : (: call_other, __FILE__, "IceDamage" :),
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N手中$w挽了幾朵雪花，身形一動，夾勁使招，$n血脈為冰霜所困，$w已穿透$n$l，好一招『$a』",
        "damage"      : 200,
        "post_action" : (: call_other, __FILE__, "SnowDamage" :),
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N手中$w橫掃，有如鴻鵠振翼，一招『$a』帶起冷風陣陣，$n尚在伏手伏腳之際，劍式斜斜刺向$n的$l",
        "damage"      : 100,
        "post_action" : (: call_other, __FILE__, "IceDamage" :),
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "一聲長嘯，$N施展『$a』，$w夾氣綻寒氣！四周飛雨、綠葉之露皆凝成冰，劍氣揮發有如雪崩之勢擊向$n的$l",
        "damage"      : 350,
        "post_action" : (: call_other, __FILE__, "SnowDamage" :),
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N閉上雙眼，心如涯涯白雪，看透$n那幻人耳目的身法，一招『$a』劃出數道弧線，斬向$n露出的破綻",
        "damage"      : 180,
        "post_action" : (: call_other, __FILE__, "IceDamage" :),
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$n招式齊出、身影搖曳，頻向$N出招！$N心無它念凝神出劍，招如雪花蓋頂，刺向$n要穴，不愧是雪山劍法中最精妙的『$a』",
        "damage"      : 470,
        "post_action" : (: call_other, __FILE__, "SnowDamage" :),
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N劍交左手，左手$w發了個虛招刺向$n，右手撥動冰霜寒氣！大喝：看雪山劍法悟招『$a』！四周頓時為寒雪掩蓋，只見$n口角流出了血水",
        "damage"      : 400,
        "post_action" : (: call_other, __FILE__, "IceDamage" :),
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N御起『$w』擋在身前。在電光火石之間，那劍端竟延伸出冰氣，霍然長了三尺！\n"
                        "突然「嗚」的一聲，一道幽幽青光，一招『$a』閃出一道劍氣向『$n』飛去",
        "damage"      : 470,
        "post_action" : (: call_other, __FILE__, "SnowDamage" :),
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N一聲輕嘆，渾身散發寒意，冰霜轉眼間破空而至，『$w』如巨濤排空，席捲了『$n』。\n"
                        "一招『$a』，讓周遭所有的生物瞬間枯萎，只見一道冷光從天邊降下，將這滿天烏雲盡皆凝結",
        "damage"      : 400,
        "post_action" : (: call_other, __FILE__, "IceDamage" :),
        "damage_type" : "刺傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("snowsword");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("snowsword", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("iceforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "iceforce" || me->query_skill_mapped("sword") != "snowsword") {
        return 1;
    }

    if (random(1200) + random(1200) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("snowsword", 1);

        inspiration(HIW"\n         "BWHT + BLINK" ║ "NOR"         "HIW".         遠方爆起極致寒氣"
                       "\n.    .   "BWHT + BLINK" ║ "NOR + HIW"                                   .        .       ."
                       "\n     .   "BWHT + BLINK"  ║"NOR"    "HIW".        .     "NOR"天空落下斑斑白雪"HIW"             ."
                       "\n         "BWHT + BLINK"  ║"NOR + HIW"                                        .                 ."
                       "\n         "BWHT + BLINK"║║"NOR + HIW"         .     .   "HIB"似是"HIC"寒風"HIB"的絲絲劍氣迎面而來"
                    HIW"\n .     . "BWHT + BLINK"║║"NOR + HIW"   .                                           ."
                       "\n         "BWHT + BLINK"║║"NOR"                   只見 "HIR + me->query("name") + NOR" 揮出了"HIW"雪山劍"NOR"失傳已久的"
                    HIW"\n       "BLINK"◣"NOR + HIW + BWHT + BLINK"  ║"NOR + HIW + BLINK"◢"NOR + HIW"            .                                          ."
                       "\n     "BLINK"◥█"NOR + HIW + BWHT + BLINK" ║ "NOR + HIW + BLINK"█◤"NOR + HIW"    .                 『 "BLINK + my_attack_name[action_level] + HIW" 』   ."
                       "\n     "BLINK"◥█"NOR + HIW + BWHT + BLINK"◣◢"NOR + HIW + BLINK"█◤"NOR + HIW"                             .        ."
                       "\n￣﹉﹊﹊﹉￣￣￣﹉﹊﹊﹊﹉﹉﹉﹉﹊﹊\n\n"NOR);
    }
}

mapping query_action(object me) {
    int addition = me->query_action_level("snowsword");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}

void SnowDamage(object me, object victim, object weapon, int damage) {
    if (me->query_skill_mapped("force") == "iceforce") {
        int ice_level = (me->query_skill("iceforce", 1) + me->query_skill("snowsword")) / 60 + 1;
        string msg = HIW"\t$N"HIW"使出雪山劍法特殊攻擊「雪花飄」！\n瞬間四周飄起雪花飄向$n"HIW"！";

        if (random(me->query("combat_exp") / 2) > random(victim->query("combat_exp")) && victim->apply_condition("ice_nature", ice_level)) {
            msg += "結果$n"HIW"被雪花凍傷了！\n"NOR;
        } else {
            msg += "結果$n"HIW"並沒有怎樣。\n"NOR;
        }

        message_vision(msg, me, victim);
    }
}

void IceDamage(object me, object victim, object weapon, int damage) {
    int dam;
    object mob_wp, snowman;
    string msg;

    if (victim->query("gin") < 0 || victim->query("kee") < 0 || victim->query("sen") < 0) {
        return;
    }

    if (damage == 0 || damage == RESULT_DODGE || me->query_skill_mapped("force") != "iceforce") {
        return;
    }

    switch (damage) {
        case RESULT_PARRY:
            if (!(mob_wp = victim->query_temp("weapon"))) {
                return;
            }

            msg = "\n$N趁著兵刃相交的瞬間，將一股"HIB"至寒內力"NOR"由" + weapon->name() + "傳入$n的武器。\n";

            if (random(10) > 6) {
                if (userp(victim)) {
                    msg += "$n雙手如觸寒冰，一個把持不住，放下了" + mob_wp->name() + "。\n\n";
                    mob_wp->unequip();
                } else {
                    msg += "$n雙手如觸寒冰，一個把持不住，" + mob_wp->name() + "脫手而出，不知去向。\n\n";
                    mob_wp->unequip(victim);

                    if (!mob_wp->is_shared()) {
                        destruct(mob_wp);
                    }
                }
            } else {
                msg += "$n以自身內力抵抗，不僅未受傷害，還順勢將此內力化為己用。\n\n";
                victim->add("kee", 100);
            }

            message_vision(msg, me, victim);

            break;

        case 1..50:
            msg = "\n$N將一道"HIB"輕微的寒冰真氣"NOR"順著傷口灌入$n體內。\n";

            if (random(10) > 6) {
                victim->add_temp("iceforce_sp", 1);
                victim->start_busy(victim->query_busy() + 1);
                msg += "$n不禁打了一個寒顫\n\n";
            } else {
                msg += "$n的內力自然發動，將此微不足道的寒氣化為無形。\n\n";
            }

            message_vision(msg, me, victim);

            break;

        case 51..150:
            msg = "\n$N運起意寒神功，將一股"HIB"寒勝於冰的真氣"NOR"順著傷口灌入$n體內。\n";

            if (random(10) > 6) {
                victim->add_temp("iceforce_sp", 3);
                victim->start_busy(victim->query_busy() + 2);
                msg += "$n傷口血液為之一凝。\n\n";
            } else {
                msg += "$n的內力自然發動，將此微不足道的寒氣化為無形。\n\n";
            }

            message_vision(msg, me, victim);

            break;

        case 151..300:
            msg = HIB"\n一陣寒氣"NOR"由" + weapon->name() + "發出，順著傷口灌入$n體內。\n";

            if (random(10) > 6) {
                victim->add_temp("iceforce_sp", 5);
                victim->start_busy(victim->query_busy() + 3);
                msg += "$n身法似乎變的較為遲滯。\n\n";
            } else {
                msg += "$n的內力自然發動，將此微不足道的寒氣化為無形。\n\n";
            }

            message_vision(msg, me, victim);

            break;

        default:
            msg = "\n$N使出意寒神功最高境界「"HIB"雪人滿天下"NOR"」，剎時由" + weapon->name() + "發出一陣冰風暴將$n包圍！\n";

            if (random(10) > 4) {
                if (userp(victim) || me->query("env/snowsword_frozen") == "no") {
                    victim->add_temp("iceforce_sp", 5);
                    victim->start_busy(victim->query_busy() + 5);
                } else {
                    msg += HIY"四周氣溫不斷下降，連你都快要受不了了........\n"NOR"$n更是首當其衝，漸漸無法動彈。\n";

                    message_vision(msg, me, victim);

                    snowman = new(__DIR__"freeze/snowman");
                    snowman->do_sp(victim);

                    return;
                }
            } else {
                msg += "$n的內力自然發動，將此微不足道的寒氣化為無形。\n\n";
            }

            message_vision(msg, me, victim);

            break;
    }

    if (victim->query_temp("iceforce_sp") > random(20)) {
        dam = victim->query_temp("iceforce_sp") * (random(300) + 50);

        victim->receive_damage("kee", dam);
        victim->delete_temp("iceforce_sp");

        message_vision("\n$n身上累積的"BLU"寒冰真氣"NOR"突然爆發，全身如墜冰窖，造成 "HIR + dam + NOR" 點的傷害。\n\n", me, victim);
    }
}
