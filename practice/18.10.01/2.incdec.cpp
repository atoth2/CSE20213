#include<iostream>
using namespace std;


int main() {
    int j =0, k=0, m=0;

    cout << "j = " << j << endl;
    cout << "++j = " << ++ j << endl;
    cout << "j = " << j << endl;
    
    cout << endl;

    cout << "k = " << k << endl;
    cout << "++k = " << ++k << endl;
    cout << "k = " << k << endl;

    cout << endl;

    cout << "m = " << m << endl;
    int n = ++j + --k + m++;
    cout << "n = " << n << endl;

    return 0;
}

