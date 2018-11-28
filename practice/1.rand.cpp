#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
  srand(time(NULL));
  int count = 0;
  while (count<10) {
    // Print random integer 0-12
    // cout << (rand() % 13 )<< endl;
    
    // Print floating point number between 0-1
    // cout << ((float) rand() / RAND_MAX * 10) << endl;
    // Print a floating point number between -1 -1
    cout << ((float) rand() / RAND_MAX * 2) -1  << endl;
    ++count;
  }
  return 0;
}
