/*

#ifndef LANDTRACT_H
#define LANDTRACT_H

using namespace std;


class FeetInches;
ostream &operator<< (ostream&, const FeetInches&);
istream &operator>> (istream&, FeetInches&);

class FeetInches
{
  private:
    int feet, inches;
    void lowTerm();
    
  public:
  
  FeetInches(int f=0, int i=0) { feet=f; inches=i; simplify(); }
    void setFeet(int f) { feet=f; }
    void setInches(int i) { inches=i; simplify(); }
    int getFeet() { return feet; }
    int getInches() { return inches; }

    // overloading + -
    FeetInches operator + (const FeetInches &);
    FeetInches operator - (const FeetInches &);
    // pre and post ++ --
    FeetInches operator ++ (); // pre ++
    FeetInches operator ++ (int); // post ++
    FeetInches operator -- (); // pre --
    FeetInches operator -- (int); // post --
    
    // comparator operator (>)
    bool operator > (const FeetInches &);
    
    // friends
ostream &operator << (ostream & stm, const FeetInches &obj) {
        stm << "( " << obj.feet << " feet, " << obj.inches << " inches)";
    }
    
istream &operator >> (istream & stm, FeetInches &obj) {
        cout << "\n    Feet: ";
        stm >> obj.feet;
        cout << "    Inches: ";
        stm >> obj.inches;
        obj.lowTerm;
    }
};

void FeetInches::lowTerm() {
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
    temp.lowTerm();
    return temp;
}
FeetInches FeetInches::operator - (const FeetInches &right) {
    FeetInches temp;
    temp.feet = feet - right.feet;
    temp.inches = inches - right.inches;
    // when operands has opposite sign need to be fixed.
    temp.lowTerm();
    return temp;
}

FeetInches FeetInches::operator ++ () { // pre ++
    ++inches;
    lowTerm();
    return *this;
}
FeetInches FeetInches::operator ++ (int) { // post ++
    FeetInches temp(*this);
    inches++;
    lowTerm();
    return temp;
}
FeetInches FeetInches::operator -- () { // pre --
    --inches;
    lowTerm();
    return *this;
}
FeetInches FeetInches::operator -- (int) { // post --
    FeetInches temp(*this);
    inches--;
    lowTerm();
    return temp;
}
bool FeetInches::operator > (const FeetInches &right) {
    if( (feet*12 + inches) > (right.feet*12 + right.inches ) )
        return true;
    return false;
    
}
 
 
};

  FeetInches::FeetInches(string s)
  {
    stringstream ss(s);
    ss >> feet;
    char c = ss.peek();
    if (ss && c == '\'')
      ss.get();
      ss>> inches;
  }











class LandTract {
    
    private:
    
       FeetInches length, width;
       
    public:
    
       LandTract() {width = 1; length = 1;};
       LandTract(FeetInches w, FeetInches l) {width = w; length =l;};
       
       FeetInches getArea() {
           double wid = width;
           double len = length;
           double area = wid*len;
           FeetInches temp(area);
           return temp;
       };
           
};








#endif

*/


#ifndef LANDTRACT_H
#define LANDTRACT_H

#include <iostream>
using namespace std;

class FeetInches;
ostream &operator<< (ostream&, const FeetInches&);
istream &operator>> (istream&, FeetInches&);

class FeetInches {
  private:
   int feet;        // To hold a number of feet
   int inches;      // To hold a number of inches
   void lowTerm(); // Defined in FeetInches.cpp
  public:
	FeetInches(int f = 0, int i = 0)
		{ feet = f; inches = i; lowTerm(); }
	FeetInches(string s);
	void setFeet(int f) { feet = f; }
	void setInches(int i) { inches = i; lowTerm(); }
	int getFeet() const { return feet; }
	int getInches() const { return inches; }

   // Overloaded operator functions
	FeetInches operator + (const FeetInches &); // Overloaded +
	FeetInches operator - (const FeetInches &); // Overloaded -
	FeetInches& operator ++ ();					// Prefix ++
	FeetInches operator ++ (int);				// Postfix ++
	FeetInches& operator -- ();					// Prefix --
	FeetInches operator -- (int);				// Postfix --
	bool operator > (const FeetInches &);		// Overloaded >
	bool operator < (const FeetInches &);		// Overloaded <
	bool operator >= (const FeetInches &);		// Overloaded >=
	bool operator <= (const FeetInches &);		// Overloaded <=
	bool operator == (const FeetInches &);		// Overloaded ==
	bool operator != (const FeetInches &);		// Overloaded !=
	

