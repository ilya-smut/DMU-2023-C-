#include <iostream>

using namespace std;

void swpChr(char *a, char *b){
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    char a = 'A';
    char b = 'B';
    cout << "a = " << a << "; b = " << b << endl;
    swpChr(&a, &b);
    cout << "a = " << a << "; b = " << b << endl;  

}