#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
	cout << setprecision(13) << M_PI << endl;
	cout << M_PI * 2 << endl;
	cout << setprecision(7) << M_PI << endl;
	cout << fixed << 3.14 << endl;
	cout << setw(15) << setfill('~') << 3.14 << endl; /*align to the right*/
	cout << internal << setw(16) << scientific << -8675309. << endl;
	return 0;
}
