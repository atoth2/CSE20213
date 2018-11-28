#include<iostream>
#include<cstdlib> // used for atof()
using namespace std;

int main(int argc, char ** argv) {
    for (int i = 0; i < argc; i++){
        cout << "Argument " << i << " is: " << argv[i]  << endl;
        double num;
        num = atof(argv[i]);
        cout << "         As a number, it is: " << num  << endl;
    }
    return 0;
}
