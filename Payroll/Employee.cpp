#include <iostream>
#include "Employee.h"
using namespace std;
Employee::Employee(string& firstName, string& lastName, string& SSN) :firstName{firstName},lastName{lastName},socialSecurityNumber{SSN}
{

}


string Employee::getFirstName() const
{
	return firstName;
}


void Employee::setFirstName(string& fName)
{
	firstName = fName;
}


string Employee::getLastName() const
{
	return lastName;
}



void Employee::setLastName(string& lName)
{
	lastName = lName;
}
string Employee::getsocialSecurityNumber() const
{
	return socialSecurityNumber;	
}



void Employee::setsocialSecurityNumber(std::string& SSN)
{
	socialSecurityNumber =  SSN;
}


void Employee::print()
{
cout<< getFirstName() << ' ' << getLastName();
cout<<"social security number :"<<getsocialSecurityNumber() << endl;	
}
