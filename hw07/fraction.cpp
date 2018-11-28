/**
 * Functions for the Fraction class.
 *
 * by <your name here>
 */

#include "fraction.h"

//Constructors
Fraction::Fraction(){
    numerator = 0;
    denominator = 1;
}
Fraction::Fraction(long num){
    numerator = num;
    denominator = 1;
}
Fraction::Fraction(long num, long den){
    numerator = num;
    denominator = den;
}

// Type casting
Fraction::operator double(){
    return (double) numerator/denominator; //converts fraction to a usable double
}
Fraction::operator bool(){
    if(numerator == 0){ // if the numerator is zero it is false
        return false;
    }
    else{
        return true;
    }
}
 
// Accessors and Mutators
long Fraction::get_numerator() const{
    return numerator;
}
long Fraction::get_denominator() const{
    return denominator;
}
void Fraction::set_numerator(long num){
    numerator = num;
}
void Fraction::set_denominator(long den){
    denominator = den;
}

// Reduce the current Fraction object and return the same object (to allow chaining)
Fraction& Fraction::reduce(){
    int GCDold = denominator;
    int GCDnew = GCDold;
    while ( GCDnew != 0){
        GCDold = GCDnew;
        GCDnew = numerator % GCDnew;    //take the modulus of the current Greatest common denominator until you find a number with a modulus of 0, the previous number is thus your GCD
    }
    if (denominator < 0){
        numerator *= -1;  //switch the signs of both so the negative moves up, also gets rid of double negatives
        denominator *= -1;
    }

    this->numerator /= GCDold;
    this->denominator /= GCDold;
    return *this;
}

// IO operat
std::stream& operator>>(std::istream& lhs, Fraction& rhs){
    long num, den;
    lhs >> num >> den;
    if (den < 0){
        num *= -1;  //switch the signs of both so the negative moves up
        den *= -1;
    }
    rhs.set_numerator(num);
    rhs.set_denominator(den);
    return lhs;
}
std::ostream&  operator<<(std::ostream& lhs, const Fraction& rhs){
    long numerator = rhs.get_numerator();
    long denominator = rhs.get_denominator();
    if (denominator < 0){
        numerator *= -1;        //same as above
        denominator *= -1;
    }
    Fraction.reduce();
    lhs << "(" << numerator << "/" << denominator << ")";
}

bool operator==(const Fraction& lhs, const Fraction& rhs){
    if(rhs.get_numerator()* lhs.get_denominator() == rhs.get_denominator()*lhs.get_numerator()){    //if the numerator of left times the denominator of the right is equal to the reverse on the other side then the fractions are equal
        return 1; // true statement in boolean
    }
    else{
        return 0;   // false statement in boolean
    }
}
bool operator!=(const Fraction& lhs, const Fraction& rhs){
    if(rhs.get_numerator()* lhs.get_denominator() != rhs.get_denominator()*lhs.get_numerator()){    // same logic as above except when it is not true, follows through to the end
        return 1;
    }
    else{
        return 0;
    }
}
bool operator<(const Fraction& lhs, const Fraction& rhs){
    if(rhs.get_numerator()* lhs.get_denominator() > rhs.get_denominator()*lhs.get_numerator()){
        return 1;
    }
    else{
        return 0;
    }
}
bool operator>(const Fraction& lhs, const Fraction& rhs){
    if(rhs.get_numerator()* lhs.get_denominator() < rhs.get_denominator()*lhs.get_numerator()){
        return 1;
    }
    else{
        return 0;
    }
}
bool operator<=(const Fraction& lhs, const Fraction& rhs){
    if(rhs.get_numerator()* lhs.get_denominator() >= rhs.get_denominator()*lhs.get_numerator()){
        return 1;
    }
    else{
        return 0;
    }
}
bool operator>=(const Fraction& lhs, const Fraction& rhs){
    if(rhs.get_numerator()* lhs.get_denominator() >= rhs.get_denominator()*lhs.get_numerator()){
        return 1;
    }
    else{
        return 0;
    }
}

