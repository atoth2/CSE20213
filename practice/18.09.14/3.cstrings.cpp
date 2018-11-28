#include<iostream>
using namespace std;
int main() {
    // char * s = "Go Irish!";
    char s[] = "Go Irish!";
    cout << s << endl;
    cout << "Length of s: " << strlen(s) << endl;
    for (unsigned int i=0; i < srlen(s); i++) {
        s[i] = tolower(s[i]);
    }
    cout << s << endl;
    return 0;
}
