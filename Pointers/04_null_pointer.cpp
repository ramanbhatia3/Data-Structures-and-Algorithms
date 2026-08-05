// Null Pointer - A pointer that doesn't point to any location

#include <iostream>
using namespace std;

int main(){
    int a = 5;

    int *ptr;
    
    cout << ptr << endl;

    int *ptr2 = nullptr;
    
    cout << ptr2 << endl;

    int *ptr3 = NULL;
    
    cout << ptr3 << endl;

    return 0;    
}