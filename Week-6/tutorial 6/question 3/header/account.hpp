#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <string>

class Account
{
    private:
    std::string number;
    double balance;

    public:
    Account(std::string, double);
    virtual ~Account() = default;

    //accessor and mutator
    void setNumber(std::string);
    void setBalance(double);
    double getBalance();

    virtual void displayInfo();
    virtual void calculateBalance(int) = 0;
};

#endif