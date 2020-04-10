#ifndef SANGUOSHA_CARD_INFO_H
#define SANGUOSHA_CARD_INFO_H

#include <iostream>
#include <vector>
#include <string>
#include "player.h"

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
	int name;
	string description;
//    int totalNum;
} CardDetail;

enum {
	DMD = 1, //DIAMOND
	CLB = 2,//CLUB,
	HRT = 3,//HEART,
	SPD = 4,//SPADE,
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
	//基本牌
		//基础包
	SHA = 1,
	SHAN,
	TAO,
		//军争包
	JIU,
	//锦囊牌
		//基础包
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
		//军争包
	//装备牌
		//基础包
	
	
} CardName;

#endif //SANGUOSHA_CARD_INFO_H
