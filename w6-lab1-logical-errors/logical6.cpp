/*
#include <iostream>
using namespace std;

int main(void) {

     int num1, num2;

     cout << "Enter the first number: ";

     cin >> num1;

     cout << "Enter the second number: ";

     cin >> num2;

     cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

     cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;

     cout << num1 << " * " << num2 << " = " << num1 * num2;

     return 0;

}


a) Save the file and then compile and run the program.
b) Observe that the program is compiled successfully but a run-time error occurs due to division by zero. Note also that hidden errors occur only when a particular set of data is used during the run-time execution. For example, if result = (x+y)/(z-t); is used in a C program then an error occurs only when z and t are equal. Therefore, you have to make sure that this case never happens.
c) Modify the program so that it prints out as expected. 
*/

#include <iostream>
using namespace std;

int main(void) {

     int num1, num2;

     cout << "Enter the first number: ";

     cin >> num1;

     cout << "Enter the second number: ";

     cin >> num2;

     cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
     
     if (num2 != 0){
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
     }
     else
        cout << num1 << " / " << num2 << " = " << "You cannot divide by zero!" << endl;
    
     cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;

     return 0;

}