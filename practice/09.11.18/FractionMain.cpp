#include<iostream>
#include"Fraction.h"
using namespace std;

int main() {
    Fraction f{1,3}, h;
    Fraction g{2};
    cout << "f = " << f.getnum() << "/" << f.getden() << endl; 
    cout << "g = " << g.getnum() << "/" << g.getden() << endl; 
    cout << "h = " << h.getnum() << "/" << h.getden() << endl; 
    return 0;
}

