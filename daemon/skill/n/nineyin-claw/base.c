inherit "/std/skill/unarmed";

void create() {
    name = "九陰白骨爪";
}

mapping *action = ({
    ([
        "name"        : HIW"九子連環"NOR,
        "action"      : "$N力貫五指，一招「$a」，五指劃出滿天爪影，排山倒海般掃向$n全身",
        "damage"      : 20,
        "force"       : 360,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIM"勾魂奪魄"NOR,
        "action"      : "只見$N身形一轉，一招「$a」，雙手十指如鬼魅一般，神不知鬼不覺地襲向$n的左肩",
        "damage"      : 10,
        "force"       : 350,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIR"血影傾天"NOR,
        "action"      : "$N騰空而起，力勁盡貫五指，一招「$a」撲向$n，令$n無處可閃",
        "damage"      : 20,
        "force"       : 340,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : CYN"三陰九泰"NOR,
        "action"      : "$N大喝一聲，一招「$a」，三指內勾如閃電般劃出一道大圓弧，抓向$n的腰間",
        "damage"      : 10,
        "force"       : 390,
        "damage_type" : "抓傷",
    ]),
    ([
        "name"        : MAG"九陰破陽"NOR,
        "action"      : "$N身形繞$n一轉，猛然一式「$a」，手指轉握向右橫出，挾著勁風向$n掃去",
        "damage"      : 20,
        "force"       : 400,
        "damage_type" : "內傷",
    ]),
    ([
        "name"        : GRN"逆缺斷骨"NOR,
        "action"      : "$N左手捏著指訣，右足踏開一招「$a」向上斜抓，雙手躍出倏的化作幾道光芒撲向$n的椎骨穴",
        "damage"      : 15,
        "force"       : 380,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : YEL"爪刃千峰"NOR,
        "action"      : "$N忽然身形高高躍起，使出「$a」，十指幻出漫天花瓣，迅如雷霆抓向$n的頸部",
        "damage"      : 20,
        "force"       : 440,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : RED"血光凌霄"NOR,
        "action"      : "$N怒吼一聲，凌空飛起，一式「$a」，身子居高臨下，雙掌彎曲成爪，式式抓向$n的頭部",
        "damage"      : 20,
        "force"       : 450,
        "damage_type" : "瘀傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIC"夜魅風行"HIR"泣"HIW"白骨"NOR,
    HIB"日毀"HIY"星"NOR"沉"HIR"熾無盡"NOR,
    YEL"斷鶴續鳧"HIY"齊紛飛"NOR,
    HIG"一泣千山"HIR"血染紅"NOR,
    HIY"落楓秋恨"HIC"滿三霜"NOR,
    CYN"陰風"HIW"泣月"NOR + YEL"西陽墜"NOR,
    HIC"飛湍瀑流"HIM"爭喧豗"NOR,
    HIB"搖魂鐘聲"BLK"鬼嘯"HIC"雨"NOR,
    HIM"五夜"HIC"颼飀"HIG"蕩原"HIY"風"NOR,
    YEL"挫骨揚灰"HIR"鬼神"HIM"奪"NOR,
    HIW"九"NOR"陰"HIW"凌"NOR"霄"HIC"步雲蹤"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N仰天悲笑，隨即揮掌抓出一式『$a』，五指化為一絲絲寒意，裹向$n的後心，竟是一招白骨爪密招",
        "force"       : 550,
        "damage"      : 10,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N神色肅殺，一聲虎吼，內力源源提至十指，爪勁霸道之極，一片刺骨的爪風將$n團團圍住，正是『$a』",
        "force"       : 700,
        "damage"      : 10,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N轟然一招『$a』，雙爪驟然出招又立刻收回到胸前，隨即轉身翩然離去！$n這時才感覺到有一股勁氣逼向自己的胸口",
        "force"       : 850,
        "damage"      : 10,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N迅速的輪動雙掌，曲指成爪，在身前左右幻起一片旋風屏障，猛然地衝近$n施展一式『$a』，雙爪向$n右腿奔雷般地掃去",
        "force"       : 1000,
        "damage"      : 10,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N運起陰柔的內勁，一式『$a』，雙掌在胸前疾轉數圈，不急不緩地抓向$n，只見漫天爪勁逼向$n",
        "force"       : 1100,
        "damage"      : 10,
        "damage_type" : "挫傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N雙掌運勁，勁貫指尖，雙手食指和中指迅速和在一起，摹然一式『$a』，八指忽然遙遙抓向$n，$n只覺得數股疾風襲向自己數處大穴",
        "force"       : 1250,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N身形一轉，轉瞬之間已將雙手指尖對準$n的數處要穴，一式『$a』，$N將雙掌掌勁一股腦兒的爆發出來，數股強烈的氣流湧向$n的全身",
        "force"       : 1500,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "電火石火間，$n靠著危險的本能閃開了半個身子，然一道陰白的幽光已直接洞穿了$n的胸口，霎時鮮血四散。正是一招『$a』",
        "force"       : 1500,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N忽然腦袋撕裂般疼痛，一陣怒吼響徹而起。全身散發冰涼氣息，一招『$a』，對著$n猛然劃出一爪，極為凌厲，五道爪印嗖嗖的飛出",
        "force"       : 1500,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N臉上露出了嗜血般的興奮氣息，邪惡一笑：『今天誰也別想逃』，使出一招『$a』，恐怖陰氣鋪天蓋地般地涌來，$n一時分心，後心受了一爪",
        "force"       : 1500,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N緩緩道了聲：『天長路遠魂飛苦』身形瞬間逃的無影無蹤！在$n正因失去敵蹤而錯愕的同時，$N有如天外飛仙般的身影突然出現在空中，一式『$a』，掀起重重的爪浪壓向$n的全身",
        "force"       : 1750,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

mapping query_action(object me) {
    int addition = me->query_action_level("nineyin-claw");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("nineyin-claw");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("nineyin-claw", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("emeiforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "emeiforce" || me->query_skill_mapped("unarmed") != "nineyin-claw") {
        return 1;
    }

    if (random(1200) + random(1200) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("nineyin-claw", 1);

        inspiration("\n"
                    "\n"HIR"∮急∮       "HIW"▏﹊                "HIY"數年前"HIR"江湖煞星"HIC + me->query("name") +
                    "\n"HIR"∮報∮  "HIW"▏﹍ ◣                  "HIY"詔告天下歸隱山林，自此失去蹤跡"
                    "\n"HIR"∮：∮  "HIW"◣    ◥◣﹊             "HIY"不料．竟是藏身修練令人聞風色變之"HIW"九陰白骨爪"
                    "\n"HIR"∮﹃∮   "HIW"◥◣﹎ ◥◣     ﹎          ∕"HIY"日前武林各幫派聚會上赫然見此魔頭再次現身"
                    "\n"HIR"∮九∮  "HIW"◣ ◥▆  ﹍◥▆  ﹍          ▌  "HIY"一招 『"NOR + BLINK + my_attack_name[action_level] + HIY"』"
                    "\n"HIR"∮陰∮   "HIW"◥▄ ◥▆   ◥▆           ▉      "HIY"屠殺各派精英一計數十人"
                    "\n"HIR"∮再∮     "HIW"◥◣ ◥▇▃  ◥▇ ﹊   █▎        "HIY"實為武林一大禍害"
                    "\n"HIR"∮現∮ "HIW"◣ ﹍ ◥▅  ◥█▅ ◥▇▅█▊﹍  ﹊     ﹎  ﹎"
                    "\n"HIR"∮﹄∮  "HIW"◥◣▁＿◥▇▃▄█▄▃██▅▁＿﹊ ﹎ ﹊    ﹎  ﹎   ﹊  ﹎\n\n"NOR);
    }
}

int valid_learn(object me) {
    if (me->query("九陰白骨爪") != 1) {
        return 0;
    }

    return ::valid_learn(me);
}
