#ifndef DATE2_H
#define DATE2_H
#include <iostream>

using namespace std;

class Date; //forward declaration
ostream &operator << (ostream&, const Date&);
istream &operator >> (istream&, Date&);

class Date {
    private:
    
       int month;
       int day;
       int year;
       
    public:
    
       Date() : month(1), day(1), year(2016) {};
       Date(int m, int d, int y) : month(m), day(d), year(y) {};
       int getMonth() const {return month;};
       int getDay()   const {return day;};
       int getYear()  const {return year;};
       void setMonth(int m) {month = m;};
       void setDay(int d)   {day = d;};
       void setYear(int y)  {year = y;};
       friend ostream &operator << (ostream&, const Date&);
       friend istream &operator >> (istream&, Date&);
};

ostream &operator << (ostream &strm, const Date &d) {
    strm << d.getMonth() << "/" << d.getDay() << "/" << d.getYear() << "\n";
    
};

istream &operator >> (istream &strm, Date &d) {
    int temp;
    cout << "Enter the Month: \n\t";
    strm >> temp; d.setMonth(temp);
    cout << "Enter the Day: \n\t";
    strm >> temp; d.setDay(temp);
    cout << "Enter the Year: \n\t";
    strm >> temp; d.setYear(temp);
    return strm;
};

#endif
