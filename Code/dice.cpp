#include "dice.hpp"

void Dice::rollthedice() {
    for (int i = 0; i < 5; i++) {
        if (dicehold[i] == false) {
            int roll = 0;

            roll = rand() % 7; // (max - min + 1) + min = 7

            dice[i] = roll;
        }
        else {
            continue;
        }
    }
}

void Dice::holdthedice() {  // How to take in 0-5 inputs in one line
    for (int i = 0; i < 5; i++) {
        char responce = 0;
        cout << "Would you like to hold dice number: " << (i+1) << "? (y/n)" << endl;
        cin >> responce;

        if (tolower(responce) == 'y') {
            dicehold[i] = true;
        }
        else {
            continue;
        }
    }
}