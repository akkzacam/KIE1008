#include <iostream>
#include <string>
#include "../header/information.hpp"
using namespace std;

class student;

undergrad::undergrad(string name_main, string gender_main, int age_main) : ptr_u1(new student(name_main, gender_main, age_main))
{

}

string undergrad::getName()
{
    return (*ptr_u1).getName();
    //return ptr_u1->getName();
}

string undergrad::getGender()
{
    return ptr_u1->getGender();
}

int undergrad::getAge()
{
    return ptr_u1->getAge();
}

void undergrad::display()
{
    ptr_u1->display();
}

void modifyAge(undergrad &value_u1, int new_age_main)
{
    setAge(*value_u1.ptr_u1, new_age_main);
}