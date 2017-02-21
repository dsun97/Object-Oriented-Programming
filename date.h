#ifndef DATE_H
#define DATE_H
#include <string>

const int NUM_MONTHS = 12;

class Date {
    
    private:
       int month, day, year;
       string monthNames[NUM_MONTHS] = { "January", "Feburary", "March", "April", "May", "June",
       "August", "September", "October", "November", "December"};
       
       int daysInMonth[NUM_MONTHS + 1] = {0, 31, 28, 31, 30, 31, 30, 31 ,31, 30, 31, 30, 31};
       int daysInYear[NUM_MONTHS + 1] = { 0, 31, 59, 90};
       
    public:
    
       Date() {month = 9; day = 21; year = 2016;};
       Date(int m, int d, int y) {month = m; day = d; year = y;};
       string getMonthName() {month = m; day = d; year = y;};
       void showDate2() {
           std::cout << getMonthName() << day << ", " << year << std::endl;
       };
       
       operator++ () { //prefix
          day = daysInMonth[month]
       };
       
       operator ++(int) { //postfix

       };
};

#endif
