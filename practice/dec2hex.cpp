#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int num;
	cin >> num;
	cout << uppercase << showbase << hex << num;
	cout << endl;
	cout << setbase(2);
	cout << showbase << num << endl;
	return 0;
}
