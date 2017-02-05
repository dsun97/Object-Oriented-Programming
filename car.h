
#ifndef CAR_H
#define CAR_H

#include <string> 
using namespace std;

class Car
{
   private:
      int year;
      string make;
      int speed;

   public:
      //constructor
      Car(int y, string m)
      {
         year = y; 
         make = m;
         speed = 0;
      };
      
      Car(Car &c)
      {
         year = c.year;
         make = c.make;
         speed = c.speed;
      };

      //getter
      int getYear() const {return year;};
      string getMake() const {return make;};
      int getSpeed() const {return speed;};

      //setter
      void setYear(int y) {year = y;};
      void accelerate()
      {
         if (speed < 35)
         {
            speed += 5;
            cout << "Accelerate..." << endl;
         }
      };
      
      void brake() 
      { 
        if (speed >= 5)
        {
          speed -= 5;
          cout << "Braking..." << endl;
        }
      };

};

#endif
