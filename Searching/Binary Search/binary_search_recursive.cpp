// Binary Search (Recursive)

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector <int> arr, int target, int start, int end){
    if (start <= end){
        int mid = start + (end - start)/2;

        if (target > arr[mid]){
            return binarySearch(arr, target, mid+1, end);
        }
        else if (target < arr[mid]){
            return binarySearch(arr, target, start, mid-1);
        }
        else {
            return mid;
        }
    }

    return -1;
}

int main(){
    vector <int> arr1 = {-1, 0, 3, 4, 7, 11, 12};
    int target1 = 12;

    cout << binarySearch(arr1, target1, 0, arr1.size()-1) << endl;

    vector <int> arr2 = {-1, 0, 3, 4, 7, 12};
    int target2 = 0;

    cout << binarySearch(arr2, target2, 0, arr2.size()-1) << endl;
    
    return 0;
}