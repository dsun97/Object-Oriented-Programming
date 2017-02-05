
#include <iostream>
#include <string>
#include "Car.h"
using namespace std;


int main()
{
   Car porsche (2016, "Porsche");
   cout << "The current speed of my Porsche is "
        << porsche.getSpeed() << " mile per hour. \n";

   for (int count = 0; count < 7; count++)
   {
       porsche.accelerate();
       cout << "Current speed: "
            << porsche.getSpeed() << " mile per hour. \n";
   }

   for (int count = 0; count < 7; count++)
   {
      porsche.brake();
      cout << "Current speed: "
           << porsche.getSpeed() << " mile per hour. \n";
   }
  
   cout << endl;

   Car porsche2(porsche);
   cout  << "My Porsche is at " 
         << porsche.getSpeed() << " mile per hour. \n";
      
}



