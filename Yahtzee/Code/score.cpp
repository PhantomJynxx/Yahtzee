#include "score.hpp"

bool Score::upperBonusChecker() {
    int sum = 0;

    for (int score : upper) {
        sum += score;
    } 

    if (sum >= 63) {
        return true;
    }
    
    else {
        return false;
    }
}