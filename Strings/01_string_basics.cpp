#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << str << endl; // constant pointers
    
    cout << strlen(str) << endl; // length of the string

    char str2[] = "World"; // string literal
    cout << str2 << endl;

    cout << str2[0] << endl; // first character of the string
    cout << str2[1] << endl; // second character of the string
    cout << str2[2] << endl; // third character of the string
    cout << str2[3] << endl; // fourth character of the string
    cout << str2[4] << endl; // fifth character of the string
    cout << str2[5] << endl; // null character of the string

    return 0;
}