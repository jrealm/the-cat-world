inherit "/std/skill/unarmed";

void create() {
    name = "黯然銷魂掌";
}

mapping *action = ({
    ([
        "name"        : HIC"心驚肉跳"NOR,
        "action"      : "當$n靠近$N身體時，$N突然使出一式「$a」全身肌肉顫動，往$n身體彈出",
        "force"       : 450,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIW"杞人憂天"NOR,
        "action"      : "$N一掌向自己頭頂空空拍出，一招「$a」手掌斜下，掌力化成弧形，往$n的$l擊下",
        "force"       : 450,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIR"拖泥帶水"NOR,
        "action"      : "$N右掌飄動如流水，左拳卻重滯如千斤，一招「$a」往$n的$l擊來",
        "force"       : 450,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIG"倒行逆施"NOR,
        "action"      : "$N突然頭下腳上，倒過身子，一招「$a」雙腳朝$n的$l連踢",
        "force"       : 450,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIC"徘徊空谷"NOR,
        "action"      : "$N突然縱身躍起，落於$n身後，一招「$a」往$n的背後擊下",
        "force"       : 450,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIW"力不從心"NOR,
        "action"      : "$N突然使出一招「$a」，雙手無聲無息朝$n的胸口擊去",
        "force"       : 450,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIR"行尸走肉"NOR,
        "action"      : "$N使出一招霸道至極的「$a」，拳頭如有去無回般的往$n的頭顱擊去",
        "force"       : 450,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIG"庸人自擾"NOR,
        "action"      : "$N曲指成爪，一招「$a」，由人意想不到的角度往$n的$l抓去",
        "force"       : 450,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIY"廢寢忘食"NOR,
        "action"      : "$N突然平臥，身形有如疾箭般，一招「$a」，往$n的下三路攻去",
        "force"       : 450,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIM"孤形只影"NOR,
        "action"      : "$N凌空躍起，雙手合掌，一招「$a」，奮力的往$n頭頂擊下",
        "force"       : 450,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIC"飲恨吞聲"NOR,
        "action"      : "$N使出一招「$a」，聚氣丹田，突然猛喝一聲，聚音成束的往$n的$l吹來",
        "force"       : 450,
        "damage"      : 20,
        "damage_type" : "震傷",
    ]),
    ([
        "name"        : HIW"六神不安"NOR,
        "action"      : "$N使出一招「$a」，拳頭看似雜亂無章，卻又令人難以捉摸的往$n砸去",
        "force"       : 450,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIR"窮途末路"NOR,
        "action"      : "$N身形急退，趁$n急於追趕的時候，突然轉身一掌，一招「$a」，往$n的$l擊來",
        "force"       : 450,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIG"面無人色"NOR,
        "action"      : "$N突然以頭代拳，一招「$a」，往$n的胸口撞下",
        "force"       : 450,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIY"想入非非"NOR,
        "action"      : "$N使出一招「$a」，十指朝$n全身各大穴連彈",
        "force"       : 450,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIB"呆若木雞"NOR,
        "action"      : "$N突然大聲一喝，使得$n分神，然後趁其不備，一招「$a」往$n的$l擊去",
        "force"       : 450,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : HIC"無中生有"NOR,
        "action"      : "$N一招「$a」，雙手織成重重的掌網，毫不留情的往$n全身罩下",
        "force"       : 450,
        "damage"      : 20,
        "damage_type" : "瘀傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIR"心繫"HIY"龍兒"HIC"空殼身"NOR,
    MAG"追憶"YEL"無用"HIW"悔當初"NOR,
    HIW"走魂"NOR + BLU"奔流"HIR"怒破風"NOR,
    GRN"臥抱"NOR"虛無"HIY"轉騰空"NOR,
    MAG"尋夢"HIC"寒冰"HIW"旁一繩"NOR,
    YEL"雲袖"CYN"重掌"HIM"孤難雙"NOR,
    HIG"崖上"HIR"情花"HIY"哭斷腸"NOR,
    CYN"傲醉"MAG"笑狂"YEL"滅六神"NOR,
    BLU"怒濤"HIY"擊身"HIR"魂欲斷"NOR,
    HIM"俠侶"HIG"絕跡"HIW"活死人"NOR,
    HIW + BLK"黯然"NOR + CYN"銷魂"HIM"夢"HIW"歸天"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N突然無意識般地行走使出一招『$a』，身軀在$n身旁無目的得游移！$n擊向$N身軀，結果勁力被身軀吸入，勁走$N身軀轉由左掌擊出相乘掌力打中$n",
        "force"       : 950,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N背對$n站立，面容中透露出哀傷，一招『$a』，反身往繞到$n背後，單掌擊出，勁力未收再湧進一掌",
        "force"       : 1000,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N身輕如鬼魅，迅影分佈於$n八個方位，一招『$a』，身影從八個方位，掌力如大海奔流匯聚同時擊向$n，猶如有八掌其聚之力，內力所到之處如風行草偃",
        "force"       : 1050,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N突然頓入空想境界，$n見機不可失擊向$N，突然$N一招『$a』，身軀順著$n身形單掌鉤抱，忽覺此人非彼人，驚而借力扭轉，$n無處施力抵抗重摔在地",
        "force"       : 1100,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N一式『$a』擊向$n，右臂雲袖輕柔在$n游去，雲袖猶如細繩般柔韌，突然轉而堅韌，袖尖夾帶貫穿巨石之力往$n周身大穴過去，瞬息萬變之招式使得$n傻在那邊，一時不知所措",
        "force"       : 1150,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N臉色一凝，神色黯淡，右臂雲袖左臂沉掌一招『$a』，雲袖流水輕靈之勢夾帶左掌排山倒海沉重之姿向$n襲去",
        "force"       : 1200,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N突然間言靜神閉縱身一躍，於空中大吼一聲單掌使出一式『$a』，藉著從天而降的掌力及夾帶渾厚內力的聲吼，朝$n擊出地動山崩的一掌",
        "force"       : 1250,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N面色凝重，身形微曲頹廢黯然失智般立於$n面前，$n見機不可失，瞬間從正面攻擊$N，$N突然運起十足內力吼出一招『$a』，吼聲的音波帶著無數掌形朝$n的心、肺、肝、腎、脾、膽六神之處奔流而去",
        "force"       : 1300,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N忽然感念心死正面受$n任何攻擊，卻驚覺要為所念之人活著，但已無從閃躲，於是身軀受到襲擊之力而倒，右臂雲袖纏著$n並扭轉身軀左掌擊地，一招『$a』雙腳如萬馬奔騰之姿夾帶驚滔駭浪之勢朝$n的身軀連踢",
        "force"       : 1350,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N突然神色驟轉，身形奔離$n，已無任何攻擊意念，但$n追趕而至夾帶殺氣朝$N而去，$N怒喝一句“別阻我尋夢”轉身一掌，一招『$a』，往$n擊去",
        "force"       : 1400,
        "damage_type" : "瘀傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N抬頭向天，渾若不見，真氣一提，臉上泛起陣陣紅光，隨即騰空躍起，一招『$a』，居高臨下拍出一掌，由左手中發出一道紅色氣芒朝著$n直去",
        "force"       : 1600,
        "damage_type" : "瘀傷",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level;

    if (me->query("gender") != "男性") {
        return 6;
    }

    action_level = me->query_action_level("soulfist");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("soulfist", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("girlforce", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if (me->query_skill_mapped("force") != "girlforce" || me->query_skill_mapped("unarmed") != "soulfist") {
        return 1;
    }

    if (random(1700) + random(1700) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("soulfist", 1);

        inspiration("\n"
                    HIB"\t武林傳來消息 "HIW + me->query("name") + HIB" 領悟了"BLK"黯然銷魂掌"HIB"之秘招 "HIW"『" + my_attack_name[action_level] + HIW"』\n\n"NOR);
    }
}

int valid_learn(object me) {
    if (me->query("gender") != "男性") {
        return notify_fail("黯然銷魂掌是男子才能練的武功。\n");
    }

    return ::valid_learn(me);
}

mapping query_action(object me) {
    int addition = me->query_action_level("soulfist");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