   // Conversion functions
	operator double();
	operator int();
	
   // Friends
	friend ostream &operator << (ostream &, const FeetInches &);
	friend istream &operator >> (istream &, FeetInches &);
};

void FeetInches::lowTerm() {
	if (inches >= 12) {
		feet += (inches / 12);
		inches = inches % 12;
	}
	else if (inches < 0) {
		feet -= ((abs(inches) / 12) + 1);
		inches = 12 - (abs(inches) % 12);
	}
}

FeetInches FeetInches::operator + (const FeetInches &right) {
	FeetInches temp;
	temp.inches = inches + right.inches;
	temp.feet = feet + right.feet;
	temp.lowTerm();
	return temp;
}

FeetInches FeetInches::operator - (const FeetInches &right) {
	FeetInches temp;
	temp.inches = inches - right.inches;
	temp.feet = feet - right.feet;
	temp.lowTerm();	
	return temp;
}

FeetInches& FeetInches::operator ++ ()
   { ++inches; lowTerm(); return *this; }

FeetInches FeetInches::operator ++ (int) 
	{ FeetInches temp(feet, inches);
	  inches++; lowTerm(); return temp; }
	  
FeetInches& FeetInches::operator -- ()
   { --inches; lowTerm(); } //return *this; }

FeetInches FeetInches::operator -- (int) 
	{ FeetInches temp(feet, inches);
	  inches--; lowTerm(); return temp; }

bool FeetInches::operator > (const FeetInches &right) {
	bool status;
	if (feet > right.feet)
		status = true;
	else if (feet == right.feet && inches > right.inches)
		status = true;
	else
		status = false;
	return status;
}

bool FeetInches::operator < (const FeetInches &right) {
	bool status;
	if (feet < right.feet)
		status = true;
	else if (feet == right.feet && inches < right.inches)
		status = true;
	else
		status = false;
	return status;
}

bool FeetInches::operator >= (const FeetInches &right){
   bool status;
   if ((*this > right) || (*this == right))
      status = true;
   else status = false;
   return status;
}

bool FeetInches::operator <= (const FeetInches &right) {
   bool status;
   if ((*this < right) || (*this == right))
      status = true;
   else status = false;
   return status;
}

bool FeetInches::operator == (const FeetInches &right) {
	bool status;
	if (feet == right.feet && inches == right.inches)
		status = true;
	else
		status = false;
	return status;
}

bool FeetInches::operator != (const FeetInches &right) {
   bool status;
   if (*this == right) status = false;
   else status = true;
   return status;
}

ostream &operator<<(ostream &strm, const FeetInches &obj) {
	strm << obj.feet << " feet, " << obj.inches << " inches";
	return strm;
}

istream &operator >> (istream &strm, FeetInches &obj) {
	cout << "Feet: ";
	strm >> obj.feet;
	cout << "Inches: ";
	strm >> obj.inches;
	obj.lowTerm();
	return strm;
}

FeetInches::operator double() {
	double temp = feet;
	temp += (inches / 12.0);
	return temp;
}

FeetInches::operator int() { return feet; }


FeetInches::FeetInches(string s) {
    stringstream  ss(s); // use this form 3'9"
    ss >> feet;
    char c = ss.peek();
    if(ss && c=='\'')
        ss.get();
        ss >> inches;
};

class LandTract {
private:
    FeetInches width, length;
public:
    LandTract() {width=1; length=1;};
    LandTract(FeetInches w, FeetInches l) {width=w; length=l;};
    FeetInches getWidth() { return width; }
	FeetInches getLength() { return length; }
    void setWidth( FeetInches w ) { width = w; }
	void setLength( FeetInches l ) { length = l; }
    FeetInches getArea() {
        double wid = width;
        double len = length;
        double area = wid*len;
        FeetInches temp(area);
        return temp;
    };
};


#endif
