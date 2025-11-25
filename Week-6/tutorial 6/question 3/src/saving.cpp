#include "../header/saving.hpp"
#include <string>
#include <iostream>
#include <iomanip>

Saving::Saving(std::string number_main, double balance_main, std::string name_main, std::string IC_number_main, double rate_main):
Account(number_main, balance_main), Person(name_main, IC_number_main), rate(rate_main)
{
    setRate(rate_main);
}

void Saving::setRate(double rate_main)
{
    this->rate = rate_main;
}

void Saving::displayInfo()
{
    std::cout << "Monthly Interest Rate: " << rate << std::endl;
}

void Saving::calculateBalance(int months)
{
    Person::displayInfo();
    Account::displayInfo();

    double temp_balance = Account::getBalance();
    for(int i = 0; i < months; i++)
    {
        temp_balance = temp_balance + (rate * temp_balance);
        std::cout << std::fixed << std::setprecision(2) << "Balance after " << i + 1 << " month(s): RM" << std::right << temp_balance << std::endl;
    }
}