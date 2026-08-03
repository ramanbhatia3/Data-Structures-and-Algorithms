// vector functions

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> vec = {0, 1, 2, 3};

    cout << "Size: " << vec.size() << endl;

    for (int i : vec){
        cout << i << " ";
    }

    cout << endl;

    vec.push_back(4);

    cout << "Size: " << vec.size() << endl;

    for (int i : vec){
        cout << i << " ";
    }

    cout << endl;

    vec.pop_back();

    cout << "Size: " << vec.size() << endl;

    for (int i : vec){
        cout << i << " ";
    }

    cout << endl;

    cout << "Front Value: " << vec.front() << endl;

    cout << "Last Value: " << vec.back() << endl;

    cout << "Value at 2: " << vec.at(2) << endl;

    vec.push_back(4);
    vec.push_back(5);

    cout << "Capacity: " << vec.capacity() << endl;

    cout << "Size: " << vec.size() << endl;

    for (int i : vec){
        cout << i << " ";
    }

    cout << endl;
    
    return 0;
}