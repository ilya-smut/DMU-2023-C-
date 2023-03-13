#include <iostream>

#include "simpleClass.h"

using namespace std;

int main(){
    SimpleClass simple1;
    SimpleClass simple2(69);
    simple1.setInteger(65);
    cout << simple1.getInteger() << endl;
    cout << simple2.getInteger() << endl;
    return 0;
}

