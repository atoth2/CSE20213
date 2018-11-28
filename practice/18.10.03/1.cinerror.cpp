#include<iostream>
using namespace std;
int main(){
    char in; 
    while (cin >> in){
        cout << in << endl;
    }
    
    if (!cin.eof()){                             // end of file check
        cerr << "Problem here..." << endl;
        return 1;
    }

    cout << "All numbers read" << endl;
    
    return 0;
}