Fraction operator+(const Fraction& lhs, const Fraction& rhs){
    // set the fractions to have the same denominators by multiplying across the denominators of each side
    lhs.get_numerator() *= rhs.get_denominator();
    lhs.get_denominator() *= rhs.get_denominator();
    rhs.get_numerator() *= lhs.get_denominator();
    rhs.get_denominator() *= lhs.get_denominator();
    
    return Fraction( (lhs.get_numerator() + rhs.get_numerator() ,  rhs.get_denominator()+lhs.get_denominator())).reduce(); //outputs the added fractions while reducing them afterwards
}
Fraction operator-(const Fraction& lhs, const Fraction& rhs){
    // set the fractions to have the same denominators by multiplying across the denominators of each side
    lhs.get_numerator() *= rhs.get_denominator();
    lhs.get_denominator() *= rhs.get_denominator();
    rhs.get_numerator() *= lhs.get_denominator();
    rhs.get_denominator() *= lhs.get_denominator();
    
    return Fraction( (lhs.get_numerator() - rhs.get_numerator() ,  rhs.get_denominator() -  lhs.get_denominator())).reduce();
}

Fraction operator*(const Fraction& lhs, const Fraction& rhs){
    return Fraction( (lhs.get_numerator()* rhs.get_numerator() ,  rhs.get_denominator()*lhs.get_denominator())).reduce();
}
Fraction operator/(const Fraction& lhs, const Fraction& rhs){
    return Fraction( (lhs.get_numerator() / rhs.get_numerator() ,  rhs.get_denominator()/lhs.get_denominator())).reduce();
}
Fraction operator+=(Fraction& lhs, const Fraction& rhs){
    // use logic that the lieft hand side should be returned in the same fashion as above but be the only modified value on output
    lhs.get_numerator() *= rhs.get_denominator();
    lhs.get_denominator() *= rhs.get_denominator();
    rhs.get_numerator() *= lhs.get_denominator();
    rhs.get_denominator() *= lhs.get_denominator();
    
    return Fraction( (lhs.get_numerator() + rhs.get_numerator() ,  rhs.get_denominator()  + lhs.get_denominator())).lhs.reduce(); //sets the lhs to new value and reduces
}
Fraction operator-=(Fraction& lhs, const Fraction& rhs){
    lhs.get_numerator() *= rhs.get_denominator();
    lhs.get_denominator() *= rhs.get_denominator();
    rhs.get_numerator() *= lhs.get_denominator();
    rhs.get_denominator() *= lhs.get_denominator();
    return Fraction.lhs( (lhs.get_numerator() - rhs.get_numerator() ,  rhs.get_denominator()  - lhs.get_denominator())).reduce();
}
Fraction operator*=(Fraction& lhs, const Fraction& rhs){
    return Fraction.lhs( (lhs.get_numerator() * rhs.get_numerator() ,  rhs.get_denominator()  * lhs.get_denominator())).reduce();
}
Fraction operator/=(Fraction& lhs, const Fraction& rhs){
    return Fraction.lhs( (lhs.get_numerator() / rhs.get_numerator() ,  rhs.get_denominator()  / lhs.get_denominator())).reduce();
}


 // Unary operators.
 // Pre-increment.
Fraction operator++(Fraction& f){
    for ( int i =0; i < f.get_denominator(); ++i){  // incrementation of numerator should be done the value of the denominator so it is equivilant to adding 1
        &f.get_numerator()++; //allow language to handle the increment and decrements appropriately for before and after, dereference value
    }
    return Fraction( f.get_numerator(), f.get_denominator()).reduce();
}
Fraction operator--(Fraction& f){
    for ( int i =0; i < f.get_denominator(); ++i){
        &f.get_numerator()--;
    }
    return Fraction( f.get_numerator(), f.get_denominator()).reduce();
}
// Post-increment.
Fraction operator++(Fraction& f, int ignore){
    for ( int i =0; i < f.get_denominator(); ++i){
        ++&f.get_numerator();
    }
    return Fraction( f.get_numerator(), f.get_denominator()).reduce();
}
Fraction operator--(Fraction& f, int ignore){
    for ( int i =0; i < f.get_denominator(); ++i){
        --&f.get_numerator();
    }
    return Fraction( f.get_numerator(), f.get_denominator()).reduce();
}
// Negative
Fraction operator-(const Fraction& f){
    -&f.get_numerator;  // merely change the numerator to the opposite sign and then reduce
    return Fraction( f.get_numerator(), f.get_denominator()).reduce();
}

