#include<iostream>
#include<iomanip>     // used for function setw()
#include<cctype>     // used for function isalnum(), isalpha()

using namespace std;
int main(){
    // Assign Variables
    char values;
    int counter = 0;
    
    // loop through all the character inputs to the interface
    while(cin.get( values) ){ 
        if (isalnum(values) || values == '\'' || values == '-'){ // number, letter, hypen, apostrophe
            counter = 1;
            if (islower(values)){           // is alpha lowercase
                values = toupper(values);   // make upper case
                cout << values;             // print value
            }
            else {                          // if number, upper, hyphen, apostrophe
                cout << values;             // print value as is
            }
        }   
        else{                               // every other character
            if (counter == 1){              // if previous character was valid
                cout << endl;               // print endline
                counter = 0;                // reset counter till next valid character
            }
        }
    }
    cout << endl;    
    return 0;
}
