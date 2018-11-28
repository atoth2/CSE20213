#include<iostream>

using namespace std;

int increment() {    //pass in value associated with count
    static int count = 0;
    return ++count;
}

int main() {
    cout << increment() << endl;
    cout << increment() << endl;
    cout << increment() << endl;
    return 0;
}

