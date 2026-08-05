// Pointer to Pointer

#include <iostream>
using namespace std;

int main(){
    int a = 5;

    int *ptr = &a;

    int **ptr2 = &ptr;
    
    cout << "Address of pointer: " << &ptr << endl;
    
    cout << "Address of pointer by pointer: " << ptr2 << endl;

    return 0;    
}