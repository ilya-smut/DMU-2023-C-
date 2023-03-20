/*
#include <iostream>
using namespace std;

int main(void) {

    int *num1 = new int[1];
    int num2;
    *num1 = 15;
    num2 = *num1;
    delete(num1);
    cout <<  *num1 << "\t" << num2;
    return 0;
}

a) Save the file and then compile and run the program.
b) Observe that the program is compiled successfully but does not run correctly. 
Observe that the number is being read after recycled. 
Similarly, you should first allocate memory and then assign a value.

*/
#include <iostream>
using namespace std;

int main(void) {

    int *num1 = new int[1];
    int num2;
    *num1 = 15;
    num2 = *num1;
    cout <<  *num1 << "\t" << num2;
    delete(num1); // recycling the memory only after it is used in code
    return 0;
}