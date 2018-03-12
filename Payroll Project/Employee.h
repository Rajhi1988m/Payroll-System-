//  Emplyee Calss 
//  main.cpp
//  Payroll System Project
//  **********************************************
//  Created by Mohammed on 2016
//  Copyright © 2016 Mohammed. All rights reserved.
//  **********************************************
#ifndef __Payroll__Employee__
#define __Payroll__Employee__
#include <string>
using namespace std;
class Employee
{
private:
    string name;
public:
    Employee();                       // The main class Employee 
    Employee(string name);
    string getName();
    void setName(string n);
    virtual void printPaycheck ()
    {  }

};

#endif /* defined(__Payroll__Employee__) */
