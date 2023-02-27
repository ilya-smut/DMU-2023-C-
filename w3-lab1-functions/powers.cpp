#include <iostream>
#include <cmath>

using namespace std;

int square(int num)
{
    return pow(num, 2);
}
int cube(int num)
{
    return pow(num, 3);
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << i << " " << square(i) << " " << cube(i) << " " << square(square(i)) << endl;
    }
}