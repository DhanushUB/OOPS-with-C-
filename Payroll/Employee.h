//#pragma once
#ifndef  Employee_H
#define  Employee_H


#include <string>

using namespace std;

class Employee
{
public:
	Employee(string&, string&, string&);
	void setFirstName(string&);
	string getFirstName() const;

	void setLastName(string&);
	string getLastName()const;

	void setsocialSecurityNumber(string&);
	string getsocialSecurityNumber()const;

	virtual double earnings() = 0;
	virtual void print();

private:
	string firstName;
	string lastName;
	string socialSecurityNumber;
};

#endif

