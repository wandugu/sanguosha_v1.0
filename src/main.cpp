#include <iostream>
#include "card/card_info.h"
#include "player/player.h"
#include "hero/soldier.h"
#include "process_control/ProcessControl.h"

int main() {

    ProcessControl *processControl = new ProcessControl();
    processControl->GameStart();
    cout << "Game End" << endl;
    system("pause");
    return 0;
}
