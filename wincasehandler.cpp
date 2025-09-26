#include "wincasehandler.h"

WinCaseHandler::WinCaseHandler() {
    cellGrid = {
        {"", "", ""},
        {"", "", ""},
        {"", "", ""}
    };

    topRow = {cellGrid[0][0], cellGrid[0][1], cellGrid[0][2]};
    middleRow = {cellGrid[1][0], cellGrid[1][1], cellGrid[1][2]};
    bottomRow = {cellGrid[2][0], cellGrid[2][1], cellGrid[2][2]};
    leftColumn = {cellGrid[0][0], cellGrid[1][0], cellGrid[2][0]};
    middleColumn = {cellGrid[0][1], cellGrid[1][1], cellGrid[2][1]};
    rightColumn = {cellGrid[0][2], cellGrid[1][2], cellGrid[2][2]};
    leftToRightDiagonal = {cellGrid[0][0], cellGrid[1][1], cellGrid[2][2]};
    rightToLeftDiagonal = {cellGrid[0][2], cellGrid[1][1], cellGrid[2][0]};
}

void WinCaseHandler::setCellValue(int id, bool turn) {
    int cellGridRow = (id <= 3) ? 0 :
                      (id <= 6) ? 1 :
                      2;
    int cellGridColumn = (id == 1 || id == 4 || id == 7) ? 0 :
                         (id == 2 || id == 5 || id == 8) ? 1 :
                         2;
    QString xoTurn = turn ? "X" : "O";
    cellGrid[cellGridRow][cellGridColumn] = xoTurn;
}

bool WinCaseHandler::testVector(vector<reference_wrapper<QString>>& testCase, bool turn) {
    bool isComplete = true;
    QString xo = turn ? "X" : "O";
    for (QString cell : testCase) {
        if(cell != xo) {
            isComplete = false;
            break;
        }
    }
    return isComplete;
}

bool WinCaseHandler::testCorners(int id, bool turn) {
    switch(id) {
    case 1:
        return testVector(topRow, turn) || testVector(leftToRightDiagonal, turn) || testVector(leftColumn, turn);
        break;
    case 3:
        return testVector(topRow, turn) || testVector(rightToLeftDiagonal, turn) || testVector(rightColumn, turn);
        break;
    case 7:
        return testVector(bottomRow, turn) || testVector(rightToLeftDiagonal, turn) || testVector(leftColumn, turn);
        break;
    case 9:
        return testVector(bottomRow, turn) || testVector(leftToRightDiagonal, turn) || testVector(rightColumn, turn);
        break;
    }
    return false;
}

bool WinCaseHandler::testEdgeMiddles(int id, bool turn) {
    switch(id) {
    case 2:
        return testVector(topRow, turn) || testVector(middleColumn, turn);
        break;
    case 4:
        return testVector(middleRow, turn) || testVector(leftColumn, turn);
        break;
    case 6:
        return testVector(middleRow, turn) || testVector(rightColumn, turn);
        break;
    case 8:
        return testVector(bottomRow, turn) || testVector(middleColumn, turn);
        break;
    }
    return false;
}

bool WinCaseHandler::testMiddle(bool turn) {
    return testVector(leftToRightDiagonal, turn) || testVector(middleColumn, turn) || testVector(rightToLeftDiagonal, turn) || testVector(middleRow, turn);
}

bool WinCaseHandler::testForVictory(int id, bool turn) {
    switch(id) {
        // Corners
        case 1:
        case 3:
        case 7:
        case 9:
            return testCorners(id, turn);
            break;

        // Edge Middles
        case 2:
        case 4:
        case 6:
        case 8:
            return testEdgeMiddles(id, turn);
            break;

        // Middle
        case 5:
            return testMiddle(turn);
        break;
    }

    return false;
}
