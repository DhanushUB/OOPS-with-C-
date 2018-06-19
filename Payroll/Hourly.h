//#pragma once
#ifndef Hourly_H
#define Hourly_H

#include "Employee.h"

class EmployeeHourly : public Employee
{
public:
	EmployeeHourly(string&, string&, string&, double = 0.0, double = 0.0);
	void setWage(double);
	double getWage();

	void setHours(double);
	double getHours();

	virtual double earnings();
	virtual void print();
private:
	double wage;
	double hours;
};

#endif

