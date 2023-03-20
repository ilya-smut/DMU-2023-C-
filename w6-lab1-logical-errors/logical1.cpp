/*
#include <iostream>
using namespace std;
int main()

{

    int i = 0;

    for(i = 0; i < 10; i++);

    {

       cout << "Square of " << i << " " << i * i;

    }

    return 0;

}


a) The program is expected to print square of 0 to 9. Save the file and then compile and run the program.
b) Observe that the program is compiled successfully but does not run correctly. That means it has logical errors rather than syntax errors. Logical errors basically are the mistakes in a program's source code that results in an incorrect output or unexpected behavior.
c) Modify the program so that it prints out as expected.

*/

#include <iostream>
using namespace std;
int main()
{
    int i = 0;

    for(i = 0; i < 10; i++) // There must not be ";"
    {
       cout << "Square of " << i << " " << i * i << endl;
    }
    return 0;
}