//#pragma once
#ifndef Commission_H
#define Commission_H
#include "Employee.h"

class EmployeeCommission : public Employee
{
public:
	EmployeeCommission(string&, string&, string&, double = 0.0, double = 0.0);
	void setCommissionRate(double);
	double getCommissionRate();
	void setGrossSales(double);
	double getGrossSales();
	virtual double earnings();
	virtual void print();
private:
	double commissionRate;
	double grossSales;
};


#endif
