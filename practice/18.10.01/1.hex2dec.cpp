#include<iostream>
#include<cstdlib>
using namespace std;

#define ERRORMESSAGE "type one number after the program name."

int main(int argc, char * argv[]) {
    if (argc != 2){
        cerr << ERRORMESSAGE << endl;
        return 1;
    }
    cout << strtol(argv[1], NULL, 16) << endl;
    return 0;
}

