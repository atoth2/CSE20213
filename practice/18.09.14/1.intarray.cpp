#include<iostream>
using namespace std;
int main() {
    int nums[3];   
    int * pi = nums;
    nums[0] = 3;
    nums[1] = 4;
    nums[2] = 5;
    for (int i=0; i < 3; i++){
        cout << nums[i] << ", ";
    }
    cout << endl;
    cout << sizeof(nums) << endl;
    cout<< sizeof(nums[4]) << endl;
    cout<< sizeof(&nums) << endl;

    cout << endl;
    cout<< pi << endl;
    cout<< (pi + 1) << endl;
    cout<< *pi  << endl;
    cout<< *(pi + 1)  << endl;
 return 0;
}
