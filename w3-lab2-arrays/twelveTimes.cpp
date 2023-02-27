#include <iostream>

using namespace std;

int printTable(int heightPassed, int widthPassed){

    const int height = heightPassed + 1;
    const int width = widthPassed + 1;

    int table[height][width];

    for (int h = 0; h < height; h++){
        for (int w = 0; w < width; w++){
            if (h == 0 && w == 0){
                table[0][0] = 0;
            }
            else if (h == 0){
                table[h][w] = w;
            }
            else if (w == 0){
                table[h][w] = h;
            }
            else{
                table[h][w] = h * w;
            }

        }
    }

    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
    
}

int main()
{
    printTable(12,12);
}