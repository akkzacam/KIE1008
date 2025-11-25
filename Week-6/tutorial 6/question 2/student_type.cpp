#include "student_type.h"
#include <iostream>
#include <string>

studentType::studentType
(std::string firstname_main, std::string lastname_main, long int studentID_main, std::string *courses_main, char *courseGrade_main, int num_of_course_main):
personType(firstname_main, lastname_main)
{
    this->studentID = studentID_main;
    this->num_of_courses = num_of_course_main;

    for (int i = 0; i < 6; i++)
    {
        courses[i] = courses_main[i];
        coursesGrade[i] = courseGrade_main[i];
    }
}

double studentType::calculateGPA() const
{
    double total_credit;

    for(int i = 0; i < 6; i++)
    {
        if(coursesGrade[i] == 'A')
        {
            total_credit += 4.0;
        }
        else if(coursesGrade[i] == 'B')
        {
            total_credit += 3.0;
        }
        else if(coursesGrade[i] == 'C')
        {
            total_credit += 2.0;
        }
        else if(coursesGrade[i] == 'D')
        {
            total_credit += 1.0;
        }
        else if(coursesGrade[i] == 'F')
        {
            total_credit += 0.0;
        }
    }

    return total_credit / num_of_courses;
}


void studentType::print() const
{
    personType::output(out);
    for (int i = 0; i < num_of_courses; i++)
    {
        std::cout << "  " << courses[i] << " - Grade: " << coursesGrade[i] << std::endl;
    }

    std::cout << "GPA: " << calculateGPA() << std::endl;
    std::cout << "-----------------------------" << std::endl;
}