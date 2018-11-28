# include <iostream>
using namespace std ;

void populate ( const int * array , const int total ) {
    const int * end = array + total ;
    while ( array != end )
    cin >> * array ++;
}

void print ( const int * array2 , const int total2 ) {
    const int * end2 = array2 + total2 ;
    while ( array2 != end2 )
    cout << * array2 ++ << endl ;
}

int main () {
    int number ;
    cin >> number ;
    int array [ number ];
    populate ( array , number );
    print ( array , number );
}
