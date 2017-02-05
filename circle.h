#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>
using namespace std;

class Circle {
private:
   double radius;      // Data member (Variable)
   string color;       // Data member (Variable)
 
public:
   // Constructor with default values for data members
   
   Circle(double r = 1.0, string c = "red") {
       
      cout << "Creating Circle ";
      radius = r;
      color = c;
   }
   
   ~Circle();
 
   double getRadius() {  // Member function (Getter)
      return radius;
   }
 
   string getColor() {   // Member function (Getter)
      return color;
   }
 
   double getArea() {    // Member function
      return radius*radius*3.1416;
   }
   
};

Circle::~Circle() {
   cout << "Deleting Circle " << endl;
}


#endif
