#include <iostream>
#include "Emp.h"
#include "Salary.h"

using namespace std;

void Emp :: getInfo(){
        cout<< "\t\t" << "EMPLOYEE DETAILS" << endl;
        cout<< endl << "Enter the eployee's ID: ";
        cin>>empID;
        cout<< endl << "Enter the eployee's name: ";
        cin>>name;
        cout<< endl << "Enter the eployee's job title: ";
        cin>>jobTitle;
        cout<< endl << "----------------------------------------------------------" << endl;
    }
