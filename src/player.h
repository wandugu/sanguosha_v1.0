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
    ~Player();
    void InitCard();
    void DrawCard();
    void ShowCard(const vector<int> &cards);
    vector<int> currCards;
    int totalNum;
private:

};


#endif //SANGUOSHA_PLAYER_H
