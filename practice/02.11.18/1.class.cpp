#include<iostream>

using namespace std;

class Fraction {
    int num;
    int den;
public:
    Fraction(){
        this->num = 0;
        this->den =1;
    }
    Fraction(int num){
        this->num = num;
        this->den =1;
    }
    Fraction(int num, int den){
        this->num = num;
        this->den = den;
    }

    
    void setnum(int n) {
        this->num = n;
    }
    int getnum() {
        return num;
    }
    void setden(int d) {
        den = d;
    }
    int getden() {
        return den;
    }
};


int main() {
    int x{3};           // set first value of x to 3
    int y[]{1,2,3};     // set vector values of y to 1,2,3
    Fraction f{1,3}, h;
    Fraction g{2};
    cout << "f = " << f.getnum() << "/" << f.getden() << endl; 
    cout << "g = " << g.getnum() << "/" << g.getden() << endl; 
    cout << "h = " << h.getnum() << "/" << h.getden() << endl; 
    return 0;
}

