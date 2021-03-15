#ifndef SALARY_H
#define SALARY_H


class Salary : public Emp
{
    double ratePerHour = 0;
    double hoursWorked = 0;
    double daysWorked = 0;
    double grossSalary = 0;
    double netPay = 0;
    double tax = 0.15;
    double overtimeRate = 1.5;

    public:
        void getSalary();
        double calculateNet();
        void display();
};

#endif // SALARY_H
