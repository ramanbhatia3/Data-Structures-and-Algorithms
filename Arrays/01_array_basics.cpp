#include <iostream>
using namespace std;

int main(){
    int marks[5] = {93, 53, 75, 64, 74};

    double price[] = {99.99, 199.51, 30.00};

    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << marks[4] << endl;

    // Loops on Arrays
    cout << "Size of Array marks: " << sizeof(marks) / sizeof(int) << endl;

    // for (int i = 0; i < 5; i++){
    //     cout << marks[i] << endl;
    // }

    int scores[5];

    cout << "Enter 5 scores: ";

    for (int i = 0; i < 5; i++){
        cin >> scores[i];
    }

    for (int i = 0; i < 5; i++){
        cout << scores[i] << endl;
    }

    return 0;
}