#include <iostream>

using namespace std;

int main(){
    int i = 100;
    int* pi = &i;
    *pi = 200;
    cout << i << endl;
    // Prints 200
    int* q = &i;
    *q = (*q) * (2);
    cout << i << endl;
    // prints 400
}