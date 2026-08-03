#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> vec = {0, 1, 2, 3};

    cout << vec[0];

    vector <int> vect(3,1);

    cout << vect[0];
    cout << vect[1];
    cout << vect[2];

    cout << endl;

    // for each loop
    for (int i : vec){
        cout << i << endl;
    }

    return 0;
}