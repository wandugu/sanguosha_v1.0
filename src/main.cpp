#include <iostream>
#include "card_info.h"
#include "player.h"

int main() {
    Card *card = new Card;
    card->InitCards();
    card->ShowCards(card->surplusCards);
    card->ReshuffleCards(card->surplusCards);
    card->ShowCards(card->surplusCards);
    Player *player = new Player(3);

    cout << "wan" << endl;
    system("pause");
    return 0;
}
