// reverse a string

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str = "Hello, World!";
    cout << "Original string: " << str << endl;

    // Method 1: Using the reverse() function
    // reverse(str.begin(), str.end());
    // cout << "Reversed string (Method 1): " << str << endl;

    // Method 2: Manual reversal
    string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    cout << "Reversed string (Method 2): " << reversed << endl;

    return 0;
}