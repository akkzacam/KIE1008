#include <iostream>
#include <string>
#include "../header/information.hpp"
using namespace std;

postgrad::postgrad(string name_main, string gender_main, int age_main) : ptr_p1(new student(name_main, gender_main, age_main))
{

}

string postgrad::getName()
{
    return ptr_p1->getName();
}

string postgrad::getGender()
{
    return ptr_p1->getGender();
}

int postgrad::getAge()
{
    return ptr_p1->getAge();
}

void postgrad::display()
{
    ptr_p1->display();
}

void modifyAge(postgrad &value_p1, int new_age_main)
{
    setAge(*value_p1.ptr_p1, new_age_main);
}