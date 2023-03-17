/*
* #include <iostream>
*
*using namespace std;
*
*int poly(int x)
*{
*    int div = 0;
*    return x*x*x + 2x(x -2+div/7) + 5/div;
*}
*
*
*int main()
*{
*    int k;
*    for (k=0; k<10; k++)
*      cout << "ply() for parameter value " << k << " = " <<poly(k) <<endl;
*    return 0;
*}
*/
/*
a) The program uses a polynomial function to calculate on a certain point. Save the file and then compile and run the program.

b) Observe the syntax errors.

c) Modify the program so that it prints out the the polynomial P(x) = x3 + 2x(x-2) + 5 from zero to 99.
*/


#include <iostream>

using namespace std;


int poly(int x)
{
    return x*x*x + 2 * x * ( x - 2) + 5;
}


int main()
{
    for (int k=0; k<100; k++)

      cout << "ply() for parameter value " << k << " = " <<poly(k) <<endl;

    return 0;

}