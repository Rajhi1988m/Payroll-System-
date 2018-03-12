//  ***********************************************
//  Employee.h
//  Payroll System Project
//  ***********************************************
//  Created by Mohammed on 2016
//  Copyright © 2016 Mohammed. All rights reserved.
//  ***********************************************

#ifndef __Payroll__HourlyObject__
#define __Payroll__HourlyObject__
#include "Employee.h"                  // Include the class Employee 
class HourlyObject: public Employee    // Inheritance from the class Employee 
{
private:
    double hours;
    double rate;
public:
    HourlyObject(string name,double hours,double rate); // The function for the Hourly  
    void printPaycheck();
};

#endif /* defined(__Payroll__HourlyObject__) */
