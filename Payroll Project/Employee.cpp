//  **********************************************  
//  Employee.cpp
//  Payroll System Project
//  **********************************************
//  Created by Mohammed on 2016
//  Copyright © 2016 Mohammed. All rights reserved.
//  **********************************************

#include "Employee.h"
Employee::Employee()
{
    name = "";
}
 Employee::Employee(string _name)
{
    name = _name;
}
string Employee::getName()
{
    return name;
}
void Employee::setName(string n) // calling the function setNAme 
{
    name = n;
}