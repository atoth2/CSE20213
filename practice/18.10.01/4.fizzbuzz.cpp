#include<iostream>
using namespace std;


int main() {

    // 1-30
    // if n is divisible by 3, print "fizz"
    // if n is divisible by 5, print "buzz"
    // if n is divisible by both, print "fizzbuzz"
    
    for (int i = 1; i <=30; ++i){
        cout << i << " "
            << (!(i % 15) ? "fizzbuzz"  : 
            (!(i % 3) ? "fizz" :
            (!(i %5) ? "buzz" : "")))
            << endl;
    }
    
    return 0;
}

