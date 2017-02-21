#ifndef DATETIME_H
#define DATETIME_H


#include "Date.h"
#include "Time.h"
#include <iostream>

using namespace std;

class DateTime;
ostream &operator << (ostream&, const DateTime&);
istream &operator >> (istream&, DateTime&);

class DateTime : public Date, public Time {
    
    public:
     
       DateTime() : Date(), Time() {};
       DateTime(int m, int d, int y, int h, int mn, int s)
          : Date(m, d, y), Time(h, mn, s) {};
          
       friend ostream &operator << (ostream& strm, const DateTime&);
       friend istream &operator >> (istream& strm, DateTime&);
    
};

ostream &operator << (ostream &strm, const DateTime &dt) {
    strm << dt.getMonth() << "/" << dt.getDay() << "/" << dt.getYear();
    strm << dt.getHour() << ":" << dt.getMin() << ":" << dt.getSec();
    
};

istream &operator >> (istream &strm, DateTime &dt) {

    int temp;
    cout << "Enter the Month: \n\t";
    strm >> temp; dt.setMonth(temp);
    cout << "Enter the Day: \n\t";
    strm >> temp; dt.setDay(temp);
    cout << "Enter the Year: \n\t";
    strm >> temp; dt.setYear(temp);
    cout << "Enter the Hours: \n\t";
    strm >> temp; dt.setHour(temp);
    cout << "Enter the Minutes: \n\t";
    strm >> temp; dt.setMin(temp);
    cout << "Enter the Seconds: \n\t";
    strm >> temp; dt.setSec(temp);
    return strm;
};

#endif
