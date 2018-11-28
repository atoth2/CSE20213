#include<iostream>
using namespace std;


int main() {
    int x;
    cin >> x;

    /*
    if (x%2) {      // modulus gives a value of 1
        cout << "You gave me an add number." << endl;
    }
    else{
        cout << "You gave me an even number." << endl;
    }
    */

    cout << "You gave me an " 
        << ( x%2 ? "odd"  : "even" ) 
        << " number." << endl;

    return 0;
}

