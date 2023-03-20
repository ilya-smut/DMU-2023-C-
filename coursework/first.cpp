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

using namespace std;

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
    cin >> input;
    cin.ignore(1, '\n');
    return input;
}


int main()
{
    bool play = true;
    string command = "";
    do{
        cout << "Please, choose the operation: sh, sm, mh, hs, hm, ms, q" << endl;
        getline(cin, command);
        if (command == "sh")
        {
            cout << "sh" << endl;
            cout << seconds_to_hours(get_input()) << endl;
        }
        else if(command == "sm")
        {
            cout << "sm" << endl;
            cout << seconds_to_minutes(get_input()) << endl;
        }
        else if(command == "mh")
        {
            cout << "mh" << endl;
            cout << minutes_to_hours(get_input()) << endl;
        }
        else if(command == "hm")
        {
            cout << "hm" << endl;
            cout << hours_to_minutes(get_input()) << endl;
        }
        else if(command == "hs")
        {
            cout << "hs" << endl;
            cout << hours_to_seconds(get_input()) << endl;
        }
        else if(command == "ms")
        {
            cout << "ms" << endl;
            cout << minutes_to_seconds(get_input()) << endl;
        }
        else if(command == "q")
        {
            cout << "q" << endl;
            play = false;
        }
        else
        {
            cout << "Debug: " << command << endl;
        }
        command = "";
    }
    while(play);

    return 0;
}