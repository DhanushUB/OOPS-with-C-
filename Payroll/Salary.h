//#pragma once
#ifndef  Salary_H
#define Salary_H

#include "Employee.h"

class EmployeeSalary : public Employee
{

public:
	EmployeeSalary(string&, string&, string&, double = 0.0);

	void setWeeklySalary(double);
	double getWeeklySalary()const;

	virtual double earnings();
	virtual void print();

private:
	double weeklySalary;
};

#endif

