#include <iostream>

using namespace std;

/*
Write a program that calculates and prints the sum of all the natural numbers divisible by either 3 or 5, up to a given limit entered by the user.
*/

int main()
{
    int ceiling;
    int sum;
    int current_three;
    int current_five;

    cout << "Please, enter the limit: ";
    cin >> ceiling;

    if (ceiling < 3){

        cout << "There are no such natural numbers" << endl;
        sum = 0;
    }

    else if (ceiling < 5)
    {   
        cout << "Adding number 3" << endl;
        sum = 3;
    }

    else
    {

        current_three = 3;
        current_five = 5;

        do{
            cout << "Adding number " << current_three << endl;
            sum = sum + current_three;

            if (current_five % 3 != 0 && current_five <= ceiling)
            {
            cout << "Adding number " << current_five << endl;
            sum = sum + current_five;
            }
            
            current_three = current_three + 3;
            current_five = current_five + 5;

        }

        while (current_three <= ceiling);

    }

    cout << "The sum is " << sum << endl;

}