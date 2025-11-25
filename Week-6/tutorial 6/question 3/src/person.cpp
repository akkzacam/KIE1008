#include "../header/person.hpp"
#include <string>
#include <iostream>

Person::Person(std::string name_main, std::string IC_number_main): name(name_main), IC_number(IC_number_main)
{
    setName(name_main);
    setICnumber(IC_number_main);
}

void Person::setName(std::string name_main)
{
    this->name = name_main;
}

void Person::setICnumber(std::string IC_number_main)
{
    this->IC_number = IC_number_main;
}

void Person::displayInfo()
{
    std::cout << "Name: " << name;
    std::cout << "(NRIC: " << IC_number << ")" << std::endl;
}
