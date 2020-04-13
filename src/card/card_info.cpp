#include <iostream>
#include <vector>
#include "../card/card_info.h"
#include "../player/player.h"
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

string cardShowName[] = {
    "",
    //基本牌
        //基础包
    "杀",
    "闪",
    "桃",
    //军争包
    "酒",
    "雷杀",
    "火杀",
    //锦囊牌
        //基础包
        //非延时类锦囊
    "无中生有",
    "过河拆桥",
    "顺手牵羊",
    "决斗",
    "借刀杀人",
    "万箭齐发",
    "南蛮入侵",
    "桃园结义",
    "五谷丰登",
    "无懈可击",
        //延时类锦囊
    "乐不思蜀",
    "闪电",
    //军争包
        //非延时类锦囊
    "火攻",
    "铁索连环",
        //延时类锦囊
    "兵粮寸断",
    //国战包
        //非延时类锦囊
        //延时类锦囊
    //xx包
        //非延时类锦囊
        //延时类锦囊
    //3、装备牌
    //基础包
        //武器
    "诸葛连弩",
    "寒冰剑",
    "雌雄双股剑",
    "青釭剑",
    "青龙偃月刀",
    "丈八蛇矛",
    "贯石斧",
    "方天画戟",
    "麒麟弓",
        //防具
    "八卦阵",
    "仁王盾",
        //马
    "紫骍",
    "赤兔",
    "大宛",
    "的卢",
    "爪黄飞电",
    "绝影",
    //军争包
        //武器
    "古锭刀",
    "朱雀羽扇",
        //防具
    "藤甲",
    "白银狮子",
         //马
    "骅骝",
    //国战包
        //武器
        //防具
        //马
    //xx包
        //武器
        //防具
        // 马
};

