#include<iostream>
#include<iomanip>     // used for function setw()

using namespace std;
int main(){
    // Assign Variables
    
    // Loop through all ascii value 33 - 126
    for(int i = 33; i < 127; ++i){
        // set width of i to 3 spaces with 0's to fill empty spaces
        // output the character (ascii)  value of the integer
        cout  << setfill('0') << setw(3) <<  i << " " <<  (char) i << endl;
    }

    return 0;
}
