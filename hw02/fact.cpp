#include<iostream>
#include<cmath>
using namespace std;
int main() {
	signed int a,b,c;
	cin >> a; //input value of integer
	b = abs(a); //assign absolut value of input
	//loop through all values less than input
	while(b > 0) {
		c = a % b; //Find the operand
		//If the operand is 0, it is a factor
		if(c == 0) {
			if(a > 0){ //Positive input integer
				cout << b << endl;
			}
			else{ //Negative input integer
				cout << b << endl;
				cout << -b << endl;
			}
		}
		--b;
	}
	return 0;
}
