
#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

int main() {
    
    Employee one("",0,"","");
    Employee two("",0,"","");
    Employee three("",0,"","");
    
    one.setName("Susan Meyers");
    one.setID(47899);
    one.setDpt("Accouting");
    one.setPos("Vice President");
    
    two.setName("Mark Jones");
    two.setID(39119);
    two.setDpt("IT");
    two.setPos("Programmer");
    
    three.setName("Joy Rogers");
    three.setID(81774);
    three.setDpt("Manufacturing");
    three.setPos("Engineer");
    
    one.displayData();
    cout << endl;
    two.displayData();
    cout << endl;
    three.displayData();
    cout << endl;
    return 0;
}
