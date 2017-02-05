
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
    
private:

   string name;
   int idNumber;
   string department;
   string position;
    
public:
  //constructors
   Employee() {
       name = "name";
       idNumber = 0;
       department = "department";
       position = "position";
   };
   Employee(string n, int id, string d, string p)
   {
       setName(n);
       setID(id);
       setDpt(d);
       setPos(p);
   };
   
   void setName(string n)
   {
       name = n;
   };
   
   void setID(int id)
   {
       idNumber = id;
   };
   
   void setDpt(string d)
   {
       department = d;
   };
   
   void setPos(string p)
   {
       position = p;
   };
   
   string getName() const
   {
       return name;
   };
   
   int getID() const
   {
       return idNumber;
   };
   
   string getDpt() const
   {
       return department;
   };
   
   string getPos() const
   {
       return position;
   };
   
   void displayData()
  {
      cout << "Name: " << name << endl;
      cout << "ID Number: " << idNumber << endl;
      cout << "Department: " << department << endl;
      cout << "Position: " << position << endl;
  }
};

#endif
