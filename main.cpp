#include <iostream>
#include "Emp.h"
#include "Salary.h"

using namespace std;

int main()
{
    int counter = 0;
    int numOfEmployees;

    Salary myObj[counter];

    cout << " Enter the number of employees: ";
    cin >> numOfEmployees;

    while(counter <  numOfEmployees){

        myObj[counter].getInfo();
        myObj[counter].getSalary();
        myObj[counter].calculateNet();
        counter++;

    }
    for(counter = 0; counter < numOfEmployees; counter++){
        myObj[counter].display();
    }

    return 0;
}
