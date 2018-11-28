#include"Fraction.h"

Fraction::Fraction(){
    this->num = 0;
    this->den =1;
}
Fraction::Fraction(int num){
    this->num = num;
    this->den =1;
}
Fraction::Fraction(int num, int den){
    this->num = num;
    this->den = den;
}


void Fraction::setnum(int n) {
    this->num = n;
}
int Fraction::getnum() const  {
    return num;
}
void Fraction::setden(int d) {
    den = d;
}
int Fraction::getden() const {
    return den;
}
Fraction Fraction::operator*(const Fraction &rhs){
    return Fraction(num * rhs.num, den * rhs.den);   
}
Fraction Fraction::operator/(const Fraction &rhs){
    return Fraction(num * rhs.den, den * rhs.num);   
}
