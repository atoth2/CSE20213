#include<iostream>

using namespace std;

int main(){
    char * array = 0;
    for int (i = 1; ; ++i){
        array = new char[(long) pow(2,i)];      //new means rewrite variable to a new size
        cout << (long) pow(2,i) << endl;
        delete[] array;                         //delete means delete the old array
    }

    return 0;
}
