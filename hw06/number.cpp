#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<cstring>
#include<string>
#include<cctype>

using namespace std;

void errorlines();

int main(int argc, char * argv[]) {
    // Initialize all values to 0
    int int_yes = 0;    // if the user wants an integer output
    int min = 0;
    int max = 0;
    int count = 0;
    int seed = time(NULL);
    int flag = 0;       // flag if there is an improper input
        
    if (argc == 1){
        flag = 1;
        return 1;
    }
    if ( argc > 1){
        for (int j = 1; j < argc; ++j){
            if (!strcmp(argv[j],"-int")){
                int_yes = 1;    //accept ints at end of statement
            }
            else if (!strcmp(argv[j], "-min")){
                ++j;    // look at next argv to see if a digit
                if (j < argc && isdigit(argv[j][0])){   //argv[j] exists and is a digit
                    min = atoi(argv[j]);                // char to int
                }
                else {flag = 2;}                        // not true, flag an error to display at end
            }
            else if (!strcmp(argv[j], "-max")){
                ++j;
                if (j < argc && isdigit(argv[j][0])){
                    max = atoi(argv[j]);
                }
                else {flag = 3;}
            }
            else if (!strcmp(argv[j],"-count")){
                ++j;
                if (j < argc && isdigit(argv[j][0])){
                    count = atoi(argv[j]);
                }
                else {flag = 4;}
            }
            else if (!strcmp(argv[j], "-seed")){
                ++j;
                if (j < argc && isdigit(argv[j][0])){
                    seed = atoi(argv[j]);
                }
                else {flag = 5;}
            }
            else {
                errorlines();    
                break;
            }
        }
    }   
    if (count < 0){flag = 7;}       //count is negative
    if (min > max){flag = 7;}       //min is greater than max
    if (max < min){flag = 7;}       //max is less than min
    if (flag){
        errorlines();               //display error lines
        cout << flag << endl;
        return 1;
    }
    
    srand(seed);          // seed the random number generator
    //cout << setprecision(5);
    for ( int i = 1; i <= count; ++i){
        if(int_yes == 0){       //for non ints
            cout << setprecision(5);
            double rand2 =  ( (float) rand() / RAND_MAX) * (max - min) + min;
            cout << rand2 << endl;
        }
        else{                   //for ints
            double rand2 =  ( (float) rand() / RAND_MAX) * (max - min) + min;
            if (rand2 <1 ){
                rand2 = rand2 * 10;
            }
            cout << (int) rand2 << endl;
        }
    }
    return 0;
}

void errorlines(){
    cout << "Usage: rand [flags]" << endl;
    cout << " Available Flags:" << endl;        
    cout << "            -int - Produce integers rather than floating point numbers." << endl;
    cout << "   -min <number> - The smallest number to be returned. Defaults to 0." << endl;
    cout << "   -max <number> - The largest number to be returned. Defaults to 0." << endl;
    cout << " -count <number> - How many random numbers to return. Defaults to 0." << endl;
    cout << "  -seed <number> - Seed the Random Number Generator with a specific value." << endl;    
}

