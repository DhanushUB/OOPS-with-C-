#include <iostream>
#include "Hourly.h"
using namespace std;
EmployeeHourly::EmployeeHourly(string& firstName, string& lastName, string& SSN, double wage, double hours) : Employee(firstName, lastName, SSN)
{
setWage(wage);
setHours(hours);
}
void EmployeeHourly::setWage(double hWage)
{
wage = hWage < 0.0 ? 0.0 : hWage;	
}


void EmployeeHourly::setHours(double WHours)
{
hours = (WHours >= 0.0 && WHours <= 168.0) ? WHours : 0.0;	
}


double EmployeeHourly::getWage()
{
return wage;
}


double EmployeeHourly::getHours()
{
return hours;
}


double EmployeeHourly::earnings()
{
if ( hours <= 40 ) 			 // no overtime means i am assuming 40 hours per week
         return wage * hours;
   else                               // overtime is paid at wage * 1.5 times of actual payment 
         return 40 * wage + ( hours - 40 ) * wage * 1.5;
}


void EmployeeHourly::print()
{
	cout<<"First Name is:"<<getFirstName();
	cout<<"Last Name is: "<<getLastName();
	cout<<"SSN is"<<getsocialSecurityNumber();
	cout<<"Employee hourly paid:"<<earnings();
	Employee::print();
}


