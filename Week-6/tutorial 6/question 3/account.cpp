#include "account.hpp"
#include <string>
#include <iostream>
#include <iomanip>

Account::Account(std::string number_main, double balance_main): number(number_main), balance(balance_main)
{
    setNumber(number_main);
    setBalance(balance_main);
}

void Account::setNumber(std::string number_main)
{
    number = number_main;
}

void Account::setBalance(double balance_main)
{
    balance = balance_main;
}

double Account::getBalance()
{
    return balance;
}

void Account::displayInfo()
{
    std::cout << "Account number: " << number << std::endl;
    std::cout << "Initial balance: " << std::fixed << std::setw(2) << balance << std::endl;
}






