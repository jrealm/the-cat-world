inherit "/std/skill/blade";

void create() {
    name = "血刀刀法";
}

mapping *action = ({
    ([
        "name"        : HIG"鐵血丹青"NOR,
        "action"      : "$N身形一轉，一招「$a」，手中$w猛地向$n的$l斬去",
        "damage"      : 50,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIB"腥風血雨"NOR,
        "action"      : "$N一個俯身衝刺，手中$w隨著一招「$a」由下而上撩往$n的$l",
        "damage"      : 55,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : CYN"碧血青天"NOR,
        "action"      : "$N身影忽變，一招「$a」刀光不定，斬向$n的$l",
        "damage"      : 55,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIY"狂龍嘯血"NOR,
        "action"      : "$N舞動$w，一招「$a」迅捷無倫地劈向$n的$l",
        "damage"      : 55,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : HIR"血濺當場"NOR,
        "action"      : "$N手中$w一晃，一招「$a」往$n的$l斜斜砍出一刀",
        "damage"      : 55,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : HIM"茹毛飲血"NOR,
        "action"      : "$N提刀過肩，蓄勁發力，一招「$a」直劈$n$l",
        "damage"      : 55,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : RED"血流如注"NOR,
        "action"      : "$N移步側身，使一招「$a」刀光霍霍斬向$n的$l",
        "damage"      : 55,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : BLU"批紙削腐"NOR,
        "action"      : "$N連揮手中$w，一招「$a」不偏不倚的往$n的$l砍去",
        "damage"      : 55,
        "damage_type" : "斲傷",
    ]),
    ([
        "name"        : YEL"嘔心瀝血"NOR,
        "action"      : "$N雙臂高舉，將內力灌於$w之上，一招「$a」直往$n頭上砍去",
        "damage"      : 55,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : HIC"流星經天"NOR,
        "action"      : "$N使足勁力將$w筆直扔出，一招「$a」直探$n的$l",
        "damage"      : 55,
        "damage_type" : "刺傷",
    ]),
});

int size_of_action = sizeof(action);

string *my_attack_name = ({
    HIR"血魔"HIW"祭出驚天地"NOR,
    HIR"血濺"HIY"奈何無路返"NOR,
    HIR"血花"HIG"片片隨風飄"NOR,
    HIY"刀手"HIB"江湖"HIR"血染途"NOR,
    HIW"意亂"HIY"刀狂"HIR"血奔騰"NOR,
    HIR"血洗"HIM"武林泣鬼神"NOR,
    HIY"刀分"HIC"江湖"HIR"血噬敵"NOR,
    HIW"骨肉分離"HIR"血綿綿"NOR,
    RED"血河無涯一刀行"NOR,
    HIR"血染"HIG"山河"HIW"渡蒼生"NOR,
    HIR"血海"HIB"狂濤"HIG"霸天下"NOR,
});

