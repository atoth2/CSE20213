#include<iostream>
using namespace std;
int main() {
	char ch;
	int count = 0;
	while(cin.get(ch)) {
		if (ch >= 'A' && ch <= 'Z'){
			++count;
		}
		//cout << "You typed: " << ch << ", ascii value " 
			// << int(ch) <<  endl;
	}
	//cout << "There were " << count << " capital letters." << endl;
	cout << count << endl;
	return 0;
}
