#include <iostream>
#include "Employee.h"
#include "Salary.h"
#include "Commission.h"
#include "Hourly.h"

const int ARRAY_SIZE = 50;

int addEmployee(Employee* employees[], int index)
{

    // Write the rest of the Code here
    string firstname, lastname, SSN;
    int selection;
    cout << "Enter employee first name: ";
    cin>>firstname;
    cout << "Enter employee last name: ";
    cin>>lastname;
    cout << "Enter employee SSN number: ";
    cin>>SSN;

    cout << "Select the employee type" << endl;
    cout << "1. Salaried Employee." << endl;
    cout << "2. Commission Employee. " << endl;
    cout << "3. HOurly Wage Employee. " << endl;
    cout << "Enter your option: ";
    cin >> selection;

    switch (selection) {
    case 1:
        double salary;
        cout << "Enter salary of an employee: "<<endl;
        cin >> salary;
        employees[index] = new EmployeeSalary(firstname, lastname, SSN, salary);
        break;

    case 2:
        double sales, percent;
        cout << "Enter sales: "<<endl;
        cin >> sales;
        cout << "Enter commission rate (in %): "<<endl;
        cin >> percent;
        employees[index] = new EmployeeCommission(firstname, lastname, SSN, sales, percent);
        break;

    case 3:
        double wage, hours;
        cout << "Enter wages per hour:"<<endl;
        cin >> wage;
        cout << "Enter hour worked: "<<endl;
        cin >> hours;
        employees[index] = new EmployeeHourly(firstname, lastname, SSN, wage, hours);
        break;

    default:
        cout << "Invalid Option" << endl;
        return 0;
    }
    return 1;
}
void display(Employee* employees[], int count)
{
    // Write your Code here
    double total = 0.0;
    if (count > 0) {
        for (int i = 0; i < count; i++) {
            employees[i]->print();
            cout << "Money earned: $" << employees[i]->earnings() << endl;
            total = total + employees[i]->earnings();
        }
        cout << "THe total amount of payroll is: $" << total << endl;
    }
}
    int main()
    {
        int count = 0;
        int selection = 0;

        Employee* employees[ARRAY_SIZE];
        while (selection != 3) {
            cout << "Select one of the following options" << endl;
            cout << "1- Enter new employee informaion " << endl;
            cout << "2- View payroll " << endl;
            cout << "3- Exit the application" << endl;
            cout << "Enter Selection:" << endl;

            cin >> selection;
            switch (selection) {
            case 1:
                if (count < ARRAY_SIZE)
                    count += addEmployee(employees, count);
                else
                    cout << "Error: You entered the maximum number of employees!" << endl;
                break;
            case 2:
                display(employees, count);
                break;
            case 3:
                break;
            default:
                cout << "Enter a valid selection  " << endl;
            }
        }
        for (int i = 0; i < count; i++)
            delete employees[i];
    }
