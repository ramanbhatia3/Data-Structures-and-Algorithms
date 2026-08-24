#include <iostream>
using namespace std;

int main(){
    string str = "Hello, World!";

    cout << str << endl; // print the string

    str = "Hello, C++!"; // assign a new value to the string (strings are dynamic in nature, so we can change their values) [dunamic => runtime resize]

    cout << str << endl; // print the new string

    string str1 = "Hello, ";
    string str2 = "Programmers!";
    string str3 = str1 + str2; // concatenate two strings

    cout << str3 << endl; // print the concatenated string

    cout << (str1 == str2) << endl; // compare two strings (returns 0 if they are not equal, 1 if they are equal)

    string strr1 = "Raman";
    string strr2 = "Mohit";

    cout << (strr1 < strr2) << endl; // compare two strings lexicographically (returns 1 if strr1 is less than strr2, 0 otherwise)
    // Here false because 'R' is greater than 'M' in ASCII value, so strr1 is not less than strr2.


    return 0;
}