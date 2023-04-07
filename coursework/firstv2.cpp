#include <iostream> 
#include <string> // using strings to store the command entered by user
#include <limits> // using limits to clear the cin buffer to avoid unpredicted behaviour

using namespace std;

void print_rules(){
    /*
    Function used to print the intstructions
    */
    cout << endl << "-------Please-choose-the-command-from-the-following-list----------" << endl;
    cout << "sh - Convert seconds to hours (time must be entered in seconds) " << endl;
    cout << "sm - Convert seconds to minutes (time must be entered in seconds) " << endl;
    cout << "mh - Convert minutes to hours (time must be entered in minutes) " << endl;
    cout << "hs - Convert hours to seconds (time must be entered in hours) " << endl;
    cout << "ms - Convert minutes to seconds (time must be entered in seconds) " << endl;
    cout << "hm - Convert hours to minutes (time must be entered in hours) " << endl;
    cout << "q - Permits you to exit the program " << endl;
    cout << endl << "Please, enter the command: ";
}

void clear_buffer(){
    // function used to clear the cin buffer to avoid unpredicted behaviour
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

float seconds_to_hours(float seconds){
    // each hour has 3600 seconds. We divide seconds by 3600
    return seconds/3600;
}

float seconds_to_minutes(float seconds){
    // each minute has 60 seconds. We divide minutes by 60
    return seconds/60;
}

float minutes_to_hours(float minutes){
    // each hour has 60 minutes. Same for seconds and minutes. We can use previous function
    return seconds_to_minutes(minutes);
}

float hours_to_seconds(float hours){
    // each hour has 3600 seconds. We multiply hours by 3600 to get seconds
    return hours*3600;
}

float hours_to_minutes(float hours){
    // each hour has 60 minutes. We multiply hours by 60 to get minutes
    return hours*60;
}

float minutes_to_seconds(float minutes){
    // each minute has 60 seconds. Same for hours and minutes. We can use previous function
    return hours_to_minutes(minutes);
}

float get_input(){
    // Function used to get input from the user

    float input;                        // we store input as a float value to allow entering numbers such as 1.5 hours
    while (true){                       // loop used to validate input
        cin >> input;                   // getting input from user

        if (cin.fail() || input < 0){   // if cin fails to get float value, or float value is less than 0, we clear buffer and ask user to enter value again
            cout << "Incorrect input. Please, enter integer or float number greater than or equal to 0" << endl;
            clear_buffer();
        }
        else
        {
            clear_buffer();             // if input is validated, we clear the buffer and break from the loop.
            break;
        }
    }

    return input;   // After we get proper input (it is guaranteed since otherwise user cannot exit the loop) we return it (float number >= 0)
}


int main()
{
    bool play = true;                       // using play flag to control the flow of the game. Once it becomes false - game stops
    string command = "";                    // using string variable to store the command entered by user
    do{                                     // using do-while loop to check play == true after every execution of the loop.
        print_rules();                      // printing instructions
        getline(cin, command);              // getting command from the user

        /*
        Following if-else structure looks for specific commands in the user input and executes necessary option. But if the user input 
        does not match any of the specified commands, user is asked to input the command again.
        */
        if (command == "sh")    
        {
            cout << "Converting seconds to hours. Please, enter the amount: " << endl;
            float input = get_input();
            cout << input << " seconds equal to " << seconds_to_hours(input) << " hours" << endl;
        }
        else if(command == "sm")
        {
            cout << "Converting seconds to minutes. Please, enter the amount: " << endl;
            float input = get_input();
            cout << input << " seconds equal to " << seconds_to_minutes(input) << " minutes" << endl;
        }
        else if(command == "mh")
        {
            cout << "Converting minutes to hours. Please, enter the amount: " << endl;
            float input = get_input();
            cout << input << " minutes equal to " << minutes_to_hours(input) << " hours" << endl;
        }
        else if(command == "hm")
        {
            cout << "Converting hours to minutes. Please, enter the amount: " << endl;
            float input = get_input();
            cout << input << " hours equal to " << hours_to_minutes(input) << " minutes" << endl;
        }
        else if(command == "hs")
        {
            cout << "Converting hours to seconds. Please, enter the amount: " << endl;
            float input = get_input();
            cout << input << " hours equal to " << hours_to_seconds(input) << " seconds" << endl;
        }
        else if(command == "ms")
        {
            cout << "Converting minutes to seconds. Please, enter the amount: " << endl;
            float input = get_input();
            cout << input << " minutes equal to " << minutes_to_seconds(input) << " seconds" << endl;
        }
        else if(command == "q")             // if user types 'q' we need to confirm their intention to exit the program
        {
            while (true){                   // we confirm this intention by executing this loop

                cout << "Are you sure that you want to exit? y/n?" << endl;     // we expect user to input 'y' or 'n'
                char answer = ' ';  // we store input in this char variable
                cin >> answer;

                if (answer == 'y'){     // if user enters 'y', we change play to false and break the loop
                    cout << "Thank you! See you next time!" << endl;
                    play = false;
                    break;
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
        }
        else
        {
            /*
                If the command does not match any of the specifeid in the instruction commands, user is asked to input the command again.
            */
            cout << "Incorrect input. Please, enter the command using specified format." << endl; 
        }
        command = "";   // after each iteration command is being cleared to avoid unexpected behaviour
    }
    while(play);
}
