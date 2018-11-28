#include <iostream>
#define SIZE 1000000

using namespace std;

char * change(char *);

int main(){
    char in[SIZE];                          // set maximum size to 1,000,000

    while (cin.getline(in, SIZE)){          // read in lines
        cout << change(in) << endl;         // change to lower case and increment
    }
    if (!cin.eof()){                        // display if there is an error
        cerr << "Problem here..." << endl;
        return 1;
    }
    cout << "All input read" << endl;       // end gracefully
    return 0;
}


char * change(char * s ){
    if (*s == 0){                           // if not pointing to 0
        return s;
    }

    *s = tolower(*s);                       // make the letter lower case
    change(s+1);                            // go to next character location
    return s;
}
