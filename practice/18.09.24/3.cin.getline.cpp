#include<iostream>
using namespace std;

#define SIZE (100+100)
int main() {
    char buffer[SIZE * 2];
    while (cin.getline(buffer, SIZE * 2)){
        cout << buffer << endl;
    }
    return 0;
}
