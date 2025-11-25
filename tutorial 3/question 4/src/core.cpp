#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "../header/information.hpp"
using namespace std;

class core;

core::core(course c1, lecturer l1) : course_input(c1), lecturer_input(l1), student_count(0) {}

void core::addStudent(student student_main)
{
    if (student_count < 10)
    {
        student_input[student_count++] = student_main;
    }
}

void core::displayEverything()
{
    displayCourse(course_input);
    displayLecturer(lecturer_input);

    for (int i = 0; i < student_count; i++)
    {
        cout << i + 1 << ". ";
        displayStudent(student_input[i]);
    }
}


