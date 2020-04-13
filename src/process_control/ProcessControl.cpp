//
// Created by wandugu on 2020/04/12.
//

#include "ProcessControl.h"

void ProcessControl::GameStart(Card *card, vector<Player> &player)
{
    card->InitCards();
    card->ReshuffleCards(card->surplusCards);
    card->ShowCards(card->surplusCards);
    cout << "-------- 游戏开始发牌 --------" << endl;
    card->Start(card->surplusCards, player, player.size());
    for (int i = 0; i < player.size(); i++) {
        cout << "玩家" << i << "此时的牌是：";
        player[i].ShowCards(player[i].currCards);
    }
    card->ShowCards(card->surplusCards);
}

void ProcessControl::PhaseOfStart(Card *card, Player &player, const int playNum)
{
    cout << "-------- 回合开始 --------" << endl;
}

void ProcessControl::PhaseOfPrepare(Card *card, Player &player, const int playNum)
{
    cout << "-------- 准备阶段 --------" << endl;
}

void ProcessControl::PhaseOfDrawCards(Card *card, Player &player, const int playNum)
{
    cout << "-------- 摸牌阶段 --------" << endl;
//        cout << "玩家" << i << "摸牌" << endl;
        player.DrawCards(card->surplusCards, nullptr);
        cout << "玩家" << playNum << "此时的牌是：";
        player.ShowCards(player.currCards);
}

void ProcessControl::PhaseOfPlayCards(Card *card, Player &player, const int playNum)
{
    cout << "-------- 出牌阶段 --------" << endl;
}

void ProcessControl::PhaseOfDiscardCards(Card *card, Player &player, const int playNum)
{
    cout << "-------- 弃牌阶段 --------" << endl;
}

void ProcessControl::PhaseOfEnd(Card *card, Player &player, const int playNum)
{
    cout << "-------- 回合结束 --------" << endl;
}