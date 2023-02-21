/*
Greatest common divisor of two positive integers
*/

#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    int cach;
    int result;
    bool equal = false;
    cout << "Please, enter two positive integers: ";
    cin >> num1 >> num2;

    if (num1 < num2){
        cach = num1;
        num1 = num2;
        num2 = cach;
    }
    else if (num2 == num1){
        equal = true;
    }

    if (!equal) {

        for (int i = num2 / 2; i > 0; i--){

            if (num1 % num2 == 0){
                result = num2;
                break;
            }

            if (num2 % i == 0 && num1 % i == 0){
                result  = i;
                break;
            }
        }

    }
    else
    {
        result = num2;
    }

    cout << "Greatest common divisor is " << result << endl;

}