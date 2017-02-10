
/*
#include <iostream>
#include "Fracl.h"
using namespace std;

int main() {
    
    Frac x(3,4); //123
    
    //x = 3/4
    //y = 2/3
    
    
    //method 1
    cout << "Created x: ";
    x.show();
    
    Frac y(2,3); //123
    cout << "\nCreated y: ";
    y.show();
    cout << endl << endl;

    //method 2 toString()
    cout << "Created x: " << x.toString()
         << "\nCreated y: " << y.toString() << endl;
    cout << endl;


    x = y;

    
    //method 3 operator <<
    cout << "x assigned as y: " << x << endl << endl;

    
    //method 4 
    Frac z(x);
    cout << "Created z from x: " << z << endl;
    
    //method 5
    cout << "\nx + y: " << x  << " + " << y << " = " << x + y << endl;
    
    //method 6
    cout << "\nx / y: " << x << " / " << y << " = " << x / y;
    
    
    //method 7
    cout << "\nx: " << x << " greater than y: " << y 
         << " is " << ((x > y) ? "true" : "false") << endl;
    
    
}


*/


#include <iostream>
#include "Fracl.h"

using namespace std;

int main() {
    
    Frac x(3, 4);
    Frac y(2, 3);
    
    cout << "\nFrac x(3, 4) created x as " << x.returnObj()
         << "\nFrac x(2, 3) created y as " << y.returnObj();
         
    Frac z(x);
    cout << "\nCopy Constructor created z from x: "<< z ;
          
    cout << "\n\nOverloaded Math Operators:\n" 
         << x << " + " << y << " = " << x+y << endl
         << x << " - " << y << " = " << x-y << endl
         << x << " * " << y << " = " << x*y << endl
         << x << " / " << y << " = " << x/y ;

    cout << "\n\nOverloaded Greater Than Operator >" << endl
         << "The prediction " << "(" << x << " > " << y << ")"
         << " is TRUE";
         
    cout << "\n\nOverloaded Less Than Operator <" << endl
         << "The prediction " << "(" << x << " < " << y << ")"
         << " is FALSE";
}
