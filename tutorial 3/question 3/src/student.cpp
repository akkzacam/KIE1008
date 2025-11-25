#include <iostream>
#include <string>
#include "../header/information.hpp"
using namespace std;

student::student(string name_main, string gender_main, int age_main)
: name(name_main), gender(gender_main), age(age_main)
{

}

string student::getName()
{
    return name;
}

string student::getGender()
{
    return gender;
}

int student::getAge()
{
    return age;
}

void student::display()
{
    cout << "Name: " << getName() << endl;
    cout << "Gender: " << getGender() << endl;
    cout << "Age: " << getAge() << endl;
}

void setAge(student &proxy_student, int new_age_main)
{
    proxy_student.age = new_age_main;
}