#include<iostream>
using namespace std;

#define SIZE 100

char * change(char*);

int main(){
    char in[SIZE]; 
    //++head; //memory location of in[1]

    while (cin.getline(in, SIZE)){
        cout << change(in)  << endl;
    }
    
    if (!cin.eof()){                             // end of file check
        cerr << "Problem here..." << endl;
        return 1;
    }

    cout << "All numbers read" << endl;
    
    return 0;
}

char * change(char * s){
    if (*s == 0 ){
        return s;
    }
    
    *s = toupper(*s);
    change(s + 1); // recall (recursion) s over and over incrementing by 1 until null terminator
    
    return s;
}
