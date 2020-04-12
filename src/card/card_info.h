#ifndef SANGUOSHA_CARD_INFO_H
#define SANGUOSHA_CARD_INFO_H

#include <iostream>
#include <vector>
#include <string>
#include "../player/player.h"

using namespace std;

const int START_CARD_NUM = 4;

class Card
{
public:
    void InitCards();
    void ShowCards(const vector<int> &cards);
    void ReshuffleCards(vector<int> &cards);
    void Start(vector<int> &cards, vector<Player> &player, int playerTotalNum);
    vector<int> totalCards;
    vector<int> surplusCards;
    vector<int> discardedCards;
private:

};

typedef struct cardDetail
{
    int suit;
    int num;
	int type;
	int equipType;
	int color;
	int belongToPack;
	int nameNum;
	string name;
	string description;
//    int totalNum;
} CardDetail;

enum {
	DMD = 1,    // DIAMOND
	CLB = 2,    // CLUB,
	HRT = 3,    // HEART,
	SPD = 4,    // SPADE,
} CardSuit;

enum {
	BASE     = 1,
	EQUIP    = 2,
	STRATEGY = 3,
} CardType;

enum {
	NOTEQUIP  = 0,
	WEAPON    = 1,
	ARMOR     = 2,
	HORSE_DEF = 3,
	HORSE_ATK = 4,
    IMMEDIATE,
    DELAY,
} CardEquipType;

enum {
	RED   = 0,
	BLACK,
} CardColor;

enum {
	BASIC    = 0,
	EX,
	MILITARY,
} CardPackage;

enum {
    //1、基本牌
    //基础包
    SHA = 1, //杀
    SHAN, //闪
    TAO, //桃
    //军争包
    LEI_SHA,
    HUO_SHA,
    JIU, //酒
    //2、锦囊牌
    //基础包
    //非延时类锦囊
    WU_ZHONG_SHENG_YOU,
    GUO_HE_CHAI_QIAO,
    SHUN_SHOU_QIAN_YANG,
    JUE_DOU,
    JIE_DAO_SHA_REN,
    WAN_JIAN_QI_FA,
    NAN_MAN_RU_QIN,
    TAO_YUAN_JIE_YI,
    WU_GU_FENG_DENG,
    WU_XIE_KE_JI,
    //延时类锦囊
    LE_BU_SI_SHU,
    SHAN_DIAN,
    //军争包
    //非延时类锦囊
    HUO_GONG,
    TIE_SUO_LIAN_HUAN,
    //延时类锦囊
    BING_LIANG_CUN_DUAN,
    //国战包
    //非延时类锦囊
    //延时类锦囊
    //xx包
    //非延时类锦囊
    //延时类锦囊
    //3、装备牌
    //基础包
    //武器
    ZHU_GE_LIAN_NU,
    HAN_BING_JIAN,
    CI_XIONG_SHUANG_GU_JIAN,
    QING_GANG_JIAN,
    QING_LNOG_YAN_YUE_DAO,
    ZHANG_BA_SHE_MAO,
    GUAN_SHI_FU,
    FANG_TIAN_HUA_JI,
    QI_LIN_GONG,
//防具
    BA_GUA_ZHEN,
    REN_WANG_DUN,
//马
    ZI_XING,
    CHI_TU,
    DA_YUAN,
    DI_LU,
    ZHAO_HUANG_FEI_DIAN,
    JUE_YING,
//军争包
//武器
    GU_DING_DAO,
    ZHU_QUE_YU_SHAN,
//防具
    TENG_JIA,
    BAI_YIN_SHI_ZI,
//马
    HUA_LIU,
//国战包
//武器
//防具
//马
//xx包
//武器
//防具
//马
//总计
    ALL_KIND_OF_CARD,
} CardName;

#endif //SANGUOSHA_CARD_INFO_H
