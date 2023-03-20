/*
#include <iostream>
using namespace std;

int square(short int x){

    return x * x;

}

int main(void) {

    short int num1 = 1000;

    short int num2 = square(num1);

    cout << num1 << " squared  =  "<<  num2;

 return 0;

}


a) The program is expected to print the square of 1000. Save the file and then compile and run the program.
b) Observe that the program is compiled successfully but does not run correctly. 
c) Modify the program so that it prints out as expected. 
*/

#include <iostream>
using namespace std;

int square(short int x){

    return x * x;

}

int main(void) {

    short int num1 = 1000;

    int num2 = square(num1); // 2 bytes is not enough to store decimal 1,000,000

    cout << num1 << " squared  =  "<<  num2 << endl;

 return 0;

}