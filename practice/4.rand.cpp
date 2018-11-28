#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
  srand(time(NULL));
  int max;
  cin >> max;
  if(max < 0){
    cerr << "Pick a bigger number." << endl;
    return 1;
  }
  for (int count = 0; count < max; ++count) {
    cout << ((float) rand() / RAND_MAX * 2) -1  << endl;
  }
  return 0;
}
