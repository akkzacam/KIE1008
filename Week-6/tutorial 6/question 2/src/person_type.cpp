#include <string>
#include <iostream>
#include "person_type.h"

personType::personType(std::string firstname_main, std::string lastname_main)
{
    this->firstname = firstname_main;
    this->lastname = lastname_main;
}

std::string personType::getFirstname() const
{
    return firstname;
}

std::string personType::getLastname() const
{
    return lastname;
}

void personType::input(std::istream &in)
{
    in >> *this;
}

void personType::output(std::ostream &out) const
{
    out << "Firstname: " << getFirstname() << std::endl;
    out << "Lastname: " << getLastname() << std::endl;
}

std::istream &operator>>(std::istream &in, personType &personType_main)
{
    std::cout << "Enter firstname: ";
    in >> personType_main.firstname;
    std::cout << "Enter lastname: ";
    in >> personType_main.lastname;
    return in;
}

std::ostream &operator<<(std::ostream &out, const personType &personType_main)
{
    personType_main.output(out);
    return out; 
}