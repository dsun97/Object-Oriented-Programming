#include <iostream>
#include <string>
#include "FeetInches.h"
using namespace std;

int main ()
{
  string input;
  int feet, inches;
  cout << "Enter the first feetInches: (0,0 to exit) \n\t Feet = ";
  cin >> feet;
  cout << "\t Inches = ";
  cin >> inches;
  
  FeetInches fi0(feet, inches);
  cout << "You have created first as " << fi0.getFeet() << "\'"
    << fi0.getInches() << "\" FeetInches instance.\n";
  cout << "This instance can also be shown as: " << fi0;
  cout << endl;
  cout << "Assigning next instance to (5 feet, 3 inches)" << endl;
  FeetInches fi1('5'/'3');
  //cout << "First instance: " << fi1 << endl;
  cout << "Next instance: (5 feet, 3 inches)" << endl;
  
  FeetInches fi2(0,0);
  cout << "\nThe test driver has initialized 2nd FeetInches to: " << fi2;
  
  FeetInches fi3(0,0);
  cout << "\nEnter the 2nd FeetInches (0,0 to exit): ";
  cin >> fi3;
  cout << "You have enter a " << fi3 << " instance." << endl;
  
  FeetInches fi4(0,0);
  fi4 = fi3;
  

  cout << "Copy constructed the third FeetInches: "<< fi4 << endl;
  cout << endl;
  
  cout << " --->Overloaded Addition Operator (+): " << endl;
  cout << fi0 << " + " << fi3 << " = " << fi0 + fi3 << endl;
  cout << endl;
  
  cout << " --->Overloaded Subtraction Operator (-): " << endl;
  cout << fi0 << " - " << fi3 << " = " << fi0 - fi3 << endl;
  cout << endl;
  
  cout << " - ->Overloaded Greater Than Operator (>): " << endl;
  cout << "Is " << fi0 << " > " << fi3 << "?" << endl;
  cout << ((fi0 > fi3) ? "True" : "False") << endl;
  cout << endl;
  
  cout << " ---> Overloaded Post ++ than -- Operators" << endl;
  cout << "Start first " << fi0 << endl;
  fi0++;
  cout << "Post ++ : " << fi0 << endl;
  fi0--;
  cout << "Post -- : " << fi0 << endl;
  cout << endl;
  
  cout << " --> Overloaded Pre ++ than -- Operators" << endl;
  cout << "Start second " << fi3 << endl;
  fi3++;
  cout << "Pre ++ : " << fi3 << endl;
  fi3--;
  cout << "Pre ++ : " << fi3 << endl;
  
  
  cout << "Converted " << fi0 << " to an integer: " << fi0 << endl;
  cout << "Converted " << fi3 << " to a double: " << fi3 << endl;

  
}
