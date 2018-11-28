#include<iostream>
#include<string>
using namespace std;


int main() {
    string s = "Howdy";
    string p = "Y'all!";
    string all = s + " " + p ;

    cout << all << endl;

    cout << all.length() << endl;
    all = "hi";
    cout << all << endl;
    cout << all.length() << endl;
    
    cout << all[0] << endl;
    cout << all[1] << endl;
    cout << all.at(0) << endl;
    cout << all.at(1) << endl;

    string num = "The number is " + to_string(3);
    cout << num << endl;
return 0;
}

