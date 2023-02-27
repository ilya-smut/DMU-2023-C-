#include <iostream>

using namespace std;

int main() {
    int arr[12];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    arr[5] = 6;
    arr[6] = 7;
    arr[7] = 8;
    arr[8] = 9;
    arr[9] = 10;
    arr[10] = 11;
    arr[11] = 12;
    
    int arr2[12];
    for(int i = 0; i < 12; i++) {
        arr2[i] = i + 1;
    }

    int arr3[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    for(int i = 0; i < 12; i++) {
        cout << arr[i] << " " << arr2[i]<< " " << arr3[i] << endl;
    }
    cout << endl;
    return 0;
}
