#ifndef FRACFRIEND_H
#define FRACFRIEND_H

#include <string>
#include <iostream>
#include <cstdlib> // labs()

using namespace std;

class frac; // Forward Declaration <--- necessary for using frac before it is defined

// Function Prototypes for Overloaded Stream Operators
ostream &operator << (ostream &, const frac &);

// Define the GoodFriend class which has a Friend outputfrac() 
class GoodFriend {
    public:
        void showFrac(frac &);
};

class BestFriend {
    public:
        void showFrac(frac &);
};


class frac {
	long num, den;
public:
	frac() { num = 0; den = 1; }
	frac(long n, long d) { num = n; den = d; }
	frac(const frac &f) {num = f.num; den = f.den;}
// 	long getNum() {return num;}
// 	long getDen() {return den;}
// 	void setNum(long n) {num = n;}
// 	void setDen(long d) {den = d;}
// 	void outputfrac() {std::cout << ' ' << num << '/' << den << ' ';}

// 2. Friend function ---> GoodFriend::outputfrac() prototype here
    friend void GoodFriend::showFrac(frac &);
    friend class BestFriend;
    
    friend ostream &operator << ( ostream &strm, const frac &right) {
        strm << right.num << "/" << right.den;
        return strm;
    }
};

// 3. Friend class to frac - method definition here
// GoodFriend showFrac() defintion

void GoodFriend::showFrac(frac &f) 
{ 
    
    cout << " " << f.num << "/" << f.den << " ";
    
}
void BestFriend::showFrac(frac &f) { cout << " " << f.num << "/" << f.den << " ";}

#endif
