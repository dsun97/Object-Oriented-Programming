/*
#include <iostream>
#include "Frac.1.h"
using namespace std;

int main() {
    
    Frac x(3,4); //123
    
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

/*
#include <iostream>
#include "Frac.h"
using namespace std;

int main(){
    Frac x(2, 4);
    Frac y(2, 3);
     
    cout << "\nShow created x and y using returnObj() method: "
         << "\nCreated x: " << x.returnObj()
         << "\nCreated y: " << y.returnObj();
          
    cout << "\n\nOverloaded Math Operators:\n" 
         << x << " + " << y << " = " << x+y << endl;
    cout << x << " - " << y << " = " << x-y << endl;
    cout << x << " * " << y << " = " << x*y << endl;
    cout << x << " / " << y << " = " << x/y ;
     
    cout << "\n\nx += y compound assignments return self:\n"
         << x << " += " << y; 
    cout << "; x is " << (x += y) ;
     
    // <<<<----- 2="" async="" problems="" ------="">>>>>
    //cout << "\n\nx + y; operator+ returns an l-value obj:\n" 
    //     << x << " + " << y << " = " << x + y;   
     
    //cout << "\n\nTesting Overloaded Operator>\n"
    //     << x << ((x>y)?" is ":" is not ") << "greater than "<< y ;
    
    cout << "\n\nTesting Overloaded Postfix Operators:";
    cout << "\ny: " << y ;
    y++;
    cout << "\ny++: " << y ;
    y--;
    cout << "\ny--: " << y ;
     
    cout << "\n\nTesting Overloaded Prefix Operators:";
    cout << "\ny: " << y ;
    ++y;
    cout << "\n++y: " << y ;
    --y;
    cout << "\n--y: " << y ;

    //cout << "\n\nMore Async issues:";
    //cout << "\nTesting Overloaded Postfix Operators:";
    //cout << "\ny: " << y << " y++: " << y++;
    //cout << "\ny: " << y << " y--: " << y--;
    //cout << "\ny: " << y ;
     
    //cout << "\n\nTesting Overloaded Prefix Operators:";
    //cout << "\ny: " << y << " ++y: " << ++y;
    //cout << "\ny: " << y << " --y: " << --y;
    //cout << "\ny: " << y ;
    
    //cout << "\n\nTesting Operator Concatenation:"
    //     << "\nx + y + x + y: " << (x + y + x + y);
    
}
*/

#include <iostream>
#include "Frac.h"
using namespace std;

int main(){
    Frac x(2, 4);
    Frac y(2, 3);
    
    cout << "\nShow created x and y using returnObj() method: "
         << "\nExecuted Frac x(2, 4); Created x: " << x.returnObj()
         << "\nExecuted Frac x(2, 3); Created y: " << y.returnObj();
         
    Frac z(x);
    cout << "\nCopy Constructor created z from x: "<< z ;
          
    cout << "\n\nOverloaded Math Operators:\n" 
         << x << " + " << y << " = " << x+y << endl
         << x << " - " << y << " = " << x-y << endl
         << x << " * " << y << " = " << x*y << endl
         << x << " / " << y << " = " << x/y ;
     
    cout << "\n\nx += y compound assignments return self:\n"
         << x << " += " << y ;
    cout << "; x is " << (x += y) ;
         
    cout << "\n\n---COUT sync discrepency in one insertion statement---";
    
    x.set(1, 2); 
    
    cout << "\nx += y compound assignments return self:\n"
         << x << " += " << y 
         << "; x is " << (x += y) ;
     
    cout << "\n\nTesting Overloaded Operator>\n"
         << x << ((x>y)?" is ":" is not ") << "greater than "<< y ;
    
    cout << "\n\nTesting Overloaded Postfix Operators:";
    cout << "\nx: " << x ;
    x++;
    cout << "\nx++: " << x ;
    x--;
    cout << "\nx--: " << x ;
     
    cout << "\n\nTesting Overloaded Prefix Operators:";
    cout << "\ny: " << y ;
    ++y;
    cout << "\n++y: " << y ;
    --y;
    cout << "\n--y: " << y ;
    
    cout << "\n\nTesting Operator Concatenation:"
         << "\nx + y + x + y: " << (x + y + x + y);
}
