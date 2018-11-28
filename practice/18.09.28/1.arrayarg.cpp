#include<iostream>
using namespace std;

int populatearray(int *,int);

#define SIZE 10

int main() {
    int number[SIZE];
    int sum;
    sum = populatearray(number, SIZE);
    for (int i =0; i < SIZE; ++i){
        cout << i << " " << number[i] <<  endl;
    }
    cout << "The sum is: " << sum << endl;
    return 0;
}

int populatearray(int * array,int size_of_array){
    int total = 0;
    for (int i = 0; i < size_of_array; ++i){
        array[i] = i * i;
        total += array[i];
    }
    return total;
}
