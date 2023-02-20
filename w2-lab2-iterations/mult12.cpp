#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int max = 10;

    for (int y = 0; y <= max; y++)
    {
        for (int x = 0; x <= max; x++)
        {
            if (y == 0 && x == 0)
            {
                cout << "    1|" << setw(5);
            }
            else if (y == 0)
            {
                cout << x << "|" << setw(5);
                if (x == max)
                {
                    cout << endl;
                    
                }
            }
            else if (x == 0)
            {
                cout << y << "|" << setw(5);
            }
            else
            {
                cout << x * y << "|" << setw(5);
                if (x == max) cout << endl;
            }
        }
        //cout << " " << endl;
    }

}