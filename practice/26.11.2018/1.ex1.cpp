#include<iostream>

using namespace std;

void increment(int &count) {    //pass in value associated with count
    ++count;
}

int main() {
    int count = 0;
    increment(count);
    cout << count << endl;
    return 0;
}

