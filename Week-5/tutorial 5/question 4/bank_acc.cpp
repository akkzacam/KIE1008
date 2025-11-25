#include "bank_acc.hpp"
#include <stdexcept>
#include <iostream>
#include <iomanip>

bankAccount::bankAccount(int account_num_main, double balance_main)
: account_num(account_num_main), balance(balance_main)
{
    if (balance < 0.0)
    {
        balance = 0.0;
        throw std::invalid_argument("Error! Invalid balance in account.");
    }
}

void bankAccount::credit(double amount_deposit)
{
    balance += amount_deposit;
}

void bankAccount::debit(double amount_withdraw)
{
    if (amount_withdraw > balance)
    {
        std::cout << "Debit amount exceeded account balance." << std::endl;
    }
    else
    {
        balance -= amount_withdraw;
    }
}

double bankAccount::getBalance()
{
    return balance;
}

void bankAccount::printInfo() const
{
    std::cout << "Account: " << account_num << std::endl;
    std::cout << "Balance: RM" << std::fixed << std::setprecision(2) << balance << std::endl;
}

