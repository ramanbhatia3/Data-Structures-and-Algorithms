// Pointer Arithmetic

#include <iostream>
using namespace std;

int main(){
    int a = 10;

    int *ptr = &a;

    cout << ptr << endl;

    ptr ++;

    cout << ptr << endl;

    ptr --;
    ptr--;

    cout << ptr << endl;

    ptr = ptr - 1;

    cout << ptr << endl;

    ptr = ptr + 2;

    cout << ptr << endl;

    int *ptr2;
    int *ptr1 = ptr2 + 2;

    cout << ptr1 - ptr2 << endl; // 2 (number of blocks of type(int))

    return 0;    
}