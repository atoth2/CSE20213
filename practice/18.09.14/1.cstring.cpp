#include<iostream>
using namespace std;
int main() {
    // char * s = "Go Irish!";
    char s[] = "Go Irish!";
    cout << s << endl;
    cout << &s << endl;
    cout << s[5] << endl;
    cout << &s[5] << endl;
    return 0;
}
