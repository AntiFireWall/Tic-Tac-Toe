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
    bool xoTurn = true; // Tracks which players turn it is(True -> X, False -> O).
    int turnsLeft = 9; // Tracks how many turns are left.
    bool isVictory = false;
};

#endif // GAMELOOPHANDLER_H
