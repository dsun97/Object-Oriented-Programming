
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

//*************************************
// Function main                      *
//*************************************

int main()
{
   // Create a Date object and initialize it
   // using the overloaded constructor.
   Date today(12, 25, 2012);

   // Show the date in form #1.
   today.showDate1();
   
   // Store a new month, day, and year
   // in the object.
   today.setMonth(6);
   today.setDay(16);
   today.setYear(2012);
   
   // Show the date in form #2.
   today.showDate2();
   
   // Show the date in form #3.
   today.showDate3();
   
   // Test invalid date.
   Date someday(12, 32, 2012);
   
   return 0;
}
