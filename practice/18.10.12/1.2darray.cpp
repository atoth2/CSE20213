#include<iostream>
using namespace std;

void printarray(const int[][3], int);

int main() {
  int foo[][3] = {
    {3, 4, 5},
    {6, 7, 8},
    {9, 10, 11},
    {12, 13, 14}};

  cout << foo << endl;
  printarray(foo, 3);
  return 0;
}

void printarray(const int array[][3], int size) {
  for (int i = 0; i < size; ++i) {
    cout << array[i] << "\t";
  }
  cout << endl;
}

