#include <iostream>
using namespace std;

int main(){
    string str = "Hello, World!";

    for (int i = 0; i < str.length(); i++) {
        cout << str[i] << endl; // print each character of the string on a new line
    }

    for (char c : str) {
        cout << c << endl; // print each character of the string on a new line
    }

    return 0;
}