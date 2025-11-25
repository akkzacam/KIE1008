#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include "../header/information.hpp"
using namespace std;

class student;

student::student() : name(""), ID(""), grade("F"), mark(0) {}  // <-- Add this


student::student(string name_main, string ID_main)
: name(name_main), ID(ID_main)
{
    setStudentName(name_main);
    setStudentID(ID_main);
}

void student::setStudentName(string name_main)
{
    name = name_main;
}   

void student::setStudentID(string ID_main)
{
    ID = ID_main;
}

string student::getStudentName()
{
    return name;
}

string student::getStudentID()
{
    return ID;
}

int student::getStudentMark()
{
    return mark;
}

string student::getStudentGrade()
{
    return grade;
}

void student::assignMark()
{
    mark = (rand() % 100) + 1;
}

void student::assignGrade()
{
    if (mark > 89 && mark < 100)
    {
        grade = "A+";
    }
    else if (mark > 79 && mark < 90)
    {
        grade  = "A";
    }
    else if (mark > 74 && mark < 80)
    {
        grade = "A-";
    }
    else if (mark > 69 && mark < 75)
    {
        grade = "B+";
    }
    else if (mark > 64 && mark < 70)
    {
        grade = "B";
    }
    else if (mark > 59 && mark < 65)
    {
        grade = "B-";
    }
    else if (mark > 54 && mark < 60)
    {
        grade = "C+";
    }
    else if (mark > 49 && mark < 55)
    {
        grade = "C";
    }
    else if (mark > 44 && mark < 50)
    {
        grade = "C-";
    }
    else if (mark > 39 && mark < 45)
    {
        grade = "D+";
    }
    else if (mark > 34 && mark < 40)
    {
        grade = "D-";
    }
    else if (mark >= 0 && mark < 35)
    {
        grade = "F";
    }
}

void displayStudent(student student_main)
{
    student_main.assignMark();
    student_main.assignGrade();

    cout << left << setw(20) << student_main.getStudentName() << " - "  << left << setw(10) << student_main.getStudentID() << student_main.getStudentMark() << " (" << student_main.getStudentGrade() << ")" << endl;
}

