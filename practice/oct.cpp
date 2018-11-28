/* cCompute the area of an octagon ... according to Bin.tm
 * * by Alexander Toth
 * */
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double a;
	cin >> a;
	double area;
	area = 2 * (1 + sqrt(2)) * pow(a,2);
	cout << area << endl;
	return 0;
}
