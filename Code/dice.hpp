#include <iostream>
#include <string>

using namespace std;

struct Dice {
    int dice[5] = {0};
    bool dicehold[5] = {false};     // True to hold dice

    void rollthedice();             // Rolls selected dice
    void holdthedice();             // Records what dice to hold
};