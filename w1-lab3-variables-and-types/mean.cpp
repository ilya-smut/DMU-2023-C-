#include <iostream>

using namespace std;

int main()
{
    int num;
    int sum;
    cout << "Please, enter 6 integers: ";
    for (int i = 0; i < 6; i++){
        cin >> num;
        sum = sum + num;
    }
    cout << endl << "The average of the numbers is " << (float)sum / 6.0 << endl;
}