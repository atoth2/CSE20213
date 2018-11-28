# include <iostream>
# include <iomanip>
# define NUMBER double 

using namespace std ;

int main () {
    NUMBER accumulator = 0;
    int count = 0;
    cout << setprecision (3);
    
    while ( accumulator < 1) {
         cout << count << " \ t "
         << accumulator << endl ;
         accumulator += .01;
         count ++;
    }

}
