#include "gameloophandler.h"
#include "wincasehandler.h"

WinCaseHandler wch;

GameLoopHandler::GameLoopHandler() {

}

// When called it process the turn by setting cellGrid value for future testing, reducing the amout of turns left, after the 4th turn checks if anyone has won and then swtches the turn to the other player.
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

// Return the current turn.
bool GameLoopHandler::currentTurn() {
    return xoTurn;
}

// Retunr if one of the players have won.
bool GameLoopHandler::isVictoryAchived() {
    return isVictory;
}
