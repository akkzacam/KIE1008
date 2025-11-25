#include "../header/current.hpp"
#include <iostream>
#include <string>
#include <iomanip>

Current::Current(std::string number_main, double balance_main, std::string name_main, std::string IC_number_main, double charge_main):
Account(number_main, balance_main), Person(name_main, IC_number_main), charge(charge_main)
{
    setCharge(charge_main);
}

void Current::setCharge(double charge_main)
{
    this->charge = charge_main;
}

void Current::displayInfo()
{
    std::cout << "Monthly charge: RM" << std::fixed << std::setw(2) << charge << std::endl;
}

void Current::calculateBalance(int months)
{
    Person::displayInfo();
    Account::displayInfo();

    double temp_balance = Account::getBalance();
    for(int i = 0; i < months; i++)
    {
        temp_balance = temp_balance - charge;
        std::cout << std::fixed << std::setprecision(2) << "Balance after " << i + 1 << "month(s): RM" << std::right << temp_balance << std::endl;
    }
}