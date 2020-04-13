//
// Created by wandugu on 2020/04/12.
//

#ifndef SANGUOSHA_PROCESSCONTROL_H
#define SANGUOSHA_PROCESSCONTROL_H

#include "../player/player.h"
#include "../card/card_info.h"

class ProcessControl {
public:
    void GameStart(Card *card, vector<Player> &player);
    void GamePlaying(Card *card, vector<Player> &player);
    void PhaseOfStart(Card *card, Player &player, const int playNum);
    void PhaseOfPrepare(Card *card, Player &player, const int playNum);
    void PhaseOfDrawCards(Card *card, Player &player, const int playNum);
    void PhaseOfPlayCards(Card *card, Player &player, const int playNum);
    void PhaseOfDiscardCards(Card *card, Player &player, const int playNum);
    void PhaseOfEnd(Card *card, Player &player, const int playNum);
};


#endif //SANGUOSHA_PROCESSCONTROL_H
