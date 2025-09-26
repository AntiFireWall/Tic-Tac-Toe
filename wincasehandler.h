#ifndef WINCASEHANDLER_H
#define WINCASEHANDLER_H
#include "qobject.h"
#include <vector>
#include <functional>

using namespace std;

class WinCaseHandler
{
public:
    WinCaseHandler();
    bool testForVictory(int id, bool turn);
    void setCellValue(int id, bool turn);

private:
    vector<vector<QString>> cellGrid;
    // Test Cases
    vector<reference_wrapper<QString>> topRow;
    vector<reference_wrapper<QString>> middleRow;
    vector<reference_wrapper<QString>> bottomRow;
    vector<reference_wrapper<QString>> leftColumn;
    vector<reference_wrapper<QString>> middleColumn;
    vector<reference_wrapper<QString>> rightColumn;
    vector<reference_wrapper<QString>> leftToRightDiagonal;
    vector<reference_wrapper<QString>> rightToLeftDiagonal;

    // Test Functions
    bool testCorners(int id, bool turn);
    bool testEdgeMiddles(int id, bool turn);
    bool testMiddle(bool turn);
    bool testVector(vector<reference_wrapper<QString>>& testCase, bool turn);
};

#endif // WINCASEHANDLER_H
