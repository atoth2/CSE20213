#include<iostream>
#include<iomanip>
using namespace std;

void avgarray(double *, int);
void printarray(double *, int);

int main() {
    double nums[] = {5, 7, 3.4, -18, 1, 0,  45, 32.1};
    int size = 8;
    
    for (int i = 0; i <100; ++i){
        avgarray(nums,size);
        printarray(nums,size);
    }

    return 0;
}

void avgarray(double * nums, int size) {
    double x,y,z;
    y = nums[size - 1];
    z = nums[0];

    for(int index = 0; index < size; ++index){
        ++index;
        x = y;
        y = z;
        z = nums[(index + 1) % size];  // divide by to mod and get only number 1-7
        nums[index] = (x+y+z)/ 3;
    }
};

void printarray(double * nums, int size){
    for(int index = 0; index < size; ++index){
        cout << fixed << setw(4) << nums[index] << " ";
    }
    cout << endl;
};
