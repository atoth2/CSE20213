#include<iostream>
using namespace std;

struct Number {
    double n;
    Number * next;
};

void insert(Number *&, double);

int main() {
    double num;
    Number * head = 0;
    while (cin >> num) {
        insert(head,num);
    }
    Number * cursor = head;
    while (cursor){
        cout << cursor->n << endl;
        cursor = cursor->next;
    }

return 0;
}

void insert(Number * &head, double num){
    if (!head || head->n >= num){
        Number * newhead = new Number;
        newhead->n = num;
        newhead->next = 0; 
        head = newhead;
        return;
    }
    insert(head->next,num);
    return;
}
