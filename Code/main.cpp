#include "score.hpp"

/*  ~~~ NOTES ~~~
    need to make 'filledIn' array for what in a players score they have already taken
    How to logic [void checkThePoints();]
    How to make multi input for dice selection
*/

struct Player {
    int id = 0;
    string Pname = "ERROR";
    Score PScore;
    Dice PDice;
    int roundCount = 13;         // max 13 rounds per person
    int currentchance = 3;      // max 3 chances to roll
};

int main() {
    //  INIT
    int playercount = 1;
    int maxgameturns = 13;
    int playercall = 1;

    //srand(time(0));     // Define Rand seed (changes based on computer time to make more random)
    srand(1);           // control testing

    // input players
    cout << "How many players?" << endl;
    cin >> playercount;

    Player user[playercount];
    
    for (int i = 0; i < playercount; i++) { 
        user[i].id = i+1;
        cout << "Enter Name: ";
        cin >> user[i].Pname;
        cout << "\nHello " << user[i].Pname << "!\nYou're player " << user[i].id << endl << endl;
    } 

    maxgameturns *= playercount;
    
    for (int i = 0; i < maxgameturns; i++) {
        if (playercount > 1) {      // No Need to output if just one player
            playercall = (i % playercount)+1;
            cout << user[playercall-1].Pname << " is up!" << endl;
        }

        user[playercall].currentchance = 3;     // Reset counter before turn

        do {
            //Rolling Dice
            cout << "\nChance: " << user[playercall].currentchance << endl;

            --user[playercall].currentchance;   // Why does the -- have to be front

            user[playercall].PDice.rollthedice();

            for (int j = 0; j < 5; j++) {
                cout << "Dice: " << (j+1) << "\t\t";
            }
            cout << endl;

            for (int j = 0; j < 5; j++) {
                cout << user[playercall].PDice.dice[j] << "\t\t";
            }
            cout << endl << endl;

            //user[playercall].checkThePoints();

            // Holding Dice
            int holdLogic = 0;
            if (user[playercall].currentchance != 0) {
                user[playercall].PDice.holdthedice();

                for (int value : user[playercall].PDice.dicehold) {
                    holdLogic += value;
                }
            }

            // Finish the Round
            if ((holdLogic == 5) || (user[playercall].currentchance == 0)) { // if you hold all dice you cannot reroll and surrender the round as is
                user[playercall].currentchance = 0;

                //user[playercall].tallyThePoints();
                
                cout << "IT WORKS" << endl;
            }

        } while (user[playercall].currentchance != 0);

        cout << "Done with turn" << endl << endl;
    } 
    return 0;
}
