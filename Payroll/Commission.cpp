#include <iostream>
#include "Commission.h"
using namespace std;
EmployeeCommission::EmployeeCommission(string& firstName, string& lastName, string& SSN, double sales, double percent) : Employee(firstName, lastName, SSN)
{
	setGrossSales(sales);
	setCommissionRate(percent);
}
void EmployeeCommission::setGrossSales(double sales)
{
  grossSales = sales < 0.0 ? 0.0 : sales;	
}


void EmployeeCommission::setCommissionRate(double percent)
{
  commissionRate = (percent > 0.0 && percent < 1.0)? percent : 0.0 ;  
}



double EmployeeCommission::getGrossSales()
{
	return grossSales;
}


double EmployeeCommission::getCommissionRate()
{
	return commissionRate;
}


double EmployeeCommission::earnings()
{
  return getCommissionRate() * getGrossSales(); 
}


void EmployeeCommission::print()
{
   
	cout<<"First Name is:"<<getFirstName();
	cout<<"Last Name is: "<<getLastName();
	cout<<"SSN is"<<getsocialSecurityNumber();
	cout<<"Empoyee Earnings is:"<<earnings();
	
}
