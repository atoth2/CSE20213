#include<iostream>

class Fraction {
    int num;
    int den;
public:
    Fraction();
    Fraction(int );
    Fraction(int , int );
    
    void setnum(int ) ;
    int getnum() const;
    void setden(int ) ;
    int getden() const ;
    Fraction operator*(const Fraction &);
    Fraction operator/(const Fraction &);
};

