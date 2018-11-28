/**
 * Homework 4 Part 2
 * by 
 * Print a grid of the specified size.
 */
#include<iostream>
using namespace std;

// Function prototype
void printgrid(int, int, int);

// Main function.
int main() {
  int rows, cols, size;
  cin >> rows >> cols >> size;
  printgrid(rows, cols, size);
  return 0;
}

void printgrid(int rows, int cols, int size){
    for (int i = 0; i <=  rows; ++i){               // for all rows
        for (int j = 0; j <= cols; ++j){            // for all columns
            cout << '+';                            //start each column with a +
            for (int k = 0; k < size; ++k){         // for all size spaces
                if (j != cols){                     // if not after the last column
                    cout << '-' << '-';          
                }
            }
        }
        cout << endl;                               // end of line
        
        if (i != rows){                             // middle spacing of the grid
            for (int m = 0; m < (size) ; ++m){      // for all columns
                for (int j = 0; j <=  cols; ++j){   // start column with |
                        cout << '|';                
                    for (int k = 0; k < size; ++k){ // build center of grid with space
                        cout << ' ' << ' ';
                    }   
                }
                cout << endl;                      // end internal spacing
            }
        }


    }
}

