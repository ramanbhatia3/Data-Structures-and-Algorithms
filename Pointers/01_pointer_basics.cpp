#include <iostream>
using namespace std;

int main(){
    int a = 5;

    cout << "Address of a: " << &a << endl;

    // Pointers are the special variables that store address of other variables.

    int *ptr = &a;

    cout << "Address of a by pointer: " << ptr << endl;

    cout << "Address of pointer: " << &ptr << endl;

    return 0;    
}