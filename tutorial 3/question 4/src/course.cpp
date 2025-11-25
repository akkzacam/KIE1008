#include <iostream>
#include <string>
#include "../header/information.hpp"
using namespace std;

class course;

course::course(string coursename_main, string coursecode_main) : course_name(coursename_main), course_code(coursecode_main)
{
    setCourseCode(coursecode_main);
    setCourseName(coursename_main);
}

void course::setCourseName(string coursename_main)
{
    course_name = coursename_main;
}

void course::setCourseCode(string coursecode_main)
{
    course_code = coursecode_main;
}

string course::getCourseName()
{
    return course_name;
}

string course::getCourseCode()
{
    return course_code;
}

void displayCourse(course course_main)
{
    cout << "Gradebook for " << course_main.getCourseCode() << ": " << course_main.getCourseName() << endl;
}