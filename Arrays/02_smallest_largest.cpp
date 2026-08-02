// Find the smallest and largest numbers in an array

#include <iostream>
using namespace std;

int main(){
    int nums[] = {93, 53, -75, 64, 74};

    int size = 5;

    int smallest = nums[0];
    int largest = nums[0];

    for (int i = 0; i < size; i++){
        // if (nums[i] < smallest){
        //     smallest = nums[i];
        // }

        // or
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }

    cout << "Smallest value in the array is " << smallest << endl;
    cout << "Largest value in the array is " << largest << endl;

    return 0;
}