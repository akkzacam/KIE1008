#include <string>
#include <iostream>
#include <limits>
#include <iomanip>
#include "../header/employee.hpp"

employee::employee(std::string name_main, std::string department_main, int age_main, double pay_main)
: name(name_main), department(department_main), age(age_main), pay(pay_main)
{
    setData(name_main, department_main, age_main, pay_main);
}

void employee::setData(std::string name_main, std::string department_main, int age_main, double pay_main)
{
    setName(name_main);
    setDepartment(department_main);
    setAge(age_main);
    setPay(pay_main);
}

void employee::setName(std::string name_main)
{
    name = name_main;
}

std::string employee::getName() const
{
    return name;
}

void employee::setDepartment(std::string department_main)
{
    department = department_main;
}

std::string employee::getDepartment() const
{
    return department;
}

void employee::setAge(int age_main)
{
    age = age_main;
}

int employee::getAge() const
{
    return age;
}

void employee::setPay(double pay_main)
{
    pay = pay_main;
}

double employee::getPay() const
{
    return pay;
}

std::istream &operator>>(std::istream &in, employee &employee_main)
{
    std::cout << "Enter name: ";
    in >> employee_main.name;
    while (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error! Invalid input.";
        std::cout << "Enter name: ";
        in >> employee_main.name;
    }

    std::cout << "Enter department: ";
    in >> employee_main.department;
    while (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error! Invalid input.";
        std::cout << "Enter name: ";
        in >> employee_main.department;
    }

    std::cout << "Enter age: ";
    in >> employee_main.age;
    while (std::cin.fail() || employee_main.age < 1 || employee_main.age > 100)
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error! Invalid input.";
        std::cout << "Enter age: ";
        in >> employee_main.age;
    }
    
    return in;
}

std::ostream &operator<<(std::ostream &out, const employee &employee_main)
{
    out << "--- Employee Details ---" << std::endl;
    out << "Name: " << employee_main.name << std::endl;
    out << "Department: " << employee_main.department << std::endl;
    out << "Age: " << employee_main.age << std::endl;
    return out;
}