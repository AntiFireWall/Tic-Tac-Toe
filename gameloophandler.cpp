#include "gameloophandler.h"
#include "wincasehandler.h"

WinCaseHandler wch;

GameLoopHandler::GameLoopHandler() {

}

bool GameLoopHandler::processTurn(int id) {
    wch.setCellValue(id, xoTurn);
    turnsLeft--;
    if(turnsLeft <= 4) {
        isVictory = wch.testForVictory(id, xoTurn);
        if(isVictory) {
            return true;
        }
    }
    xoTurn = not xoTurn;
    return turnsLeft == 0;
}

bool GameLoopHandler::currentTurn() {
    return xoTurn;
}

bool GameLoopHandler::isVictoryAchived() {
    return isVictory;
}
