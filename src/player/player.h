#ifndef SANGUOSHA_PLAYER_H
#define SANGUOSHA_PLAYER_H

#include <iostream>
#include <vector>

using namespace std;

class Player {
public:
    Player();
    Player(int playTotalNum);
    Player(const Player &player);
    virtual ~Player();
    void InitCards();
    void TurnStart();
    void TurnPrepare();
    void DrawCards();
    void PlayCards();
    void DiscardCards();
    void TurnEnd();
    void ShowCards(const vector<int> &cards);
    vector<int> currCards;
    int totalNum;
    int identity;
    int health;
    int nickName;
private:

};


#endif //SANGUOSHA_PLAYER_H
