#ifndef TEACHER_HPP
#define TEACHER_HPP

#include <ctime>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <iostream>
#include "person.hpp"

class Teacher : virtual public Person
{
    public:
    Teacher(std::string n): Person(n)
    {
        staffID = rand() % 100000;
    }
    void printInfo() const
    {
        std::cout << "Name: " << name << "; Staff ID: " << std::setfill('0') << std::setw(5) << staffID << std::endl;
    }

    protected:
    int staffID;
};

#endif