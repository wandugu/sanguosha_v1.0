#include <iostream>
#include <vector>
#include "card_info.h"
#include "player.h"
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

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

