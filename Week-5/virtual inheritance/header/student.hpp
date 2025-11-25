#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <ctime>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <iostream>
#include "person.hpp"

class Student : virtual public Person
{
    public:
    Student(std::string n): Person(n)
    {
        studentID = rand() % 100000;
    }
    void printInfo() const
    {
        std::cout << "Name: " << name << "; Student ID: " << std::setfill('0') << std::setw(5) << studentID << std::endl;
    }

    protected:
    int studentID;
};

#endif