#include <iostream>
#define SIZE 1000000

using namespace std;

char * change(char *);

int main(){
    char in[SIZE]

    while (cin.getline(in, SIZE)){
        cout << change(in) << endl;
    }
    if (!cin.eof()){
        cerr << "Problem here..." << endl;
        return 1;
    }
    cout << "All input read" << endl;
    return 0;
}


char * change(char * s ){
    char * head = s;
    count = 0;
    while (*head != 0){
        if(isdigit(*head)){
            count++;
        }
    }
    return s;
}
