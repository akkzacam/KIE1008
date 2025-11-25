#ifndef CURRENT_HPP
#define CURRENT_HPP

#include "account.hpp"
#include "person.hpp"

class Current: public Account, public Person
{
    private:
    double charge;

    public:
    Current(std::string, double, std::string, std::string, double);
    
    //accessor and mutator
    void setCharge(double);
    void displayInfo() override;
    void calculateBalance(int) override;
};

#endif