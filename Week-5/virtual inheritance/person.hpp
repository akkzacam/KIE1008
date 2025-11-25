#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Person
{
    public:
    Person(std::string n)
    {
        name = n;
    }
    
    protected:
    std::string name;
};

#endif