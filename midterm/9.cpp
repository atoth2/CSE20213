#include <iostream>
# include <cstring>

using namespace std ;

int main () {
    char a [] = "0123456789ABCDE" ;
    char b [] = "..............." ;
    b[ strlen ( b )] = '-';
    cout << & a << endl ;
    cout << & b << endl ;
    cout << a - b << endl ;
    cout << & b [14] << endl ;
}

