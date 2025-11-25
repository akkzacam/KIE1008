#ifndef PERSON_TYPE_H
#define PERSON_TYPE_H

#include <string>
#include <iostream>

class personType
{
    private:
    std::string firstname, lastname;

    public:
    personType(std::string firstname_main = "", std::string lastname_main = "");
    virtual ~personType() = default;
    
    virtual std::string getFirstname() const;
    virtual std::string getLastname() const;

    //function to handle input/output
    virtual void input(std::istream &);
    virtual void output(std::ostream &) const;
    friend std::istream &operator>>(std::istream &, personType &);
    friend std::ostream &operator<<(std::ostream &, const personType &);
};

#endif