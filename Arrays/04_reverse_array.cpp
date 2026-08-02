// Reverse an array

#include <iostream>
using namespace std;

int reverseArray(int arr[], int size){
    int start = 0, end = size - 1;

    while (start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {6, 2, 5, 8, 32, 5, 7};

    int size = 7;

    cout << "Original Array: ";

    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    reverseArray(arr, size);

    cout << "Reversed Array: ";
    
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}