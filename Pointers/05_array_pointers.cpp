// Array Pointers

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    cout << arr << endl; // pointer
    cout << *arr << endl; 
    cout << *(arr+1) << endl; 

    // Array Pointer is a constant pointer

    // arr = 10; // gives error - expression must be a modifiable lvalue

    return 0;    
}