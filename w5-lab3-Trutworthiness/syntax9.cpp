#include <iostream>

using namespace std;

int factor(int);

int main(){

   int result=1, x;

   cout << "Enter the number: ";

   cin >> x;

   result = factor(x);

 

   cout << "The factorial of " << x << " = " << result << endl;

return 0;

}

int factor(int number){

    if (number == 1) return 1;

    return number * factor(number-1);

  }