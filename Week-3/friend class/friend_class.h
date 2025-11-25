#ifndef FRIEND_CLASS_H
#define FRIEND_CLASS_H

#include <iostream>
using namespace std;

class Employee
{
    friend class Employer;

    public:
    Employee(int c)
    {
        counter = c;
    }

    private:
    int counter;
};

class Employer
{
    public:
    Employer() {}

    int getCount(Employee &e)
    {
        return e.counter;
    }
};

#endif