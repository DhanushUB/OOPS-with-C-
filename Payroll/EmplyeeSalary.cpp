#include <iostream>
#include "Salary.h"
using namespace std;
EmployeeSalary::EmployeeSalary(string& firstName, string& lastName, string& SSN, double salary): Employee(firstName,lastName,SSN)
{
setWeeklySalary(salary);
}


void EmployeeSalary::setWeeklySalary(double salary)
{
weeklySalary = salary < 0.0 ? 0.0 :salary;
}

double EmployeeSalary::getWeeklySalary() const

{

return weeklySalary;	

}

double EmployeeSalary::earnings()
{
return getWeeklySalary();
}

void EmployeeSalary::print()
{
	cout<<"First Name is:"<<getFirstName();
	cout<<"Last Name is: "<<getLastName();
	cout<<"SSN is"<<getsocialSecurityNumber();
	cout<<"\n Employee Salary:"<<earnings();
	Employee::print();
}


