inherit "/std/skill/unarmed";

void create() {
    name = "美女拳法";
}

mapping *action = ({
    ([
        "name"        : HIY"貂蟬拜月"NOR,
        "action"      : "$N右手一探，一式「$a」掌捉成刀，在空中畫出弧型狠狠劈向$n$l",
        "force"       : 150,
        "damage"      : 20,
        "damage_type" : "割傷",
        "weapon"      : "左手掌刀",
    ]),
    ([
        "name"        : HIC"西施捧心"NOR,
        "action"      : "$N右手緩緩抬上心口位置後倏地探出，「$a」一拳直衝$n的$l",
        "force"       : 200,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIR"東施效顰"NOR,
        "action"      : "$N左手緩緩抬上心口位置後倏地探出，「$a」往$n的$l攻出一掌",
        "force"       : 220,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIG"麻姑獻壽"NOR,
        "action"      : "$N雙手合拳迥上抬擊，一招「$a」朝$n的$l位置打去",
        "force"       : 300,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIR"蠻腰纖纖"NOR,
        "action"      : "只見$N纖腰輕擺，使了式「$a」向旁滑出數尺，趁勢左手打往$n的$l",
        "force"       : 250,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIG"弄玉吹蕭"NOR,
        "action"      : "$N使出「$a」，右手連發虛式，左手反掌拍向$n的$l",
        "force"       : 300,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIY"天孫織綿"NOR,
        "action"      : "$N右手揮左，左手送右，擲梭織布狀使出「$a」，雙手並出往$n的$l打去",
        "force"       : 280,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIC"鉤弋握拳"NOR,
        "action"      : "$N左手成爪，右手成拳，拳爪並出使出「$a」，向$n的$l攻去",
        "force"       : 310,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIG"綠珠墜樓"NOR,
        "action"      : "突然$N纖足環踢，「$a」一招直逼$n下盤",
        "force"       : 330,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIR"紅線盜盒"NOR,
        "action"      : "只見$N身子輕晃，眨眼間左手帶出虛招，右手探出，「$a」攻向$n$l",
        "force"       : 340,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIC"木蘭彎弓"NOR,
        "action"      : "$N跨步直上，「$a」一招右手成拳，沖$n的$l直攻一拳",
        "force"       : 350,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIY"洛神凌波"NOR,
        "action"      : "忽地$N身影一幻，「$a」似的晃動身形，趁勢撞向$n$l的部位",
        "force"       : 360,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIR"紅拂夜奔"NOR,
        "action"      : "$N右手一圈，「$a」出其不意的直扣入關，往$n的$l攻出一掌",
        "force"       : 380,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIR"紅玉擊鼓"NOR,
        "action"      : "$N雙手一抱，雙臂交互快擊，一式「$a」，直往$n$l攻出數拳",
        "force"       : 375,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIG"萍姬針神"NOR,
        "action"      : "$N右掌探出虛招，左手食指趁機戳出，「$a」一招，往$n$l處落下",
        "damage_type" : "刺傷",
        "force"       : 385,
        "damage"      : 20,
        "weapon"      : "左手食指",
    ]),
    ([
        "name"        : HIY"曹令割鼻"NOR,
        "action"      : "$N柳腰往後一仰，「$a」一招左手畫過鼻前，掌背弧張而出拍向$n$l",
        "force"       : 390,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIG"班姬賦詩"NOR,
        "action"      : "但見$N粉頸低垂，左手輕圈，「$a」一式右掌輕飄飄的往$n$l拍落",
        "force"       : 470,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIR"嫦娥竊藥"NOR,
        "action"      : "$N鴛足一點，身形居高臨下使出「$a」，往$n的$l連出數掌",
        "force"       : 490,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIC"則天垂簾"NOR,
        "action"      : "$N身子向前一撲，使一招「$a」，雙掌以垂簾式往$n$l削將下來",
        "force"       : 495,
        "damage"      : 20,
        "damage_type" : "割傷",
        "weaopn"      : "雙掌",
    ]),
    ([
        "name"        : HIY"文君當爐"NOR,
        "action"      : "$N舉手作提鐺斟酒之狀，使出招「$a」往$n的$l鑿去",
        "force"       : 510,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIG"麗華梳裝"NOR,
        "action"      : "$N五根手指張開，往自個頭髮一梳，一招「$a」手指軟軟的往$n$l揮去",
        "force"       : 530,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIC"文姬歸漢"NOR,
        "action"      : "$N雙掌連拍數下，掌隨一招「$a」連綿不斷拍出，向$n$l拍出十八掌",
        "force"       : 550,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIR"昭君出塞"NOR,
        "action"      : "$N左手舉起，右手指彈，隨式「$a」作個彈琵琶之姿，手指彈向$n$l",
        "force"       : 570,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIY"貴妃醉酒"NOR,
        "action"      : "但見$N身子搖幌，使出「$a」跌撞的向右歪斜出去，以肩頭撞向$n的$l",
        "force"       : 590,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
});

string *parry_msg = ({
    CYN"但見$p右手輕畫個圓，將攻勢拂開。\n"NOR,
    CYN"結果被$p左手旋勁帶開。\n"NOR,
});

int size_of_parry_msg = sizeof(parry_msg);

string *my_attack_name = ({
    HIW + BLK"濁世"HIW"寒冬"HIG"清冽梅"NOR,
    HIG"空谷幽幽"HIC"潔雅蘭"NOR,
    HIW"凌霜"HIR"不屈"NOR + YEL"傲骨菊"NOR,
    HIW + BLK"淤泥"HIC"清漣"HIW"獨世蓮"NOR,
    HIR"名聞天下"HIY"洛陽花"NOR,
    HIW + BLK"多乖"HIR"薄命"HIM"夭灼桃"NOR,
    HIY"大氣怡然"HIC"閨中秀"NOR,
    HIC"宜室"HIM"宜家"HIG"恬碧玉"NOR,
    RED"無花"YEL"無月"HIY"再西施"NOR,
    HIM"芳容"HIG"麗質"HIC"映"HIR"山紅"NOR,
    HIY"沉魚"HIB"落雁"HIG"鳥"HIM"驚喧"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N臉色峻冷似是不把對手看在眼裡，對著$n出手就是一掌『$a』，震的$n氣血翻騰，臉色一片慘白",
        "force"       : 1000,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "酣戰中卻見$N身影連閃，出塵淡雅的素容帶著一抹恬靜的微笑，剎時間$n只覺眼睛一花，$l一疼便中了一掌，赫然是美女拳法中的『$a』",
        "force"       : 1050,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N露出一個破綻，$n大喜連忙搶攻，卻見$N不憂不喜臉色堅毅，身法連退覓了個空檔一式『$a』直襲$n破綻",
        "force"       : 1100,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "只見$n彷彿殺紅了眼，對著$N就是一個大招，$N不避不讓一式『$a』對撼而出",
        "force"       : 1150,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$n氣勢一漲剎時間宛若殺神，對著$N殺招盡出，看來不將$N擊殺在此誓不罷休，$N真氣一蕩意守丹田蓄力於臂，一掌『$a』朝$n$l攻去",
        "force"       : 1200,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N氣運全身身法連閃，只見$N與$n錯身而過跌臥在地，眼中碧波蕩漾似是跌疼了般楚楚可憐，回望$n卻不知何時胸口已中了一掌口吐鮮血，竟是美女拳法中的『$a』",
        "force"       : 1250,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$n對著$N淫邪一笑，手一伸便向著$N香肩探去，卻見$N不慌不忙左手玉臂輕抬，右手一式『$a』朝著胸口印去，一來一往間甚是錯落有致",
        "force"       : 1300,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "只見$N玉手輕抬接過了$n一掌，身形一側一招『$a』連點其幾大穴位，$n頓時氣血一滯，五臟六腑似是受了重擊，一張口便連吐幾口鮮血",
        "force"       : 1350,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N真氣一鼓，朱唇輕啟出聲：『$a』，一舉手一投足竟是有說不出的美，$n頓時眼光迷離，腦中只有昔日伊人相伴的日子，片刻後竟口吐鮮血縱聲大笑，似是不知身受重傷狀若瘋態",
        "force"       : 1400,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N輕搖臻首，左手挽起烏亮的秀髮，柔聲道：『$a』，踏著鬼魅般飄忽難測的身法，轉至$n身後，兩道似有若無的巧勁，拍入$n的經脈去，氣勁到處，經脈欲裂",
        "force"       : 1400,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N神色幽怨迷人，丹唇微張，吐出一股勁氣，嬌叱道：『$a』，仰起仙姿玉色的俏臉，兩袖拂向$n，一道接一道的真氣，透過衣袖左右揮擊，袖影翩翩，虛實難分",
        "force"       : 1400,
        "damage_type" : "瘀傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level;

    if (me->query("gender") != "女性") {
        return 6;
    }

    action_level = me->query_action_level("girlfist");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("girlfist", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("girlforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "girlforce" || me->query_skill_mapped("unarmed") != "girlfist") {
        return 1;
    }

    if (random(850) + random(850) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("girlfist", 1);

        inspiration("\n"
                    "\t\t       "HIW + me->query("name") + HIW" 一套拳法使罷 "HIY"若有所悟\n\n"
                    "\t\t            "HIW"藕臂輕抬 "HIG"柳腰慢移\n\n"
                    "\t\t       "HIR"傾城醉人的風姿 "HIC"宛若天上仙女\n\n"
                    "\t\t"HIW"原來是領悟了"HIY"美女拳法"HIW"秘招『"BLINK + my_attack_name[action_level] + HIW"』\n\n"NOR);
    }
}

int valid_learn(object me) {
    if (me->query("gender") != "女性") {
        return notify_fail("美女拳法是女子才能練的武功。\n");
    }

    return ::valid_learn(me);
}

mapping query_action(object me) {
    int s = me->query_skill("girlfist", 1) / 30;

    if (s >= 5) {
        int addition = me->query_action_level("girlfist");

        if (addition) {
            if (random(100) < addition * 50 / size_of_my_action) {
                return my_action[random(addition)];
            }
        }

        s = 8 + random(16);
    } else {
        s = random(s * 4);
    }

    return action[s];
}

string query_parry_msg(object weapon) {
    return parry_msg[random(size_of_parry_msg)];
}
