#include <iostream>
#include "card_info.h"
#include "player.h"

int main() {
    Card *card = new Card;
    card->InitCards();
    card->ReshuffleCards(card->surplusCards);
    card->ShowCards(card->surplusCards);
    vector<Player> player(3, 3);

    card->Start(card->surplusCards, player, 3);
    player[0].ShowCards(player[0].currCards);
    player[1].ShowCards(player[1].currCards);
    player[2].ShowCards(player[2].currCards);
    card->ShowCards(card->surplusCards);
    cout << "wan" << endl;
    system("pause");
    return 0;
}
