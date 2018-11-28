#include<iostream>
using namespace std;

struct Point {
    double x;
    double y;
    Point * next;
};

void killallthepointers(Point*);

int main() {
    Point *p, *head;
    p = new Point;
    p->next = 0;
    head = p; 
    
    while (cin >> (*p).x >> p->y){
        p->next = new Point;
        p = p->next;
        p->next = 0;
    }

    p = head;

    while (p->next) {
    //equivalent
    //while (p -> next != 0)
        cout << "(" << p->x << ", " << p->y << ")" << endl;
        p = p->next ;
    }

    delete p;

    return 0;
}

void killallthepointers(Point* p){
    if(p){
        killallthepointers(p->next);
        delete p;
    }
}
