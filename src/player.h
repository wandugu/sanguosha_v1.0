#ifndef SANGUOSHA_PLAYER_H
#define SANGUOSHA_PLAYER_H

#include <iostream>
#include <vector>

using namespace std;

class Player {
public:
    Player();
    Player(int playTotalNum);
    ~Player();

    void InitCard();
    void DrawCard();

private:
    vector<int> currCards;
};


#endif //SANGUOSHA_PLAYER_H
