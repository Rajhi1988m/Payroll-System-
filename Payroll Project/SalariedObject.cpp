//  **********************************************
//  SalariedObject.cpp
//  Payroll System Project
//  **********************************************
//  Created by Mohammed on 2016
//  Copyright © 2016 Mohammed. All rights reserved.
//  **********************************************
#include <iostream>
#include "SalariedObject.h"
SalariedObject::SalariedObject(string _name,double _salary):Employee(_name)
{
    salary = _salary;
}
void SalariedObject::printPaycheck()
{
    cout<<getName()<<" "<<salary<<endl;
}