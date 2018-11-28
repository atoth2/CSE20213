#include<iostream>

using namespace std;

long findlimit(long, long);

int main(){
    long size = 1;
    char * array;
    while(1){
        array = new (nothrow) char[size];
        //array = new char[size];
        cout << size << "\t" << (void *) array << endl;
        delete[] array;
        
        if (array == 0) {
            cout << "Died asking for " << size << " bytes." << endl;
            break;
        }        
        
        size <<= 1;              // bit shifting
    }
    cout << "Biggest size " << findlimit(0,size) << endl;
    return 0;
}

long findlimit(long lower, long upper){
    if (lower > upper){
        return -1;
    }
    long mid = (upper - lower)/2 + lower;
    char * test = new (nothrow) char[mid];
    delete[] test;
    if (test) {
        findlimit(mid, upper);
    }
}
