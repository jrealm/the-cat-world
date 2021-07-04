inherit "/std/skill/dodge";

void create() {
    name = "般若行步";

    actions = ({
        "只見$n腳尖往左大步跨去「"HIG"觀自在菩薩行"NOR"」，身子卻像右飄，$N突然向$n發招，這一招用力過猛又打不到$n，$N失去了平衡，跌了個狗吃屎～。\n",
        "$n口中南無一聲，「"HIB"度一切苦厄"NOR"」就飛身往$N頭上一踩，輕鬆的閃開$N的攻擊。\n",
        "$n心無所想，「"HIY"無受想行識"NOR"」，受到了$N的攻擊，卻彷彿不受力般，瞬間飄到了$N的身後。\n",
        "$n閉起眼睛，低聲沈吟～「"HIR"心無罣礙"NOR"」，突然消失在$N眼前，閃過了$N這強力一擊。\n",
        "$n使出「"HIC"遠離顛倒夢想"NOR"」，身體呈現透明狀，$N的攻擊居然穿透了$n的身體。\n",
        "$n全身散發出光芒，猛然喝到！「"HIM"般若波羅蜜！"NOR"」，$N一時呆住，忘了要怎樣攻擊！。\n",
    });
}

int valid_learn(object me) {
    if (me->query("gender") != "男性") {
        return notify_fail("般若行步只有男性才能練。\n");
    }

    return 1;
}
