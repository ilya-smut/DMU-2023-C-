#include <iostream>

using namespace std;

void printRectangle(int height, int width, char fill){
    for (int h = 0; h < height; h++){
        for (int w = 0; w < width; w++){
            cout << fill;
        }
        cout << endl;
    }
}

int main(int argc, char* argv[]) {
    int height = stoi(argv[1]);
    int width = stoi(argv[2]);
    char fill = argv[3][0];
    if (fill < 97 || fill > 122){
        fill = '*';
    }
    printRectangle(height, width, fill);
}
