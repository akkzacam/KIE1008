#include <iostream>
#include <limits>
#include "date.hpp"

Date::Date(int day_main, int month_main, int year_main) : day(day_main), month(month_main), year(year_main) {}

std::istream &operator>>(std::istream &in, Date &date_main)
{
    std::cout << "Enter day: ";
    in >> date_main.day;

    while (date_main.day < 1 || date_main.day > 31 || std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error! Invalid input." << std::endl;

        std::cout << "Enter day: ";
        in >> date_main.day;
    }

    std::cout << "Enter month: ";
    in >> date_main.month;

    while (date_main.month < 1 || date_main.month > 12 || std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error! Invalid input." << std::endl;

        std::cout << "Enter month: ";
        in >> date_main.month;
    }

    std::cout << "Enter year: ";
    in >> date_main.year;

    while (date_main.year < 1 || std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error! Invalid input." << std::endl;

        std::cout << "Enter year: ";
        in >> date_main.year;
    }

    return in;
}

std::ostream &operator<<(std::ostream &out, const Date &date_main)
{
    out << date_main.day << " / " << date_main.month << " / " << date_main.year;
    return out;
}