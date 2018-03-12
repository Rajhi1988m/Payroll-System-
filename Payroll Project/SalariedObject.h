//  **********************************************
//  SalariedObject.h
//  Payroll System Project
//  **********************************************
//  Created by Mohammed on 2016
//  Copyright © 2016 Mohammed. All rights reserved.
//  **********************************************

#ifndef __Payroll__SalariedObject__
#define __Payroll__SalariedObject__
#include "Employee.h"                     // Include the main class Employee 
class SalariedObject: public Employee     // Inheritance from the class Employee 
{
private:
    double salary;
public:
    SalariedObject(string name,double _salary); // The function for Salary
    void printPaycheck();                       // The function for the  print paycheck 
};

#endif /* defined(__Payroll__SalariedObject__) */
