#include<iostream>
using namespace std;

struct Point {
    double x;
    double y;
};

int main() {
    Point p[50];
    int count = 0;
    
    /*
    Examples of accessing elements in the struct
    p[0].x
    p[0].y
    Point here;
    here.x = 29834;
    here.y = 93408;
    */

    while (cin >> p[count].x >> p[count].y){
        ++count;
    }
    for (int i =0; i < count; ++i){
        cout << "(" << p[i].x << ", " << p[i].y << ")" << endl;
    }
    return 0;
}

