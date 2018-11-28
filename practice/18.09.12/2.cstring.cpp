#include<iostream>
using namespace std;
int main(){
    char * sentence =(char  *) "Hello world";
    cout << sentence << endl;
    cout << &sentence << endl;
    cout << (sentence + 3) << endl;
    // char * s2 = "Howdy!";
    // char * s3;
    // s3 = sentence + s2;
    return 0;
}
