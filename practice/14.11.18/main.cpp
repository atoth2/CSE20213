#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> v;
    int i;
    while (cin >> i){
        v.push_back(i);
    }
    for (unsigned int j=0; j < v.size(); ++j){
        cout << v[j] << endl;
    }
    cout << endl;
    for (vector<int>::iterator j = v.begin(); j < v.end(); ++j){
        cout << *j <<endl;
    }
    cout << endl;
    for (auto j = v.begin(); j <  v.end(); ++j){
        cout << *j <<endl;
    }
    cout << endl;
    vector<double> v2(100,5) //100 5's
    for (vector<double>::iterator j = v2.begin(); j < v2.end(); ++j){
        cout << *j << " ";
    }
    return 0;
}

