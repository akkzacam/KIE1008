#include <iostream>
#include "../header/employee.h"
using namespace std;

Employee::Employee()
{
    count = 0;
}

int Employee::getCount()
{
    return count;
}

void setX(Employee &c, int x)
{
    c.count = x;
}