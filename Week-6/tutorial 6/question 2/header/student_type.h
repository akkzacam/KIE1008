#ifndef STUDENT_TYPE_H
#define STUDENT_TYPE_H

#include "person_type.h"
#include <string>
#include <iostream>

class studentType: public personType
{
    private:
    long int studentID;
    std::string courses[6];
    char coursesGrade[6];
    int num_of_courses;

    public:
    virtual void print(std::ostream &out) const = 0;
    virtual double calculateGPA() const = 0;
    void setID(long int studentID_main);
    void setCourses();
    void setGrades();

    void getID();
    void getCourses();
    void getGrades();

    studentType(std::string fullname_main = "",
        std::string lastname_main = "",
        long int studentID_main = -1,
        std::string *courses_main = nullptr,
        char *courseGrade_main = nullptr,
        int num_of_course_main = 0);
};

#endif