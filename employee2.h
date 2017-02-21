#ifndef EMPLOYEE2_H
#define EMPLOYEE2_H

#include <string>
#include <sstream>
#include <iostream>

class Employee;
std::ostream &operator<< (std::ostream &, const Employee &);

class Employee {
	private:
		std::string name;   // Employee name
		std::string number; // Employee number
		std::string date;   // Employee hire date
		
	public:
		// Constructors
		Employee();
		Employee(std::string nm, std::string nb, std::string dt);
		
		// Accessors
		std::string getName() const;
		std::string getNumber() const;
		std::string getDate() const;
		
		// Mutators
		void setName(std::string nm);
		void setNumber(std::string nb);
		void setDate(std::string dt);
		
		void display();
		std::string toString();  // Returns the string of all 3 variables...
		                    // This way it can be used in cout???
		friend std::ostream &operator << (std::ostream &, const Employee &);
};

#endif

//==========================================================
// Constructor definitions
//----------------------------------------------------------

Employee::Employee() {
	name = "";
	number = "";
	date = "";
}

Employee::Employee(std::string nm, std::string nb, std::string dt) {
	name = nm;
	number = nb;
	date = dt;
}

//==========================================================
// Accessor definitions
//----------------------------------------------------------

std::string Employee::getName() const {
	return name;
}

std::string Employee::getNumber() const {
	return number;
}

std::string Employee::getDate() const {
	return date;
}

//==========================================================
// Mutator definitions
//----------------------------------------------------------

void Employee::setName(std::string nm) {
	name = nm;
}

void Employee::setNumber(std::string nb) {
	number = nb;
}

void Employee::setDate(std::string dt) {
	date = dt;
}

//==========================================================
// Other definitions
//----------------------------------------------------------

void Employee::display() {
	std::cout << "\nName: " << this->getName()
	          << "\nEmployee number: " << this->getNumber()
	          << "\nHire date: " << this->getDate() << std::endl;
}

std::string Employee::toString() {
	std::stringstream ss;
	ss << "\nName: " << this->getName()
	   << "\nEmployee number: " << this->getNumber()
	   << "\nHire date: " << this->getDate() << std::endl;
	
	return ss.str(); // Converts stringstream object to string
}

std::ostream &operator<< (std::ostream &strm, const Employee &e) {
	strm << "\nName: " << e.getName()
	     << "\nEmployee number: " << e.getNumber()
	     << "\nHire date: " << e.getDate() << std::endl;
	     
	return strm;
}
