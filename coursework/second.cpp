/*

Rock = 1
Paper = 2
Scissors = 3

*/

#include <iostream>
#include <cstdlib> // Required for rand() and srand()
#include <ctime>   // Required for time()
#include <limits>

using namespace std;

class game{
    private:

        char rules_array[3][3] = {{'d', 'l', 'w'}, {'w', 'd', 'l'}, {'l', 'w', 'd'}};

        int ask_for_input(){
            char inp;
            bool incorrect = 0;
            do {
                cin.clear();
                if (incorrect){
                    cout << "Incorrect input" << endl;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                
                cout << endl << "Rock - r, Paper - p, Scissors - s. To exit enter e" << endl;
                cout << "Please, choose: ";
                cin >> inp;

                if (inp != 'r' && inp != 'p' && inp != 's' && inp != 'e')
                {
                    incorrect = 1;
                }
                else
                    incorrect = 0;
            }
            while (incorrect);

            if (inp == 'r'){
                cout << endl << "Thanks! You chose ROCK" << endl;
                return 0;
            }
                
            else if (inp == 'p')
            {
                cout << endl << "Thanks! You chose PAPER" << endl;
                return 1;
            }
            else if (inp == 's')
            {
                cout << endl << "Thanks! You chose SCISSORS" << endl;
                return 2;
            }
            else
                return 3;

        }

        char get_outcome(int pl, int ai){
            return rules_array[pl][ai];
        }

        int get_ai_input(){
            srand(time(nullptr)); // Seed the random number generator with the current time
            int outcome = rand() % 3;    // Return a random number between 0 and 2
            switch (outcome){
                case 0:
                    cout << "Computer chose ROCK!" << endl;
                    return 0;
                case 1:
                    cout << "Computer chose PAPER!"<< endl;
                    return 1;
                case 2:
                    cout << "Computer chose SCISSORS!" << endl;
                    return 2;
            }
        }

        void assess_outcome(char outcome){
            if (outcome == 'w'){
                cout << endl << "YOU WON" << endl;
            }
            else if(outcome == 'd'){
                cout << endl << "It's a draw!" << endl;
            }
            else{
                cout << endl << "You lost!" << endl;
            }
        }

    public:
        game(){
            cout << "Welcome!" << endl;
            cout << "RULES-RULES-RULES-RULES" << endl;
            cout << "MORE-RULES" << endl << endl;
        }

        void play(){
            int game_counter = 1;
            while (true)
            {
                cout << "-------------- GAME " << game_counter << " ----------" << endl;

                int players_move = ask_for_input();

                if (players_move == 3){
                    cout << "Thanks for playing! See you soon! :)" << endl;
                    break;
                }

                int ai_move = get_ai_input();

                char outcome = get_outcome(players_move, ai_move);

                assess_outcome(outcome);

                game_counter++;
            }
        }
};

int main(){
    
    game game1;
    game1.play();

}