mapping *my_action = ({
    ([
        "name"        : my_attack_name[0],
        "action"      : "$N將內力傳至刀刃，伴隨著$w的靈氣，使出了血刀刀法中最駭人聽聞的一招『$a』，人刀一體，朝$n不要命的衝去",
        "damage"      : 80,
        "damage_type" : "刺傷",
    ]),
    ([
        "name"        : my_attack_name[1],
        "action"      : "$N一刀架開$n的攻勢，$n只感虎口隱隱生痛，$N力灌手中$w，一刀緩緩橫劈向$n，但招不到老，隨即刀勢立改，由下而上，刀勢剛猛！一式『$a』斬向$n的$l",
        "damage"      : 110,
        "damage_type" : "傷口噴出了一大片血霧，染紅了戰場四周",
    ]),
    ([
        "name"        : my_attack_name[2],
        "action"      : "$N趁著$n一個不留神而失誤所造成的空檔，使出了血刀秘招『$a』，$N手中的$w構成了一大片刀網，罩向$n",
        "damage"      : 140,
        "damage_type" : "身上留下了無數的刀痕，血流汨汨、景象可怖",
    ]),
    ([
        "name"        : my_attack_name[3],
        "action"      : "$N祭起了一式『$a』，順手將$w往地上一插，左手手按刀柄，右手使了一個掌刀向上揮去，氣刀卻從體內猛然突出",
        "damage"      : 170,
        "damage_type" : "受到鋒勁的猛擊，不由自主的吐了一大口鮮血。",
    ]),
    ([
        "name"        : my_attack_name[4],
        "action"      : "$N向前疾衝，使出一式『$a』，刀勢鋪開竟然密不透光，將$n完全封死，就似天地之大無一處容身",
        "damage"      : 200,
        "damage_type" : "身中數刀，往一旁跌去",
    ]),
    ([
        "name"        : my_attack_name[5],
        "action"      : "$N精熟的刀法修為，精妙地配合著$w，朝著$n砍出數十道刀氣，隨後並提$w向$n發動後續攻勢『$a』",
        "damage"      : 210,
        "damage_type" : "身上留下了無數的刀痕，血流汨汨、景象可怖",
    ]),
    ([
        "name"        : my_attack_name[6],
        "action"      : "$N趁著$n一個不留神而失誤所造成的空檔，使出了血刀秘招『$a』，$N手中的$w構成了一大片刀網，罩向$n",
        "damage"      : 220,
        "damage_type" : "身上留下了無數的刀痕，血流汨汨、景象可怖",
    ]),
    ([
        "name"        : my_attack_name[7],
        "action"      : "$N身形急旋，$w使出一式『$a』，猛然舉起$w，刀勢快如疾電，其勢將$n削骨割膚，骨肉分家",
        "damage"      : 230,
        "damage_type" : "傷可見骨、血流成河",
    ]),
    ([
        "name"        : my_attack_name[8],
        "action"      : "$N感受到$n強不可撼，無奈輕嘆『$a』應聲而出，絲毫不顧滿身的傷勢，手中$w摻雜著熱血，勢要與$n同歸於盡",
        "damage"      : 250,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[9],
        "action"      : "$N倏地左腳踏前，陡然滑出數尺，右手順著來勢一招『$a』往$n右腿斬去",
        "damage"      : 300,
        "damage_type" : "割傷",
    ]),
    ([
        "name"        : my_attack_name[10],
        "action"      : "$N用$w對空掃出陣陣颶風，正當$n站不穩之際，$N使出了血刀刀法的『$a』，$N手持著$w配合著颶風向前攻去，有如滔天巨浪般兇猛的氣勢，朝著$n的腦門連砍數十刀",
        "damage"      : 300,
        "damage_type" : "受的傷，就算神醫在場也將搖頭嘆息",
    ]),
});

int size_of_my_action = sizeof(my_action);

varargs int improve_new_action(object me, int flag) {
    int action_level = me->query_action_level("bloodblade");

    if (action_level >= size_of_my_action) {
        return 9;
    }

    if (me->query_skill("bloodblade", 1) < 150 + (action_level * 30)) {
        return 3;
    }

    if (me->query_skill("godlight", 1) < 211) {
        return 4;
    }

    if (flag) {
        return 0;
    }

    if ((me->query_skill_mapped("force")) != "godlight" || me->query_skill_mapped("blade") != "bloodblade") {
        return 1;
    }

    if (random(1700) + random(1700) < diminishing(me->query_attr("int", 1), 30)) {
        me->improve_action_level("bloodblade", 1);

        inspiration("\n"
                    HIY"武林傳來消息 " + me->query("name") + HIY" 領悟了血刀刀法一個秘招 『"BMAG + my_attack_name[action_level] + HIY"』！！\n\n"NOR);
    }
}

mapping query_action(object me) {
    int addition = me->query_action_level("bloodblade");

    if (addition) {
        if (random(100) < addition * 50 / size_of_my_action) {
            return my_action[random(addition)];
        }
    }

    return action[random(size_of_action)];
}