CardDetail cardInfo[200] = {
    //第一副牌
    //方片
    {DMD,  1, STRATEGY, IMMEDIATE,   RED,    BASIC,                 JUE_DOU,       "决斗",},
    {DMD,  2,     BASE,  NOTEQUIP,   RED,    BASIC,                    SHAN,         "闪",},
    {DMD,  3,     BASE,  NOTEQUIP,   RED,    BASIC,                    SHAN,         "闪",},
    {DMD,  4,     BASE,  NOTEQUIP,   RED,    BASIC,                    SHAN,         "闪",},
    {DMD,  5,     BASE,  NOTEQUIP,   RED,    BASIC,                    SHAN,         "闪",},
    {DMD,  6,     BASE,  NOTEQUIP,   RED,    BASIC,                     SHA,         "杀",},
    {DMD,  7,     BASE,  NOTEQUIP,   RED,    BASIC,                     SHA,         "杀",},
    {DMD,  8,     BASE,  NOTEQUIP,   RED,    BASIC,                     SHA,         "杀",},
    {DMD,  9,     BASE,  NOTEQUIP,   RED,    BASIC,                     SHA,         "杀",},
    {DMD, 10,     BASE,  NOTEQUIP,   RED,    BASIC,                     SHA,         "杀",},
    {DMD, 11,     BASE,  NOTEQUIP,   RED,    BASIC,                    SHAN,         "闪",},
    {DMD, 12,     BASE,  NOTEQUIP,   RED,    BASIC,                     TAO,         "桃",},
    {DMD, 13,     BASE,  NOTEQUIP,   RED,    BASIC,                     SHA,         "杀",},
    //梅花
    {CLB,  1, STRATEGY, IMMEDIATE, BLACK,    BASIC,                 JUE_DOU,       "决斗",},
    {CLB,  2,     BASE,  NOTEQUIP, BLACK,    BASIC,                     SHA,         "杀",},
    {CLB,  3,     BASE,  NOTEQUIP, BLACK,    BASIC,                     SHA,         "杀",},
    {CLB,  4,     BASE,  NOTEQUIP, BLACK,    BASIC,                     SHA,         "杀",},
    {CLB,  5,     BASE,  NOTEQUIP, BLACK,    BASIC,                     SHA,         "杀",},
    {CLB,  6,     BASE,  NOTEQUIP, BLACK,    BASIC,                     SHA,         "杀",},
    {CLB,  7,     BASE,  NOTEQUIP, BLACK,    BASIC,                     SHA,         "杀",},
    {CLB,  8,     BASE,  NOTEQUIP, BLACK,    BASIC,                     SHA,         "杀",},
    {CLB,  9,     BASE,  NOTEQUIP, BLACK,    BASIC,                     SHA,         "杀",},
    {CLB, 10,     BASE,  NOTEQUIP, BLACK,    BASIC,                     SHA,         "杀",},
    {CLB, 11,     BASE,  NOTEQUIP, BLACK,    BASIC,                     SHA,         "杀",},
    {CLB, 12, STRATEGY, IMMEDIATE, BLACK,    BASIC,         JIE_DAO_SHA_REN,   "借刀杀人",},
    {CLB, 13, STRATEGY, IMMEDIATE, BLACK,    BASIC,         JIE_DAO_SHA_REN,   "借刀杀人",},
    //红桃
    {HRT,  1, STRATEGY, IMMEDIATE,   RED,    BASIC,          WAN_JIAN_QI_FA,   "万箭齐发",},
    {HRT,  2,     BASE,  NOTEQUIP,   RED,    BASIC,                    SHAN,         "闪",},
    {HRT,  3,     BASE,  NOTEQUIP,   RED,    BASIC,                     TAO,         "桃",},
    {HRT,  4,     BASE,  NOTEQUIP,   RED,    BASIC,                     TAO,         "桃",},
    {HRT,  5,    EQUIP, HORSE_ATK,   RED,    BASIC,                  CHI_TU,       "赤兔",},
    {HRT,  6,     BASE,  NOTEQUIP,   RED,    BASIC,                     TAO,         "桃",},
    {HRT,  7,     BASE,  NOTEQUIP,   RED,    BASIC,                     TAO,         "桃",},
    {HRT,  8,     BASE,  NOTEQUIP,   RED,    BASIC,                     TAO,         "桃",},
    {HRT,  9,     BASE,  NOTEQUIP,   RED,    BASIC,                     TAO,         "桃",},
    {HRT, 10,     BASE,  NOTEQUIP,   RED,    BASIC,                     SHA,         "杀",},
    {HRT, 11,     BASE,  NOTEQUIP,   RED,    BASIC,                     SHA,         "杀",},
    {HRT, 12,     BASE,  NOTEQUIP,   RED,    BASIC,                     TAO,         "桃",},
    {HRT, 13,     BASE,  NOTEQUIP,   RED,    BASIC,                    SHAN,         "闪",},
    //黑桃
    {SPD,  1, STRATEGY, IMMEDIATE, BLACK,    BASIC,                 JUE_DOU,       "决斗",},
    {SPD,  2,     BASE,     ARMOR, BLACK,    BASIC,             BA_GUA_ZHEN,     "八卦阵",},
    {SPD,  3, STRATEGY, IMMEDIATE, BLACK,    BASIC,        GUO_HE_CHAI_QIAO,   "过河拆桥",},
    {SPD,  4, STRATEGY, IMMEDIATE, BLACK,    BASIC,        GUO_HE_CHAI_QIAO,   "过河拆桥",},
    {SPD,  5,    EQUIP, HORSE_DEF, BLACK,    BASIC,                JUE_YING,       "绝影",},
    {SPD,  6,    EQUIP,    WEAPON, BLACK,    BASIC,          QING_GANG_JIAN,     "青釭剑",},
    {SPD,  7,     BASE,  NOTEQUIP, BLACK,    BASIC,                     SHA,         "杀",},
    {SPD,  8,     BASE,  NOTEQUIP, BLACK,    BASIC,                     SHA,         "杀",},
    {SPD,  9,     BASE,  NOTEQUIP, BLACK,    BASIC,                     SHA,         "杀",},
    {SPD, 10,     BASE,  NOTEQUIP, BLACK,    BASIC,                     SHA,         "杀",},
    {SPD, 11, STRATEGY, IMMEDIATE, BLACK,    BASIC,     SHUN_SHOU_QIAN_YANG,   "顺手牵羊",},
    {SPD, 12, STRATEGY, IMMEDIATE, BLACK,    BASIC,        GUO_HE_CHAI_QIAO,   "过河拆桥",},
    {SPD, 13,    EQUIP, HORSE_ATK, BLACK,    BASIC,                 DA_YUAN,       "大宛",},
    //第二副牌
    //方片
    {DMD,  1,    EQUIP,    WEAPON,   RED,    BASIC,          ZHU_GE_LIAN_NU,   "诸葛连弩",},
    {DMD,  2,     BASE,  NOTEQUIP,   RED,    BASIC,                    SHAN,         "闪",},
    {DMD,  3, STRATEGY, IMMEDIATE,   RED,    BASIC,     SHUN_SHOU_QIAN_YANG,   "顺手牵羊",},
    {DMD,  4, STRATEGY, IMMEDIATE,   RED,    BASIC,     SHUN_SHOU_QIAN_YANG,   "顺手牵羊",},
    {DMD,  5,    EQUIP,    WEAPON,   RED,    BASIC,             GUAN_SHI_FU,     "贯石斧",},
    {DMD,  6,     BASE,  NOTEQUIP,   RED,    BASIC,                    SHAN,         "闪",},
    {DMD,  7,     BASE,  NOTEQUIP,   RED,    BASIC,                    SHAN,         "闪",},
    {DMD,  8,     BASE,  NOTEQUIP,   RED,    BASIC,                    SHAN,         "闪",},
    {DMD,  9,     BASE,  NOTEQUIP,   RED,    BASIC,                    SHAN,         "闪",},
    {DMD, 10,     BASE,  NOTEQUIP,   RED,    BASIC,                    SHAN,         "闪",},
    {DMD, 11,     BASE,  NOTEQUIP,   RED,    BASIC,                    SHAN,         "闪",},
    {DMD, 12,    EQUIP,    WEAPON,   RED,    BASIC,        FANG_TIAN_HUA_JI,   "方天画戟",},
    {DMD, 13,    EQUIP, HORSE_ATK,   RED,    BASIC,                 ZI_XING,       "紫骍",},
    //梅花                                                                             
    {CLB,  1,    EQUIP,    WEAPON, BLACK,    BASIC,          ZHU_GE_LIAN_NU,   "诸葛连弩",},
    {CLB,  2,    EQUIP,     ARMOR, BLACK,    BASIC,             BA_GUA_ZHEN,    "八卦阵 ",},
    {CLB,  3, STRATEGY, IMMEDIATE, BLACK,    BASIC,        GUO_HE_CHAI_QIAO,   "过河拆桥",},
    {CLB,  4, STRATEGY, IMMEDIATE, BLACK,    BASIC,        GUO_HE_CHAI_QIAO,   "过河拆桥",},
    {CLB,  5,    EQUIP, HORSE_DEF, BLACK,    BASIC,                   DI_LU,       "的卢",},
    {CLB,  6, STRATEGY,     DELAY, BLACK,    BASIC,            LE_BU_SI_SHU,   "乐不思蜀",},
    {CLB,  7, STRATEGY, IMMEDIATE, BLACK,    BASIC,          NAN_MAN_RU_QIN,   "南蛮入侵",},
    {CLB,  8,     BASE,  NOTEQUIP, BLACK,    BASIC,                     SHA,         "杀",},
    {CLB,  9,     BASE,  NOTEQUIP, BLACK,    BASIC,                     SHA,         "杀",},
    {CLB, 10,     BASE,  NOTEQUIP, BLACK,    BASIC,                     SHA,         "杀",},
    {CLB, 11,     BASE,  NOTEQUIP, BLACK,    BASIC,                     SHA,         "杀",},
    {CLB, 12, STRATEGY, IMMEDIATE, BLACK,    BASIC,            WU_XIE_KE_JI,   "无懈可击",},
    {CLB, 13, STRATEGY, IMMEDIATE, BLACK,    BASIC,            WU_XIE_KE_JI,   "无懈可击",},
    //红桃
    {HRT,  1, STRATEGY, IMMEDIATE,   RED,    BASIC,         TAO_YUAN_JIE_YI,   "桃园结义",},
    {HRT,  2,     BASE,  NOTEQUIP,   RED,    BASIC,                    SHAN,         "闪",},
    {HRT,  3, STRATEGY, IMMEDIATE,   RED,    BASIC,         WU_GU_FENG_DENG,   "五谷丰登",},
    {HRT,  4, STRATEGY, IMMEDIATE,   RED,    BASIC,         WU_GU_FENG_DENG,   "五谷丰登",},
    {HRT,  5,    EQUIP,    WEAPON,   RED,    BASIC,             QI_LIN_GONG,     "麒麟弓",},
    {HRT,  6, STRATEGY,     DELAY,   RED,    BASIC,            LE_BU_SI_SHU,   "乐不思蜀",},
    {HRT,  7, STRATEGY, IMMEDIATE,   RED,    BASIC,      WU_ZHONG_SHENG_YOU,   "无中生有",},
    {HRT,  8, STRATEGY, IMMEDIATE,   RED,    BASIC,      WU_ZHONG_SHENG_YOU,   "无中生有",},
    {HRT,  9, STRATEGY, IMMEDIATE,   RED,    BASIC,      WU_ZHONG_SHENG_YOU,   "无中生有",},
    {HRT, 10,     BASE,  NOTEQUIP,   RED,    BASIC,                     SHA,         "杀",},
    {HRT, 11, STRATEGY, IMMEDIATE,   RED,    BASIC,      WU_ZHONG_SHENG_YOU,   "无中生有",},
    {HRT, 12,     BASE,  NOTEQUIP,   RED,    BASIC,        GUO_HE_CHAI_QIAO,   "过河拆桥",},
    {HRT, 13,    EQUIP, HORSE_DEF,   RED,    BASIC,     ZHAO_HUANG_FEI_DIAN,   "爪黄飞电",},
    //黑桃
    {SPD,  1, STRATEGY, IMMEDIATE, BLACK,    BASIC,               SHAN_DIAN,       "闪电",},
    {SPD,  2,    EQUIP,    WEAPON, BLACK,    BASIC, CI_XIONG_SHUANG_GU_JIAN, "雌雄双股剑",},
    {SPD,  3, STRATEGY, IMMEDIATE, BLACK,    BASIC,     SHUN_SHOU_QIAN_YANG,   "顺手牵羊",},
    {SPD,  4, STRATEGY, IMMEDIATE, BLACK,    BASIC,     SHUN_SHOU_QIAN_YANG,   "顺手牵羊",},
    {SPD,  5,    EQUIP,    WEAPON, BLACK,    BASIC,   QING_LNOG_YAN_YUE_DAO, "青龙偃月刀",},
    {SPD,  6, STRATEGY,     DELAY, BLACK,    BASIC,            LE_BU_SI_SHU,   "乐不思蜀",},
    {SPD,  7, STRATEGY, IMMEDIATE, BLACK,    BASIC,          NAN_MAN_RU_QIN,   "南蛮入侵",},
    {SPD,  8,     BASE,  NOTEQUIP, BLACK,    BASIC,                     SHA,         "杀",},
    {SPD,  9,     BASE,  NOTEQUIP, BLACK,    BASIC,                     SHA,         "杀",},
    {SPD, 10,     BASE,  NOTEQUIP, BLACK,    BASIC,                     SHA,         "杀",},
    {SPD, 11, STRATEGY, IMMEDIATE, BLACK,    BASIC,            WU_XIE_KE_JI,   "无懈可击",},
    {SPD, 12,    EQUIP,    WEAPON, BLACK,    BASIC,        ZHANG_BA_SHE_MAO,   "丈八蛇矛",},
    {SPD, 13, STRATEGY, IMMEDIATE, BLACK,    BASIC,          NAN_MAN_RU_QIN,   "南蛮入侵",},
    //标准版4张EX 方块12无懈可击，梅花2仁王盾，红桃12闪电，黑桃2寒冰剑
    {DMD, 12, STRATEGY, IMMEDIATE,   RED,       EX,            WU_XIE_KE_JI,   "无懈可击",},
    {DMD,  2,    EQUIP,     ARMOR, BLACK,       EX,            REN_WANG_DUN,     "仁王盾",},
    {DMD, 12, STRATEGY, IMMEDIATE,   RED,       EX,               SHAN_DIAN,       "闪电",},
    {DMD, 13,    EQUIP,    WEAPON, BLACK,       EX,           HAN_BING_JIAN,     "寒冰剑",},
    //军争包                                                                   
    //方片                                                                     
    {DMD,  1,    EQUIP,    WEAPON,   RED, MILITARY,         ZHU_QUE_YU_SHAN,   "朱雀羽扇",},
    {DMD,  2,     BASE,  NOTEQUIP,   RED, MILITARY,                     TAO,         "桃",},
    {DMD,  3,     BASE,  NOTEQUIP,   RED, MILITARY,                     TAO,         "桃",},
    {DMD,  4,     BASE,  NOTEQUIP,   RED, MILITARY,                 HUO_SHA,       "火杀",},
    {DMD,  5,     BASE,  NOTEQUIP,   RED, MILITARY,                 HUO_SHA,       "火杀",},
    {DMD,  6,     BASE,  NOTEQUIP,   RED, MILITARY,                    SHAN,         "闪",},
    {DMD,  7,     BASE,  NOTEQUIP,   RED, MILITARY,                    SHAN,         "闪",},
    {DMD,  8,     BASE,  NOTEQUIP,   RED, MILITARY,                    SHAN,         "闪",},
    {DMD,  9,     BASE,  NOTEQUIP,   RED, MILITARY,                     JIU,         "酒",},
    {DMD, 10,     BASE,  NOTEQUIP,   RED, MILITARY,                    SHAN,         "闪",},
    {DMD, 11,     BASE,  NOTEQUIP,   RED, MILITARY,                    SHAN,         "闪",},
    {DMD, 12, STRATEGY, IMMEDIATE,   RED, MILITARY,                HUO_GONG,       "火攻",},
    {DMD, 13,    EQUIP, HORSE_DEF,   RED, MILITARY,                 HUA_LIU,       "骅骝",},
    //梅花                                                                             
    {CLB,  1,    EQUIP,     ARMOR, BLACK, MILITARY,          BAI_YIN_SHI_ZI,   "白银狮子",},
    {CLB,  2,    EQUIP,     ARMOR, BLACK, MILITARY,                TENG_JIA,      "藤甲 ",},
    {CLB,  3,     BASE,  NOTEQUIP, BLACK, MILITARY,                     JIU,         "酒",},
    {CLB,  4, STRATEGY,     DELAY, BLACK, MILITARY,     BING_LIANG_CUN_DUAN,   "兵粮寸断",},
    {CLB,  5,     BASE,  NOTEQUIP, BLACK, MILITARY,                 LEI_SHA,       "雷杀",},
    {CLB,  6,     BASE,  NOTEQUIP, BLACK, MILITARY,                 LEI_SHA,       "雷杀",},
    {CLB,  7,     BASE,  NOTEQUIP, BLACK, MILITARY,                 LEI_SHA,       "雷杀",},
    {CLB,  8,     BASE,  NOTEQUIP, BLACK, MILITARY,                 LEI_SHA,       "雷杀",},
    {CLB,  9,     BASE,  NOTEQUIP, BLACK, MILITARY,                     JIU,         "酒",},
    {CLB, 10, STRATEGY, IMMEDIATE, BLACK, MILITARY,       TIE_SUO_LIAN_HUAN,   "铁索连环",},
    {CLB, 11, STRATEGY, IMMEDIATE, BLACK, MILITARY,       TIE_SUO_LIAN_HUAN,   "铁索连环",},
    {CLB, 12, STRATEGY, IMMEDIATE, BLACK, MILITARY,       TIE_SUO_LIAN_HUAN,   "铁索连环",},
    {CLB, 13, STRATEGY, IMMEDIATE, BLACK, MILITARY,       TIE_SUO_LIAN_HUAN,   "铁索连环",},
    //红桃                                                                             
    {HRT,  1, STRATEGY, IMMEDIATE,   RED, MILITARY,            WU_XIE_KE_JI,   "无懈可击",},
    {HRT,  2, STRATEGY, IMMEDIATE,   RED, MILITARY,                HUO_GONG,       "火攻",},
    {HRT,  3, STRATEGY, IMMEDIATE,   RED, MILITARY,                HUO_GONG,       "火攻",},
    {HRT,  4,     BASE,  NOTEQUIP,   RED, MILITARY,                 HUO_SHA,       "火杀",},
    {HRT,  5,     BASE,  NOTEQUIP,   RED, MILITARY,                     TAO,         "桃",},
    {HRT,  6,     BASE,  NOTEQUIP,   RED, MILITARY,                     TAO,         "桃",},
    {HRT,  7,     BASE,  NOTEQUIP,   RED, MILITARY,                 HUO_SHA,       "火杀",},
    {HRT,  8,     BASE,  NOTEQUIP,   RED, MILITARY,                    SHAN,         "闪",},
    {HRT,  9,     BASE,  NOTEQUIP,   RED, MILITARY,                    SHAN,         "闪",},
    {HRT, 10,     BASE,  NOTEQUIP,   RED, MILITARY,                 HUO_SHA,       "火杀",},
    {HRT, 11,     BASE,  NOTEQUIP,   RED, MILITARY,                    SHAN,         "闪",},
    {HRT, 12,     BASE,  NOTEQUIP,   RED, MILITARY,                    SHAN,         "闪",},
    {HRT, 13, STRATEGY, IMMEDIATE,   RED, MILITARY,            WU_XIE_KE_JI,   "无懈可击",},
    //黑桃                                                                     
    {SPD,  1,    EQUIP,    WEAPON, BLACK, MILITARY,             GU_DING_DAO,     "古锭刀",},
    {SPD,  2,    EQUIP,     ARMOR, BLACK, MILITARY,                TENG_JIA,       "藤甲",},
    {SPD,  3,     BASE,  NOTEQUIP, BLACK, MILITARY,                     JIU,         "酒",},
    {SPD,  4,     BASE,  NOTEQUIP, BLACK, MILITARY,                 LEI_SHA,       "雷杀",},
    {SPD,  5,    EQUIP,    WEAPON, BLACK, MILITARY,                 LEI_SHA,       "雷杀",},
    {SPD,  6,     BASE,  NOTEQUIP, BLACK, MILITARY,                 LEI_SHA,       "雷杀",},
    {SPD,  7,     BASE,  NOTEQUIP, BLACK, MILITARY,                 LEI_SHA,       "雷杀",},
    {SPD,  8,     BASE,  NOTEQUIP, BLACK, MILITARY,                 LEI_SHA,       "雷杀",},
    {SPD,  9,     BASE,  NOTEQUIP, BLACK, MILITARY,                     JIU,         "酒",},
    {SPD, 10, STRATEGY,     DELAY, BLACK, MILITARY,     BING_LIANG_CUN_DUAN,   "兵粮寸断",},
    {SPD, 11, STRATEGY, IMMEDIATE, BLACK, MILITARY,       TIE_SUO_LIAN_HUAN,   "铁索连环",},
    {SPD, 12, STRATEGY, IMMEDIATE, BLACK, MILITARY,       TIE_SUO_LIAN_HUAN,   "铁索连环",},
    {SPD, 13, STRATEGY, IMMEDIATE, BLACK, MILITARY,            WU_XIE_KE_JI,   "无懈可击",},
};

void Card::InitCards()
{
    for(int i = 0; i < 108; i++) {
        totalCards.push_back(i + 1);
        surplusCards.push_back(i + 1);
    }
}

void Card::ShowCards(const vector<int> &cards)
{
    cout << "-------- 剩余牌堆如下 --------" << endl;
//    for(vector<int>::const_iterator iter = cards.begin(); iter != cards.end(); iter++) {
//        cout << *iter << ",";
//    }
//    cout << endl;
    for(vector<int>::const_iterator iter = cards.begin(); iter != cards.end(); iter++) {
        cout << cardInfo[*iter - 1].name << ",";
    }
    cout << endl;
}

void Card::ReshuffleCards(vector<int> &cards)
{
    srand(time(NULL));
    random_shuffle(cards.begin(), cards.end());
}

void Card::Start(vector<int> &cards, vector<Player> &player, int playerTotalNum)
{
    vector<int>::iterator dealingCard = cards.begin();
    for (int i = 0; i < playerTotalNum; i++) {
        for (int j = 0; j < START_CARD_NUM; j++) {
            player[i].currCards.push_back(*dealingCard);
            cards.erase(dealingCard);
        }
    }
}