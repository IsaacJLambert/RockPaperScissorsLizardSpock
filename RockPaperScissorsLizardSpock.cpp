#include <iostream>
#include <ctime>

using namespace std;

int main() {
    //this will give us a random computers input
    srand (time(NULL));
    int computerInput = 0;
    int userInput = 0;
    cout << "+++Rock-Paper-Scissors-Lizard-Spock+++" << endl;
    do {
        cout << "++++++++++++++++++\n 1: Rock \n 2: Paper \n" 
        << " 3: Scissors \n 4: Lizard \n 5: Spock \n 6: Exit \n++++++++++++++++++" << endl;
        bool error;
        do{
            error = false;
            try{
                cout << "User Input: ";
                cin >> userInput;
                if ((cin.fail()) || (userInput > 6)){
                    throw true;
                }
            }
            catch(bool invalid){
                cout << "Invalid Input" << endl;
                cin.clear();
                cin.ignore();
                error = true;
            }
        }
        while(error);
        cout << endl;
        computerInput = rand() % 5 + 1;
        
        switch (userInput) {
        //user chose Rock
            case 1:
                switch (computerInput) {
                    //computer chose Rock
                    case 1:
                        cout << "Rock ties Rock!" << endl;
                        break;
                    //computer chose paper
                    case 2:
                        cout << "Paper covers Rock!" << endl << "Computer Wins!" << endl;
                        break;
                    //computer chose scissors
                    case 3:
                        cout << "Rock crushes Scissors!" << endl << "You Win!" << endl;
                        break;
                    //computer chose lizard
                    case 4:
                        cout << "Rock crushes Lizard!" << endl << "You Win!" << endl;
                        break;
                    //computer chose spock
                    case 5:
                        cout << "Spock vaporizes Rock!" << endl << "Computer Wins!" << endl;
                        break;
                }
                break;   
            //user chose Paper
            case 2:
                switch (computerInput) {
                    //computer chose Rock
                    case 1:
                        cout << "Paper covers Rock!" << endl << "You Win!" << endl;
                        break;
                    //computer chose paper
                    case 2:
                        cout << "Paper ties Paper!" << endl;
                        break;
                    //computer chose scissors
                    case 3:
                        cout << "Scissors cuts Paper!" << endl << "Computer Wins!" << endl;
                        break;
                    //computer chose lizard
                    case 4:
                        cout << "Lizard eats Paper!" << endl << "Computer Wins!" << endl;
                        break;
                    //computer chose spock
                    case 5:
                        cout << "Paper disproves Spock" << endl << "You win!" << endl;
                        break;
                }
                break;
            //user chose scissors
            case 3:
                switch (computerInput) {
                    //computer chose Rock
                    case 1:
                        cout << "Rock crushes Scissors!" << endl << "Computer Wins!" << endl;
                        break;
                    //computer chose paper
                    case 2:
                        cout << "Scissors cuts Paper!" << endl << "You Win!" << endl;
                        break;
                    //computer chose scissors
                    case 3:
                        cout << "Scissors ties Scissors!" << endl;
                        break;
                    //computer chose lizard
                    case 4:
                        cout << "Scissors decapitate Lizard" << endl << "You Win!" << endl;
                        break;
                    //computer chose spock
                    case 5:
                        cout << "Spock smashes Scissors" << endl << "Computer Wins!" << endl;
                        break;
                }
                break;
            //user chose Lizard
            case 4:
                switch (computerInput) {
                    //computer chose Rock
                    case 1:
                        cout << "Rock crushes Lizard!" << endl << "Computer Wins!";
                        break;
                    //computer chose paper
                    case 2:
                        cout << "Lizard eats Paper!" << endl << "You Win!" << endl;
                        break;
                    //computer chose scissors
                    case 3:
                        cout << "Scissors decapitates Lizard!" << endl << "Computer Wins!" << endl;
                        break;
                    //computer chose lizard
                    case 4:
                        cout << "Lizard ties Lizard" << endl;
                        break;
                    //computer chose spock
                    case 5:
                        cout << "Lizard poisons Spock" << endl << "You Win!" << endl;
                        break;
                }
                break;
            //user chose spock
            case 5:
                switch (computerInput) {
                    //computer chose Rock
                    case 1:
                        cout << "Spock vaporizes Rock!" << endl << "You Win!";
                        break;
                    //computer chose paper
                    case 2:
                        cout << "Paper disproves Spock!" << endl << "Computer Wins!" << endl;
                        break;
                    //computer chose scissors
                    case 3:
                        cout << "Spock smashes Scissors!" << endl << "You Win!" << endl;
                        break;
                    //computer chose lizard
                    case 4:
                        cout << "Lizard poisons Spock" << endl << "Computer Wins!" << endl;
                        break;
                    //computer chose spock
                    case 5:
                        cout << "Spock ties Spock" << endl;
                        break;
                }
                break;
            }
    } while (userInput != 6);

    return 0;
}