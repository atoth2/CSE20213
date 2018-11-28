#include<iostream>
#include<iomanip>
using namespace std;


double timestworeal(double x) {
    cout << "Inside the real function: " << &x << endl;
    x = x*2;
    return x;
}

double timestwo(double x) {
    cout << "Inside the fake0 function: " << &x << endl;
    x = x*2;
    return x;
}

double timestwo1(double x) {
    cout << "Inside the fake1 function: " << &x << endl;
    x = timestworeal(x);
    return x;
}

int main() {
    int x=3;
    for(int x = 0; x<=10; x++){
        cout << "Outside the function: " << &x << endl;
        cout << setw(10) << x << setw(10) << timestwo(x) << endl;
        cout << setw(10) << x << setw(10) << timestwo1(x) << endl;
    }
    cout << "Outside the function: " << &x << endl;
    cout << "X is " << x << endl;
    return 0;
}
