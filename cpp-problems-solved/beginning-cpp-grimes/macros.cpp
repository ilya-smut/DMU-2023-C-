#include <iostream>

#define AREA(c, v) (c * v)
#define MAX(a, b) ((a) > (b) ? (a) : (b))

using namespace std;

int main(int argc, char *argv[]){
    cout << "Area of rectangle with sides 5 and 10 is " << AREA(5,10) << endl;
    int x = 9, y = 11;
    int z = MAX(x, y);
    cout << "The maximum of " << x << " and " << y << " is " << z << endl;

    #ifdef AREA
        cout << "The macro for AREA is defined" << endl;
    #endif

    return 0; 
}
