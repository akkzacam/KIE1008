#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee
{
    friend void setX(Employee &, int);

    public:
    Employee();
    int getCount();

    private:
    int count; // data member
};

#endif