#include<iostream>
using namespace std;

struct Number {
    double n;
    Number * next;
};


int main() {
    double num;
    Number * head = 0;
    while (cin >> num) {
        Number *newnum = new Number;
        newnum->n = num;
        newnum->next = 0;
        //If there is not a list yet
        if (!head){
            head = newnum;
        }
        else{
            Number * cursor = head;
            //If newnum should be added to the first of the list
            if (num<cursor->n){
                newnum->next = cursor;
                head = newnum;
            }
            else {
            Number * cursor = head;
            while(1){
            //There is a list
            //Head is smaller than newnum
            //Figure out where newnum should go
                if (!cursor -> next){
                    //We are at the end of the list
                    cursor->next = newnum;
                }   
                else if (newnum ->n < cursor->next->n){
                    cursor->next = cursor ->next;
                    cursor->next = newnum;
                    break;
                }
            }
            cursor = cursor->next;
            }
        }
    }
    Number * cursor = head;
    while(cursor){
        cout << cursor -> n << endl;
        cursor = cursor -> next;
    }
return 0;
}

