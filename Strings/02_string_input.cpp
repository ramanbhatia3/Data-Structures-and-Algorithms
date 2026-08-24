#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[100];

    // cout << "Enter a string: ";
    // cin >> str;
    
    // cout << str << endl;

    // In cin, the input is terminated by whitespace (space, tab, newline). So if the user enters a string with spaces, only the first word will be stored in str.

    // To read a full line of input including spaces, we can use the getline function from the <string> library. However, since we are using a character array, we can use cin.getline() instead.

    // cin.getline(str, len, delim?)

    // The cin.getline() function reads a line of text from the input stream and stores it in the character array. It takes three parameters: the character array to store the input, the maximum number of characters to read (including the null terminator), and an optional delimiter character (default is newline).

    // cout << "Enter a string: ";
    // cin.getline(str, 100);
    
    // cout << str << endl;

    // cout << "Enter a string: ";
    // cin.getline(str, 100, '$'); // read until the delimiter '$' is encountered
    
    // cout << str << endl;

    char strr[] = "Hello, World!";

    for (char c : strr) {
        cout << c << endl; // print each character of the string on a new line
    }

    return 0;
}