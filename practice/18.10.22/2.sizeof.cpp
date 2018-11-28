#include<iostream>
using namespace std;

struct Point {
    double x;
    double y;
    char c;
};

int main() {
    cout << "sizeof(double) = " << sizeof(double) << endl;
    cout << "sizeof(char) = " << sizeof(char) << endl;
    cout << "sizeof(Point) = " << sizeof(Point) << endl; 
    //assigns allocation based on largest item
    // char will be assigned a value of a double worth of space

    return 0;
}

