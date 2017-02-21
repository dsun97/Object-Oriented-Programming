#include <iostream>
#include <cstdlib> // labs()
#include "FracFriend.h"
using namespace std;

int main()
	{
    // testing friendship
	frac f(3,8);
	
	cout << "Frac f(3,8) is 3/8" << endl; //display
	
	cout << "Friend showFrac(f) is ";
	cout << f;
	
	cout << endl;
	
	cout << "GoodFriend good.outputFrac(f) is ";
	GoodFriend gf;
	gf.showFrac(f);
	
	cout << endl;
	
	cout << "BestFriend best.outputFrac(f) is ";
	BestFriend bf;
	bf.showFrac(f);
	
	cout << endl;
	
	cout << "Buddy of BestFriend best.displayFrac(f) is ";
	cout << f ;

	return 0;
}
