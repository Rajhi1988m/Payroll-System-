//  **********************************************
//  main.cpp
//  Payroll System Project
//  **********************************************
//  Created by Mohammed on 2016
//  Copyright © 2016 Mohammed. All rights reserved.
//  **********************************************

#include <iostream>             // Library for Cout, Cin  
#include <string>              // string librabry  
using namespace std;          // help me to skip std :: 
#include "HourlyObject.h"    // header file for houres 
#include "SalariedObject.h" // header file for salary objects 
int main(int argc, const char * argv[]) {
    Employee* objects[4];
	cout<<"The Simple Payroll System:";
    objects[0] = new SalariedObject("Mohammed", 80000);
    objects[1] = new SalariedObject("Hatim", 60000);    
    objects[2] = new HourlyObject("Ali", 200, 160);              // These are the Employee with Salary and working hours 
    objects[3] = new HourlyObject("Monaser", 190, 150);
	
	cout<<endl;
    
    for(int i = 0;i<4;i++)        // for loop for the for employee that I mention 
    {
        objects[i]->printPaycheck();  //the printpaycheck for the objects 
    }
	system("pause");  // To hold the console screen 
    return 0;
}
