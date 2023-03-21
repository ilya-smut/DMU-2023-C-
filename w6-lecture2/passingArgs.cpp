#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int i;

    cout << "Total arguments\t" << argc << endl;

    for(i = 0; i < argc; i++)
        cout << i << " " << argv[i] << endl;
    return 0;
}
/*
    ./passingArgs This is a "secure coding" lecture

    OUTPUT:
    Total arguments 6
    0 ./passingArgs
    1 This
    2 is
    3 a
    4 secure coding
    5 lecture

*/