#include <string>
#include "hourly_employee.hpp"

hourlyEmployee::hourlyEmployee(std::string name_main, std::string department_main, int age_main, double pay_main, double hrsWk, double payRate)
: employee(name_main, department_main, age_main, pay_main), hoursWorked(hrsWk), hourlyPayRate(payRate)
{
    setData(name_main, department_main, age_main, pay_main, hrsWk, payRate);
}

void hourlyEmployee::setData(std::string name_main, std::string department_main, int age_main, double pay_main, double hrsWk, double payRate)
{
    employee(name_main, department_main, pay_main);
    setHoursWorked(hrsWk);
    setHourlyPayRate(payRate);
}

void hourlyEmployee::setHoursWorked(double hrsWk)
{
    hoursWorked = hrsWk;
}

double hourlyEmployee::getHoursWorked() const
{
    return hoursWorked;
}

void hourlyEmployee::setHourlyPayRate(double payRate)
{
    hourlyPayRate = payRate;
}

double hourlyEmployee::getHourlyPayRate() const
{
    return hourlyPayRate;
}

void hourlyEmployee::setPay()
{
    if (getHoursWorked() >= 0.0 && getHourlyPayRate() >= 0.0)
    {
        double calculated_pay = getHoursWorked() * getHourlyPayRate();

        employee::setPay(calculated_pay);
    }
    else
    {
        employee::setPay(0.0);
    }
}

std::istream &operator>>(std::istream &in, hourlyEmployee &hourlyEmployee_main)
{
    in >> static_cast<employee &>(hourlyEmployee_main);
    std::cout << "Enter total hours worked per week: ";
    in >> hourlyEmployee_main.hoursWorked;
    while(hourlyEmployee_main.hoursWorked < 0 || hourlyEmployee_main.hoursWorked > 168 || std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error! Invalid input" << std::endl;
        std::cout << "Enter total hours worked per week: ";
        in >> hourlyEmployee_main.hoursWorked;
    }

    std::cout << "Enter hourly rate $: ";
    in >> hourlyEmployee_main.hourlyPayRate;
    while(hourlyEmployee_main.hourlyPayRate < 0 || std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error! Invalid input" << std::endl;
        std::cout << "Enter total hours worked per week: ";
        in >> hourlyEmployee_main.hourlyPayRate;
    }
    return in;
}

std::ostream &operator<<(std::ostream &out, const hourlyEmployee &hourlyEmployee_main)
{
    out << static_cast<const employee &>(hourlyEmployee_main);

    out << "Hours Worked/Week: " << hourlyEmployee_main.hoursWorked << std::endl;
    out << "Hourly Rate: $" << hourlyEmployee_main.hourlyPayRate << std::endl;
    
    // The total calculated pay (retrieved using the inherited getPay())
    out << "Calculated Monthly Pay: $" << hourlyEmployee_main.getPay() << std::endl;
    out << "------------------------" << std::endl;

    return out;
}