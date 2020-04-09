#include "player.h"
#include "card_info.h"
Player::Player(int totalNum)
{
    cout << "plays total num is:" << totalNum << endl;
}

Player::~Player()
{
    cout << "plays delete:" << endl;
}

void Player::ShowCard(const vector<int> &cards)
{
    for(vector<int>::const_iterator iter = cards.begin(); iter != cards.end(); iter++) {
        cout << *iter << ",";
    }
    cout << endl;
//    for(vector<int>::const_iterator iter = cards.begin(); iter != cards.end(); iter++) {
//        cout << cardInfo[*iter - 1].num << ",";
//    }
//    cout << endl;
}