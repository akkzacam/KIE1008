#include <iostream>
#include <iomanip>
#include "../header/time.hpp"

Time::Time(int second_main, int minute_main, int hour_main)
: second(second_main), minute(minute_main), hour(hour_main) {}

std::istream &operator>>(std::istream &in, Time &time_main)
{
    std::cout << "Enter second: ";
    in >> time_main.second;

    while (time_main.second < 0 || time_main.second > 60 || std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error! Invalid input." << std::endl;

        std::cout << "Enter day: ";
        in >> time_main.second;
    }

    std::cout << "Enter minute: ";
    in >> time_main.minute;

    while (time_main.minute < 0 || time_main.minute > 60 || std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error! Invalid input." << std::endl;

        std::cout << "Enter minute: ";
        in >> time_main.minute;
    }

    std::cout << "Enter hour: ";
    in >> time_main.hour;

    while (time_main.hour < 0 || time_main.hour > 24 || std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error! Invalid input." << std::endl;

        std::cout << "Enter hour: ";
        in >> time_main.hour;
    }

    return in;
}

std::ostream &operator<<(std::ostream &out, const Time &time_main)
{
    out << std::setw(2) << std::setfill('0') << time_main.second;
    out << " : ";
    out << std::setw(2) << std::setfill('0') << time_main.minute;
    out << " : ";
    out << std::setw(2) << std::setfill('0') << time_main.hour;
    return out;
}