#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<cstring>
#include<string>

using namespace std;


int main(int argc, char ** argv) {
    srand(time(NULL));


    if ( argv[1] == 0){
        cerr << "number <quantity> <upper limit>" << endl;
//        cerr << "Number of values not inserted" << endl;
        return 1;
    }

    else if (argv[2] == 0){
        cerr << "number <quantity> <upper limit>" << endl;
        cerr << "Upper limit of values not inserted" << endl;
        return 2;
    }

    else{
        int quant = atoi(argv[1]);
        int lim = atoi(argv[2]);
        // quant is the quantity of random numbers
        // lim is the upper limit of the values
    
        float rand2;

        for ( int i = 1; i <= quant; ++i){
            rand2 =  ( (float) rand() / RAND_MAX) * lim;
            cout << rand2 << endl;
        }
    }

    return 0;

}
