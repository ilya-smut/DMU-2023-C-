#include <iostream>

using namespace std;

char* fill_array(int size){
    char* array = new char[size];
    cout << "Enter " << size << " characters: ";
    for (int i = 0; i < size; i++){
        cin >> array[i];
    }
    return array;
}

char find_largest(char* array, int size){
    char largest = array[0];
    for (int i = 0; i < size; i++){
        if (largest < array[i]){
            largest = array[i];
        }
    }
    return largest;
}

int main(){
    const int size = 10;
    char largest = find_largest(fill_array(size), size);
    cout << "The largest ASCII character: " << largest <<"; ASCII = " << (int)largest << endl; 
}