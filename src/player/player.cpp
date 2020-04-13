#include "player.h"
#include "../card/card_info.h"

extern CardDetail cardInfo[200];

Player::Player(int totalNum)
{
    this->totalNum = totalNum;
    cout << "-------- 本次游戏共有" << totalNum << "名玩家 --------"<<endl;
}

Player::~Player()
{
//    cout << "players delete:" << endl;
}

Player::Player(const Player &player)
{
    this->totalNum = player.totalNum;
//    cout << "copy construct" << endl;
}

void Player::ShowCards(const vector<int> &cards)
{
//    for(vector<int>::const_iterator iter = cards.begin(); iter != cards.end(); iter++) {
//        cout << *iter << ",";
//    }
//    cout << endl;
    for(vector<int>::const_iterator iter = cards.begin(); iter != cards.end(); iter++) {
        cout << cardInfo[*iter - 1].name << ",";
    }
    cout << endl;
}

void Player::DrawCards(vector<int> &cards, HeroSkill heroSkill)
{
    vector<int>::iterator dealingCard = cards.begin();
    for (int i = 0; i < 2; i++) {
        this->currCards.push_back(*dealingCard);
        cards.erase(dealingCard);
    }
}