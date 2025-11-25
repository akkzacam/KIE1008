#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Person
{
    protected:
    std::string name, IC_number;

    public:
    Person(std::string, std::string);

    //accessor and mutator
    void setName(std::string);
    void setICnumber(std::string);

    virtual void displayInfo();
};

#endif