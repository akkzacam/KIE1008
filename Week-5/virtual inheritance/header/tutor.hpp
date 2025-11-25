#ifndef TUTOR_HPP
#define TUTOR_HPP

#include <ctime>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <iostream>
#include "person.hpp"
#include "student.hpp"
#include "teacher.hpp"

class Tutor : public Teacher, public Student
{
    public:
    Tutor(std::string n): Person(n), Teacher(n), Student(n) {}
    void printInfo() const
    {
        std::cout << "Name: " << name << "; Staff ID: " 
        << std::setfill('0') << std::setw(5) << staffID 
        << "; Student ID: " << std::setfill('0') << std::setw(5) << studentID << std::endl;
    }
};

#endif