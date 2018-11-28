#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<cstring>
using namespace std;
int main(int argc, char ** argv) {
int c = 2,d,i = 1,j = 0,k = 0,width;
// cin >> uppercase >> hex >> a  >> b;
long int a = strtol(argv[1],0,16);
long int b = strtol(argv[2],0,16);
// b is the number of columns
// a is the number of rows
d = a*b;
while ( d >= 0x10){
    ++c;
    d = d / 0x10;    
}
width = c; // set width to length of largest number - c 
cout << right << uppercase << hex << setw(width) << setfill(' ') << '*';
while (k<b){
    ++k;
    cout << right << setw(width) << setfill(' ') << k;
    }   
cout << endl;
while (i<=a){
    cout << right << setw(width) << setfill(' ') << i; 
    while (j<b){
        ++j;
        c = i*j;
        if (c != 0){	  
            cout << right << setw(width) << setfill(' ') << c;
        }
    }
    cout << endl;
    j = 0;
    ++i;
}
return 0;
}
