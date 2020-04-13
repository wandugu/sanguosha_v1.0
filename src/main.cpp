#include <iostream>
#include "card/card_info.h"
#include "player/player.h"
#include "hero/soldier.h"
#include "process_control/ProcessControl.h"

int main() {
    cout << "-------- 游戏开始 --------" << endl;
    ProcessControl *processControl = new ProcessControl();
    Card *card = new Card;
    vector<Player> player(3, 3);
    processControl->GameStart(card, player);
    for (int i = 0; i < player.size(); i++) {
        cout << "-------- 玩家" << i << "开始行动-------- " << endl;
        processControl->PhaseOfStart(card, player[i], i);
        processControl->PhaseOfPrepare(card, player[i], i);
        processControl->PhaseOfDrawCards(card, player[i], i);
        processControl->PhaseOfPlayCards(card, player[i], i);
        processControl->PhaseOfDiscardCards(card, player[i], i);
        processControl->PhaseOfEnd(card, player[i], i);
        cout << "-------- 玩家" << i << "行动结束 --------" << endl;
    }
    cout << "-------- 游戏结束 --------" << endl;
    system("pause");
    return 0;
}
