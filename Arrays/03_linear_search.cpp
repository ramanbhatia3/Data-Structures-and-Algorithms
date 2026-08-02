// Linear Search

#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int target){
    for (int i = 0; i < size; i++){
        if (arr[i] == target){
            return i;
        }
    }

    return -1; // NOT FOUND
}

int main(){
    int arr[] = {6, 2, 5, 8, 32, 5, 7};

    int size = 7;

    int target = 8;

    cout << LinearSearch(arr, size, target) << endl;

    return 0;
}