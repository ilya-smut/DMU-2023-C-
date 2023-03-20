/*
#include <iostream>
using namespace std;
int main()
{
    int number[3]={1,1,1}, total=1;
    cout << "Enter 3 numbers:\n";
    for(int i=0; i <= 2; i++){
      cin >> number[i];
      total = total * number[i];
    }
    cout << "The product of numbers is " << total;
    return 0;
}



a) The program is expected to print the product of 3 numbers. Save the file and then compile and run the program.
b) Observe that the program is compiled successfully but does not run correctly if the user enters 1.5 as the first number, 1.6 as the second number, and 1.9 as the third number. 
c) Modify the program so that it prints out as expected. 
*/

#include <iostream>
using namespace std;
int main()
{
    float number[3]={1,1,1}, total=1;
    cout << "Enter 3 numbers:\n";
    for(int i=0; i <= 2; i++){
      cin >> number[i];
      total = total * number[i];
    }
    cout << "The product of numbers is " << total <<endl;
    return 0;
}