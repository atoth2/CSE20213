#include<iostream>
using namespace std;
int main(){
    char a[] = "hello";
    char * array = & a[0];

    cout << array << endl;
    cout << *array << endl;
    cout << *array++ << endl;
   // cout << (*array)++ << endl;
    //cout << *(array++) << endl;
    cout << *array << endl; 
    return 0;
}
