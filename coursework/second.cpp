/*

login - guest
password - Cyb3rTech!

*/

#include <iostream>
#include <string>
#include <cstdlib> // Required for rand() and srand()
#include <ctime>   // Required for time()
#include <limits>  // Required for clearing cin buffer

using namespace std;    // using namespace to avoid using std::

class game{         // class which unites all methods necessary to play a rps game
    private:    // all following methods and properties are private because they are used for inner operation of the game and are not needed for user

        bool is_authorised = false;     // flag that checks whether user is authorised to play a game. False by default

        bool authorisation(string login, string password){      // bool method to check credentials. Returns either true or false
            if (login == "guest" && password == "Cyb3rTech!") {
                return true;
            } else {
                return false;
                }
        }

        int statistics[2] = {0, 0};     // array used to store game statistics. index 0 = user's score, index 1 = computer's score

        void print_statistics(){
            cout << "Statistics [You = " << statistics[0] << "; " << "Computer = " << statistics[1] << "]" << endl; // void that prints statistics
        }

        void add_point_person(){        // incrementing player's statistics
            statistics[0]++;
        }

        void add_point_computer(){
            statistics[1]++;        // incrementing computer's statistics
        }

        char rules_array[3][3] = {{'d', 'l', 'w'}, {'w', 'd', 'l'}, {'l', 'w', 'd'}};       // 2d array used to check who wins

        /*
         |  R  | P |  S
        -|--------------
        R|  d  | l |  w
        -|--------------            columns - computer's choice
        P|  w  | d |  l             rows - player's choice
        -|--------------
        S|  l  | w |  d
        ----------------
        
        */

        void print_rules(){     // printing game rules to the screen
            cout << endl << "Welcome to the Rock Paper Scissors V1.0!" << endl;
            cout << "- Rock crushes Scissors \n- Paper covers Rock \n- Scissors cuts Paper" << endl;
            cout << "Let's start:" << endl;
        }

        int ask_for_input(){
            char inp;
            bool correct = true;     // flag that indicates whether input format is correct or not. Correct by default
            do {
                cin.clear();    // cleaning cin buffer
                if (!correct){
                    cout << "Incorrect input" << endl;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');    // using this piece of code to clean the buffer. It avoids bugs when user inputs many characters
                }
                
                cout << endl << "Rock - r, Paper - p, Scissors - s. To exit enter e" << endl;
                cout << "Please, choose: ";
                cin >> inp;

                if (inp != 'r' && inp != 'p' && inp != 's' && inp != 'e')   // cheching whether input is in correct format
                {
                    correct = false;  
                }
                else
                    correct = true;
            }
            while (!correct);

            if (inp == 'r'){
                cout << endl << "Thanks! You chose ROCK" << endl;
                return 0;   // return index in 2d array that corresponds with user's choice
            }
                
            else if (inp == 'p')
            {
                cout << endl << "Thanks! You chose PAPER" << endl;
                return 1;   // return index in 2d array that corresponds with user's choice
            }
            else if (inp == 's')
            {
                cout << endl << "Thanks! You chose SCISSORS" << endl;
                return 2;   // return index in 2d array that corresponds with user's choice
            }
            else
                return 3; // return exit code in all other cases (in case user somehow managed to escape while loop with incorrect input. Or just if he enters e)

        }

        char get_outcome(int pl, int ai){
            return rules_array[pl][ai];     // returns char value (w - for win, l - for lose, d - for draw)
        }

        int get_ai_input(){
            srand(time(nullptr)); // Seed the random number generator with the current time
            int outcome = rand() % 3;    // Return a random number between 0 and 2 that will correspond with index in 2d array
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

        void assess_outcome(char outcome){      // this method prints outcome and adds points to necessary party. Takes input from get_outcome()
            if (outcome == 'w'){
                cout << endl << "YOU WON" << endl;
                this->add_point_person();
            }
            else if(outcome == 'd'){
                cout << endl << "It's a draw!" << endl;
            }
            else{
                cout << endl << "You lost!" << endl;
                this->add_point_computer();
            }
        }

    public:
        game(){         // default constructor which checks whether user is authorised to play a game. If user does not know credentials - is_authorised flag will remain false and game will be impossible to play
            string login;
            string password;

            int attempt_limit = 3;  // user has 3 attempts to enter correct login and password

            while (is_authorised == false && attempt_limit > 0){    // user goes through the loop until he either logs in or uses all attempts
                cout << "Please, enter your login: " << endl;

                while (true){
                    getline(cin, login);
                    if (login.size() < 10)      // size of the login must not be more that 10 characters. It helps to avoid bufferoverflow
                        break;
                    else
                        cout << "correct login format" << endl;
                }

                cout << "Please, enter your password: " << endl;

                getline(cin, password);
                if (password.size() < 15){      // size of password must not be longer than 15 characters. It avoids bufferoverflow
                    is_authorised = authorisation(login, password);
                    if (!is_authorised){
                        cout << "correct password" << endl;
                        attempt_limit--;
                        cout << "You have " << attempt_limit << " more attempts" << endl << endl;
                        
                    }
                }
                else{
                    cout << "correct password " << endl;
                    attempt_limit--;
                    cout << "You have " << attempt_limit << " more attempts" << endl << endl;
                }
            }
        }

        void play(){                        // the most important method of Game class. It makes rps game playable.
            int game_counter = 1;           // game counter which will be used to count amount of played rounds

            if (!is_authorised){            // If user is not authorised - everything he sees is the following message and then game ends
                cout << "Sorry, you are not authorised to play this game :(" << endl;
            }
            else
                print_rules();              // If user is authorised - he will be presented with rules on this step

            while (is_authorised)           // If user is authorised - game starts
            {
                cout << "-------------- GAME " << game_counter << " ----------" << endl;

                int players_move = ask_for_input(); // getting choice from player

                if (players_move == 3){         // if player enters 'e' which returns exit code (3) - game stops
                    this->print_statistics();   // print game statistics
                    cout << "Thanks for playing! See you soon! :)" << endl;
                    break;                      // breaking game cycle 
                }

                int ai_move = get_ai_input();   // getting random move from computer

                char outcome = get_outcome(players_move, ai_move);      // getting an outcome of the game

                assess_outcome(outcome);        // assessing the outcome and printing results of the rounds

                this->print_statistics();       // printing statistics to the screen

                game_counter++;                 // incrementing game counter
            }
        }
};

int main(){
    
    game game1;         // all we need to do is to create a game object
    game1.play();       // and then we just use its only public method - play().

}