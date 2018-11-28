#include<iostream>

using namespace std;

int fib(int n) {    //pass in value associated with count
    if (n<2) return n;
    return fib(n-1) + fib(n-2);
}

int main() {
    for (int i = 0; i < 48; ++i){
        cout << i  << " " <<fib(i) << endl;
    }
    return 0;
}

