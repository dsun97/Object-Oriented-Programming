#ifndef FRAC_H
#define FRAC_H

#include <string>


// friend ostream operator << 
// forward declaration

class Frac;
std::ostream &operator << (std::ostream &, const Frac &);


class Frac {
    
private:
    
  long num;
  long den;
  
  //helpers
  long gcd(long a, long b) {
      long c = a%b;
      while (c != 0) {
          a = b;
          b = c;
          c = a % b;
      }
      return b;
  };
  
  void lowTerm() {
      long g = gcd(num, den);
      num = num / g;
      den = den / g;
      
  };
    
public:

    //default constructor
    Frac() {num = 0; den= 1;};
    
    Frac(long n) {num = n; den=1;};
    
    Frac(long n, long d) {num = n; den = d; lowTerm();}; 
    
    Frac(const Frac &obj) {num = obj.num; den = obj.den; lowTerm(); };
    
    void set(long n, long d) {num = n; den = d; lowTerm(); };
    
    //Frac& returnObj(void) {};
    
    /*
    Frac(const Frac &f) {
        num = f.num; 
        den = f.den;
    };
    */
    
    void operator = (const Frac &f) {
        num = f.num; 
        den = f.den;
        lowTerm();
    };
    
    //Overloaded Math Operators
    Frac operator + (const Frac &f) {
        Frac temp;
        temp.num = num* f.den + f.num* den; 
        temp.den = den* f.den;
        temp.lowTerm();
        return temp;
    };
    
    Frac operator - (const Frac &f) {
        Frac temp;
        temp.num = num* f.den - f.num* den;
        temp.den = den* f.den;
        temp.lowTerm();
        return temp;
    }
    
    Frac operator * (const Frac &f) {
        Frac temp;
        temp.num = num* f.num;
        temp.den = den* f.den;
        temp.lowTerm();
        return temp;
    }
    
    Frac operator / (const Frac &f) {
        Frac temp;
        temp.num = num * f.den;
        temp.den = den * f.num;
        temp.lowTerm();
        return temp;
    }

    //compound assignments
    Frac& operator += (const Frac &f) {
        num = num*f.den + f.num*den;
        den = den*f.den;
        lowTerm();
    };
    
    bool operator > (const Frac &f) {
        if(num * f.den > f.num * den)
           return true;
        return false;
    }
    
    // friend ostream operator << function definition
    friend std::ostream &operator << (std::ostream &strm, const Frac &f){
        strm << f.num << "/" << f.den;
        return strm;
    }
    
    //post & pre increment
    Frac operator++ (int) {
        Frac copy = *this; num += 1;
        return copy;
    };
    
    Frac operator++ () {
        num++; return *this;
    };
    
    Frac operator-- (int) {
        Frac copy = *this; num-=1;
        return copy;
    };
    
    Frac operator-- () {
        num--; return *this;
    };
    
    void inputfrac() 
    { 
    	char dummychar;
    	Frac f;
    	while(1) {
		    cin >> f1;			//numerator
	    	cin >> dummychar;		//'/' character
	    	cin >> f2;			//denominator
		    if(f2 != 0) break;	//no problem, so exit loop
	    	cout << "Denominator cannot be zero. Try again: ";
	}
	return f;
}
    
    void outputfrac()
    {
        cout << "\nEnter fraction, operator, fraction";
		cout << "\nform 3/4 + 3/8 (or 0/1 + 0/1 to exit): ";
		cout << fans.num << "/" << fans.den << endl;
    }
    std::string returnObj() {
        std::string s = std::to_string(num)
             + "/" + std::to_string(den);
            return s;
    }
    
};
#endif
