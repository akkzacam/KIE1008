#ifndef INFORMATION_HPP
#define INFORMATION_HPP

#include <iostream>
#include <string>
using namespace std;

class course
{
    friend void displayCourse(course);

    public:
    course(string, string);

    void setCourseName(string);
    void setCourseCode(string);

    string getCourseName();
    string getCourseCode();

    private:
    string course_name, course_code;
};

class lecturer
{
    friend void displayLecturer(lecturer);

    public:
    lecturer(string, string);

    void setLecturernName(string);
    void setLecturerPosition(string);

    string getLecturerName();
    string getLecturerPosition();

    private:
    string name, position;
};

class student
{
    friend void displayStudent(student);

    public:
    student();
    student(string, string);

    void setStudentName(string);
    void setStudentID(string);

    void assignMark();
    void assignGrade();

    string getStudentName();
    string getStudentID();
    int getStudentMark();
    string getStudentGrade();

    private:
    string name, ID, grade;
    int mark;
};

class core
{
    public:
    core(course, lecturer);

    void addStudent(student);
    void displayEverything();

    private:
    course course_input;
    lecturer lecturer_input;
    student student_input[10];
    int student_count;
};

#endif