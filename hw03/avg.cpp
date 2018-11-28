#include<iostream>
#include<cmath>     // used for function isnan()

using namespace std;
int main(){
    // Assign Variables
    int i;
    double nums, aveval = 0;

    // Loop through as long as input is recieved
    while (cin >> nums){
        aveval += nums; // add current value input
        ++i;            // increment number counter
    }
  
    aveval = aveval/i;  // divide sum by number of numbers
    
    if (isnan(aveval)){ //how to handle non-number input http://www.cplusplus.com/reference/cmath/isnan/
        cout << 0 << endl;
        cout << "Non-number result"  << endl;    
    }
    else{
        cout << aveval << endl; // output average
    }

    return 0;
}
