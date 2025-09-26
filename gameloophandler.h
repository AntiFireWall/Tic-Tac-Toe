#ifndef GAMELOOPHANDLER_H
#define GAMELOOPHANDLER_H

class GameLoopHandler
{
public:
    GameLoopHandler();
    bool processTurn(int id);
    bool currentTurn();
    bool isVictoryAchived();

private:
    bool xoTurn = true;
    int turnsLeft = 9;
    bool isVictory = false;
};

#endif // GAMELOOPHANDLER_H
