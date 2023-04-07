/*

login - guest
password - Cyb3rTech!

*/

#include <iostream>
#include <string>
#include <cstdlib> // Required for rand() and srand(). It is used to get random computer's move
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

        void clear_buffer(){
            // function used to clear the cin buffer to avoid unpredicted behaviour
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
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
            string inp;              // using this sting variable to store user input

            /*
            During tests I found out that if we use char inp and not string inp, then if we input "ssssssssss", char input will be equal to 's'
            Even if we clear the cin buffer after receiving input, "sssssssss" will be taken as 's' anyway, and game will think that user chose scissors.
            Therefore I decided to use string instead. Using string fixes this unpredicted behaviour
            */

            bool correct = true;     // flag that indicates whether input format is correct or not. Correct by default
            do {
                if (!correct){
                    cout << "Incorrect input" << endl;
                    clear_buffer();
                }
                
                cout << endl << "Rock - r, Paper - p, Scissors - s. To exit enter e" << endl;
                cout << "Please, choose: ";
                cin >> inp;

                if (inp != "r" && inp != "p" && inp != "s" && inp != "e")   // cheching whether input is in correct format
                {
                    correct = false;  
                }
                else
                    correct = true;
            }
            while (!correct);

            if (inp == "r"){
                cout << endl << "Thanks! You chose ROCK" << endl;
                return 0;   // return index in 2d array that corresponds with user's choice
            }
                
            else if (inp == "p")
            {
                cout << endl << "Thanks! You chose PAPER" << endl;
                return 1;   // return index in 2d array that corresponds with user's choice
            }
            else if (inp == "s")
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

            return -1; // function returns -1 if there is unexpected behaviour and somehow switch statement is skipped
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

                while (true){
                    cout << "Please, enter your login: " << endl;
                    getline(cin, login);
                    if (login.size() < 11)      // size of the login must not be more than 10 characters. It helps to avoid bufferoverflow
                        break;
                    else{
                        cout << "Incorrect login format" << endl;
                    }
                }

                cout << "Please, enter your password: " << endl;

                getline(cin, password);
                if (password.size() < 16){      // size of password must not be longer than 15 characters. It avoids bufferoverflow
                    is_authorised = authorisation(login, password);
                    if (!is_authorised){
                        cout << "Incorrect password" << endl;
                        attempt_limit--;
                        cout << "You have " << attempt_limit << " more attempts" << endl << endl;
                        
                    }
                }
                else{
                    cout << "Incorrect password " << endl;
                    attempt_limit--;
                    cout << "You have " << attempt_limit << " more attempts" << endl << endl;
                }
            }
        }

        void play(){                        // the most important method of Game class. It makes rps game playable.

            bool play = true; // using this boolean variable to check whether user wants to continue game or not. By default - true

            int game_counter = 1;           // game counter which will be used to count amount of played rounds

            if (!is_authorised){            // If user is not authorised - everything he sees is the following message and then game ends
                cout << "Sorry, you are not authorised to play this game :(" << endl;
            }
            else
                print_rules();              // If user is authorised - he will be presented with rules on this step

            while (is_authorised && play)           // If user is authorised - game starts
            {
                cout << "-------------- GAME " << game_counter << " ----------" << endl;

                int players_move = ask_for_input(); // getting choice from player

                if (players_move == 3){         // if player enters 'e' which returns exit code (3) - they have intention to exit the game

                    while (true){                   // we confirm this intention by executing this loop

                        cout << "Are you sure that you want to exit? y/n?" << endl;     // we expect user to input 'y' or 'n'
                        char answer = ' ';  // we store input in this char variable
                        cin >> answer;

                        if (answer == 'y'){     // if user enters 'y', we change play to false and break the loop
                            this->print_statistics();   // print game statistics
                            cout << "Thanks for playing! See you soon! :)" << endl;
                            play = false;               // turn game flag to false. It will stop game.
                            break;                      // break out of validation loop
                        }
                        else if (answer == 'n'){    // if user enters 'n', we clear the buffer to avoid unexpected behaviour and break the loop.
                            clear_buffer();
                            break;                  // when the loop is broken, user is asked again to input the command
                        }
                        else{                // if input is neither 'y' nor 'n', then user is asked to input again. The corrrect format is once again explained
                            cout << "Incorrect format. Please, enter 'y' for yes or 'n' for no" << endl;
                            clear_buffer();
                        }
                    }
                    continue;
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