/*
Task 1: Simple Time Calculator (40 marks)

Write a program first.cpp file which builds a menu with the following options:
• Convert seconds to hours (time must be entered in seconds)
• Convert seconds to minutes (time must be entered in seconds)
• Convert minutes to hours (time must be entered in minutes)
• Convert hours to seconds (time must be entered in hours)
• Convert minutes to seconds (time must be entered in seconds)
• Permits you to exit the program

The output for each of the options above must be written to screen in a decent
format. Make sure you check for division by zero error, other possible software
errors and confirm the user's choice to exit the program.
*/

#include <iostream>
#include <string>
#include <limits> 

using namespace std;

void print_rules(){
    cout << endl << "-------Please-choose-the-command-from-the-following-list----------" << endl;
    cout << "sh • Convert seconds to hours (time must be entered in seconds) " << endl;
    cout << "sm • Convert seconds to minutes (time must be entered in seconds) " << endl;
    cout << "mh • Convert minutes to hours (time must be entered in minutes) " << endl;
    cout << "hs • Convert hours to seconds (time must be entered in hours) " << endl;
    cout << "ms • Convert minutes to seconds (time must be entered in seconds) " << endl;
    cout << "hm • Convert hours to minutes (time must be entered in hours) " << endl;
    cout << "q • Permits you to exit the program " << endl;
    cout << endl << "Please, enter the command: ";
}

void clear_buffer(){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int seconds_to_hours(int seconds){
    return seconds/3600;
}

int seconds_to_minutes(int seconds){
    return seconds/60;
}

int minutes_to_hours(int minutes){
    return seconds_to_minutes(minutes);
}

int hours_to_seconds(int hours){
    return hours*3600;
}

int hours_to_minutes(int hours){
    return hours*60;
}

int minutes_to_seconds(int minutes){
    return hours_to_minutes(minutes);
}

int get_input(){
    int input;
    while (true){
        cin >> input;
        if (cin.fail()){
            cout << "Incorrect input. Please, enter the integer number" << endl;
            clear_buffer();
        }
        else
        {
            clear_buffer();
            break;
        }
    }

    return input;
}


int main()
{
    bool play = true;
    string command = "";
    do{
        print_rules();
        getline(cin, command);
        if (command == "sh")
        {
            cout << "Converting seconds to hours. Please, enter the amount: " << endl;
            int input = get_input();
            cout << input << " hours equal to " << seconds_to_hours(input) << " hours" << endl;
        }
        else if(command == "sm")
        {
            cout << "Converting seconds to minutes. Please, enter the amount: " << endl;
            int input = get_input();
            cout << input << " seconds equal to " << seconds_to_minutes(input) << " minutes" << endl;
        }
        else if(command == "mh")
        {
            cout << "Converting minutes to hours. Please, enter the amount: " << endl;
            int input = get_input();
            cout << input << " minutes equal to " << minutes_to_hours(input) << " hours" << endl;
        }
        else if(command == "hm")
        {
            cout << "Converting hours to minutes. Please, enter the amount: " << endl;
            int input = get_input();
            cout << input << " hours equal to " << hours_to_minutes(input) << " minutes" << endl;
        }
        else if(command == "hs")
        {
            cout << "Converting hours to seconds. Please, enter the amount: " << endl;
            int input = get_input();
            cout << input << " hours equal to " << hours_to_seconds(input) << " seconds" << endl;
        }
        else if(command == "ms")
        {
            cout << "Converting minutes to seconds. Please, enter the amount: " << endl;
            int input = get_input();
            cout << input << " minutes equal to " << minutes_to_seconds(input) << " seconds" << endl;
        }
        else if(command == "q")
        {
            cout << "Thank you! See you next time!" << endl;
            play = false;
        }
        else
        {
            cout << "Incorrect input. Please, enter the command using specified format." << endl;
        }
        command = "";
    }
    while(play);

    return 0;
}