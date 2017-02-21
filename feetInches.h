#ifndef FEETINCHES_H
#define FEETINCHES_H

#include <iostream>

using namespace std;

class FeetInches;
ostream &operator << (ostream &, const FeetInches &);
istream &operator >> (istream &, FeetInches &);

class FeetInches {
private:
    int feet;
    int inches; 
    void simplify(); // simplify the term
public:
    FeetInches(int f=0, int i=0) { feet=f; inches=i; simplify(); }
    void setFeet(int f) { feet=f; }
    void setInches(int i) { inches=i; simplify(); }
    int getFeet() { return feet; }
    int getInches() { return inches; }
    // copy construcor
    FeetInches( FeetInches &right ) {
        feet = right.feet; inches = right.inches;
    }
    // overloading + -
    FeetInches operator + (const FeetInches &right);
    FeetInches operator - (const FeetInches &right);
    
    // pre and post ++ --
    FeetInches operator ++ (); // pre ++
    FeetInches operator ++ (int); // post ++
    FeetInches operator -- (); // pre --
    FeetInches operator -- (int); // post --
    
    // comparator operator (>)
    bool operator > (const FeetInches &);
    
    // friends
    friend ostream &operator << (ostream & stm, const FeetInches &obj) {
        stm << "(" << obj.feet << " feet, " << obj.inches << " inches)";
    }
    
    friend istream &operator >> (istream & stm, FeetInches &obj) {
        cout << "\n    Feet: ";
        stm >> obj.feet;
        cout << "    Inches: ";
        stm >> obj.inches;
        obj.simplify();
    }
};

void FeetInches::simplify() {
    if(inches >= 12) {
        if(feet >= 0) feet += (inches/12);
        else feet -= (inches/12);
        inches = inches%12;
    }
    // by definition negative inches is now allowed.
}

FeetInches FeetInches::operator + (const FeetInches &right) {
    FeetInches temp;
    temp.feet = feet + right.feet;
    temp.inches = inches + right.inches;
    // when operands has opposite sign need to be fixed.
    temp.simplify();
    return temp;
}
FeetInches FeetInches::operator - (const FeetInches &right) {
    FeetInches temp;
    temp.feet = feet - right.feet;
    temp.inches = inches - right.inches;
    // when operands has opposite sign need to be fixed.
    temp.simplify();
    return temp;
}

FeetInches FeetInches::operator ++ () { // pre ++
    ++inches;
    simplify();
    return *this;
}
FeetInches FeetInches::operator ++ (int) { // post ++
    FeetInches temp(*this);
    inches++;
    simplify();
    return temp;
}
FeetInches FeetInches::operator -- () { // pre --
    --inches;
    simplify();
    return *this;
}
FeetInches FeetInches::operator -- (int) { // post --
    FeetInches temp(*this);
    inches--;
    simplify();
    return temp;
}
bool FeetInches::operator > (const FeetInches &right) {
    if( (feet*12 + inches) > (right.feet*12 + right.inches ) )
        return true;
    return false;
    
}
    
#endif
