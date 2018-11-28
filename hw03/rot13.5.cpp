#include<iostream>
#include<iomanip>     // used for function setw()
#include<cctype>     // used for function isalnum(), isalpha()

using namespace std;
int main(){
    // Assign Variables
    char values;

    // loop through all the character inputs to the interface
    while(cin.get( values) ){ 
        if (isalnum(values)){    // is it a number or letter
            if (isalpha(values)){                   // is it a letter
                if (islower(values)){               // is it lowercase
                    if ( (values - 'a') < 13){      // shift forward if in first half of lower case
                        values += 13;
                    }
                    else {
                        values -= 13;
                    }
                }
                else{                               // it is upper case
                    if ( (values - 'A') < 13){      // shift forward if in first half of upper case
                        values += 13;
                    }
                    else {
                        values -= 13;
                    }
                }            
            }
            else{
                if ( (values - '0') < 5){           // it is a number, shift forward in first half
                    values += 5;
                }
                else {
                    values -= 5;
                }
            }
        }
        
        cout << values; //output values

    }
    cout << endl;    
    return 0;
}
