#include<iostream>
#include <cmath>

using namespace std;

// absoluteValue template
template <class T>

T absoluteValue (T a)
{
    return (abs(a));
}


template <class T>
T minimum (T a, T b)
{
    return (a<b?a:b);
}


template <class T>
T maximum (T a, T b)
{
    return (a>b?a:b);
}


int main()
{
	// MinMax and Absolute Test with int arguments.
	int num1 = -5;
	int num2 = 3;
	cout << "minimum of " << num1 << " and " << num2 
		 << " is:  " << minimum(num1, num2) << endl;
	cout << "maximum of " << num1 << " and " << num2 
		 << " is:  " << maximum(num1, num2) << endl;
	cout << "Absolute value of " << num1
		<< " is: " << absoluteValue(num1) << endl;
	cout << "Absolute value of " << num2
		<< " is: " << absoluteValue(num2) << endl;

	// MinMax and Absolute Test with double arguments.
	double num3 = -5.5;
	double num4 = 3.5;
	cout << "minimum of " << num3 << " and " << num4 
		<< " is:  " << minimum(num3, num4) << endl;
	cout << "maximum of " << num3 << " and " << num4 
		<< " is:  " << maximum(num3, num4) << endl;
	cout << "Absolute value of " << num3
		<< " is: " << absoluteValue(num3) << endl;
	cout << "Absolute value of " << num4
		<< " is: " << absoluteValue(num4) << endl;

	// MinMax Test with string arguments.
	string s1 = "hello";
	string s2 = "hi";
	cout << "minimum of " << s1 << " and " << s2 
		<< " is: " << minimum(s1, s2) << endl;
	cout << "maximum of " << s1 << " and " << s2 
		<< " is: " << maximum(s1, s2) << endl;


	return 0;
}
