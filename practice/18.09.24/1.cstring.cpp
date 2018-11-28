#include<iostream>
using namespace std;

int main() {
    char s1[] = "Howdy";
    char s2[] = "Y'all";
    char * words[] = [s1, s2];
    char * * w2 = words;

    cout << w2[0] << endl;
    cout << words[1]  << endl;
    
    return 0;
}
