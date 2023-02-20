#include <iostream>

using namespace std;

int main()
{   
    for (int i = 0; i < 10; i++){
        int dice = rand() % 6 + 1;
        
        if (dice < 6)
        {
            cout << "Winter is coming " << dice << endl;

        }
        else
        cout << "Winter is here " << dice << endl;
    }
    
}