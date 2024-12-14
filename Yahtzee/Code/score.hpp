#include "dice.hpp"

struct Score {
    int upper[5] = {0};
    bool upperBonus = false;    // is upper >= 63

    int chance = 0;         // Sum of all dice
    int threeOfAKind = 0;   // Sum of all dice
    int fourOfAKind = 0;    // Sum of all dice
    bool fullHouse = false;     // 25 pts
    bool smallStraight = false; // 30 pts
    bool fullStraight = false;  // 40 pts
    bool yahtzee = false;       // 50 pts
    bool yBonus = false;        // +100 and Joker fill in

    bool scoreSelection[13] = {false};  // Records what a player has already scored on

    bool upperBonusChecker();
    void checkThePoints(); // Gonna be big; Use Lambda Vectors
    //void displayThePoints();
};