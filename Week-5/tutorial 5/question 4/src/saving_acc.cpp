#include "../header/saving_acc.hpp"
#include <iostream>

savingsAccount::savingsAccount(int account_main, double balance_main, double rate)
: bankAccount(account_main, balance_main), interest_rate(rate) {}

double savingsAccount::calculateInterest() const
{
    return balance * interest_rate;
}

void savingsAccount::credit(double amount)
{
    bankAccount::credit(amount);
}

void savingsAccount::debit(double amount)
{
    bankAccount::debit(amount);
}

void savingsAccount::printInfo() const
{
    bankAccount::printInfo();
    std::cout << "Type: Savings Account" << std::endl;
    std::cout << "Interest Rate: " << interest_rate * 100.0 << "%" << std::endl;
}


