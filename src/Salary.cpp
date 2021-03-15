#include <iostream>
#include "Emp.h"
#include "Salary.h"
#include <iomanip>

using namespace std;


void Salary :: getSalary(){

        cout << "\t\t" << "EMPLOYEE'S SALARY" << endl;
        cout << endl << "Enter the rate the hour: ";
        cin >> ratePerHour;
        cout << endl << "Enter the hours worked: ";
        cin >> hoursWorked;
        cout << endl << "Enter the number of days worked: ";
        cin >> daysWorked;
        cout<< endl << "----------------------------------------------------------" << endl;

    }

double Salary :: calculateNet(){

    if(hoursWorked > 40){
        grossSalary = ratePerHour * hoursWorked * daysWorked * overtimeRate;
        netPay = grossSalary - (grossSalary * tax);
    }
    else {
        grossSalary = ratePerHour * hoursWorked * daysWorked;
        netPay = grossSalary - (grossSalary * tax);
    }

    return netPay;
}

void Salary :: display(){

    cout << "\t\t" << "NET PAY" << endl << endl;
    cout << "Employee's ID: "<< empID << endl;
    cout << "Employee's name: "<< name << endl;
    cout << "Employee's job title: " << jobTitle << endl;
    cout << "Hours worked by "<< name << ": "<< hoursWorked << endl;
    cout << "Number of Days worked by "<< name << ": "<< daysWorked << endl;
    cout << "Gross salary: R" << grossSalary << endl;
    cout << "Tax: "<< tax << "%" << endl;
    cout << "Net Pay: R" << netPay << endl;
    cout<< endl << "----------------------------------------------------------" << endl;
}









