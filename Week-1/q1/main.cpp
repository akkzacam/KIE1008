#include <iostream>
using namespace std;

class student // no () needed
{
public:
    bool canGraduate; //variables must have no ()
    void print(); //no const needed
    student(int = 0, double = 0); //constructors must have no return type

private:
    int ID;
    double gpa;
};

student::student(int id, double grade_point)
{
    ID = id;
    gpa = grade_point;
}

void student::print()
{
    cout << "Student's ID: " << ID << endl;
    cout << "Student's GPA: " << gpa << endl;
    
    if (gpa < 2.0)
    {
        canGraduate = false;
    }
    else if (gpa >= 2.0)
    {
        canGraduate = true;
    }

    if (canGraduate)
    {
        cout << "Student is eligible to graduate." << endl;
    }
    else
    {
        cout << "Student is not eligible to graduate." << endl;
    }
}



int main (void)
{
    int id = 23002155;
    double grade_point = 2.0;

    student student_1(id, grade_point);
    student_1.print();
    return 0;
}


