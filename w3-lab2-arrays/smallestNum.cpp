#include <iostream>

using namespace std;

int* fill_array(int size){

    int* arr = new int[size];
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    return arr;

}

int find_smallest(int* array, int size){
    int current_smallest = array[0];
    for (int i = 0; i < size; i++){
        if (array[i] < current_smallest){
            current_smallest = array[i];
        }
    }
    return current_smallest;
}

int main(){
    const int size = 5;
    int smallest = find_smallest(fill_array(size), size);
    cout << "The samellest number is " << smallest << endl;
}