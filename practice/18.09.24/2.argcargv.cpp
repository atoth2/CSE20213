#include<iostream>
#include<cstdlib> // used for atof()
#include<cstring> 
using namespace std;

int main(int argc, char ** argv) {
    int end = -1;
    for (int i = 0; i < argc; ++i){
        if (!strcmp(argv[i], "-end") && (i<argc - 1)){
            end = atoi(argv[i+1]);
            ++i;
        }
    }
    if (end<0){
        cerr << "you didn't give me a good number" << endl;
        return 0;
    }

    for (int i = 0; i<end; ++i){
        cout << i << endl;
    }
    return 0;
}
