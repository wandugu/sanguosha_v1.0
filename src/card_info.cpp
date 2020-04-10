#include <iostream>
#include <vector>
#include "card_info.h"
#include "player.h"
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
        //锦囊牌
            //基础包
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
            //军争包
        //装备牌
            //基础包
};

CardDetail cardInfo[200] = {
        {DMD,  1, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  2, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  3, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  4, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  5, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  6, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  7, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  8, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  9, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 10, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 11, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 12, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 13, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  1, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  2, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  3, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  4, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  5, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  6, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  7, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  8, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  9, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 10, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 11, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 12, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 13, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  1, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  2, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  3, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  4, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  5, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  6, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  7, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  8, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  9, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 10, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 11, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 12, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 13, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  1, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  2, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  3, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  4, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  5, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  6, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  7, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  8, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  9, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 10, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 11, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 12, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 13, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  1, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  2, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  3, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  4, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  5, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  6, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  7, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  8, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  9, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 10, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 11, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 12, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 13, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  1, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  2, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  3, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  4, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  5, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  6, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  7, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  8, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  9, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 10, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 11, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 12, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 13, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  1, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  2, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  3, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  4, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  5, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  6, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  7, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  8, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  9, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 10, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 11, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 12, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 13, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  1, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  2, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  3, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  4, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  5, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  6, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  7, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  8, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD,  9, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 10, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 11, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 12, BASE, NOTEQUIP, RED, BASIC, SHA},
        {DMD, 13, BASE, NOTEQUIP, RED, BASIC, SHA},
};

void Card::InitCards()
{
    for(int i = 0; i < 54; i++) {
        totalCards.push_back(i + 1);
        surplusCards.push_back(i + 1);
    }
}

void Card::ShowCards(const vector<int> &cards)
{
    for(vector<int>::const_iterator iter = cards.begin(); iter != cards.end(); iter++) {
        cout << *iter << ",";
    }
    cout << endl;
    for(vector<int>::const_iterator iter = cards.begin(); iter != cards.end(); iter++) {
        cout << cardInfo[*iter - 1].num << ",";
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