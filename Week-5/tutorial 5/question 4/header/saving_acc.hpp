#ifndef SAVING_ACC_HPP
#define SAVING_ACC_HPP

#include "bank_acc.hpp"

class savingsAccount : public bankAccount
{
private:
    double interest_rate; // Annual interest rate (e.g., 0.03 for 3%)

public:
    savingsAccount(int account_main, double balance_main, double rate);

    double calculateInterest() const;

    void credit(double amount);
    void debit(double amount);
    void printInfo() const; 
};
#endif