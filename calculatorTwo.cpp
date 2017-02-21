#include <iostream>
#include "Frac.h"
using namespace std;

int main()
{
	// frac f1, f2, fans;
	Frac f1, f2, fans;
	char op;
 
	do {
		cout << "\nEnter fraction, operator, fraction";
		cout << "\nform 3/4 + 3/8 (or 0/1 + 0/1 to exit): ";
		f1 = inputfrac();
		cin >> op;
		f2 = inputfrac();
		
		cout << "You have entered: " << f1.num << "/" << f1.den 
			 << " " << op << " " << f2.num << "/" << f2.den << endl; 
		switch(op) {
			case '+':
				fans.num = f1.num * f2.den + f2.num * f1.den;
				fans.den = f1.den * f2.den;
				break;
			case '-':
				fans.num = f1.num * f2.den - f2.num * f1.den;
				fans.den = f1.den * f2.den;
				break;
			case '*':
				fans.num = f1.num * f2.num;
				fans.den = f1.den * f2.den;
				break;
			case '/':
				fans.num = f1.num * f2.den;
				fans.den = f1.den * f1.num;
				break;
			default:
				cout << "No such operator";
		}  //end switch
		
		fans = lowterms(fans);
		
		cout << fans.num << "/" << fans.den << endl;
	} while( f1.num != 0 || f2.num != 0 );
	cout << endl;
	return 0;
}
