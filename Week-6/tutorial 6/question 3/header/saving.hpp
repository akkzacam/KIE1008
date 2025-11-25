#ifndef SAVING_HPP
#define SAVING_HPP

#include "person.hpp"
#include "account.hpp"

class Saving: public Account, public Person
{
    private:
    double rate;

    public:
    Saving(std::string, double, std::string, std::string, double);
    
    //accessor and mutator
    void setRate(double);
    void displayInfo() override;
    void calculateBalance(int) override;
};

#endif