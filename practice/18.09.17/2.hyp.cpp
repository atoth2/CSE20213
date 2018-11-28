#include<iostream>
#include<cmath>

using namespace std;

double hyp(double,double);

int main() {
    double leg1, leg2;
    cin >> leg1 >> leg2;
    cout << hyp(leg1,leg2) << endl;    
    return 0;
}

double hyp(double L1, double L2){
    return sqrt((pow(L1,2) + pow(L2,2)));
}
