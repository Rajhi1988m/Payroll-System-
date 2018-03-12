//  **********************************************
//  HourlyObject.cpp
//  Payroll System Project
//  **********************************************
//  Created by Mohammed on 2016
//  Copyright © 2016 Mohammed. All rights reserved.
//  **********************************************
#include <iostream>
#include "HourlyObject.h"
HourlyObject::HourlyObject(string _name,double _hours,double _rate):Employee(_name)
{
    hours = _hours;
    rate = _rate;
}
void HourlyObject::printPaycheck()
{
    double salary = hours*rate;
    cout<<getName()<<" "<<salary<<endl;
}