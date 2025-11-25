#ifndef DATE_HPP
#define DATE_HPP

#include <iostream>

class Date
{
    protected:
    int day, month, year;

    public:
    Date(int day_main = 1, int month_main = 1, int year_main = 2000);

    friend std::istream &operator>>(std::istream &, Date &);
    friend std::ostream &operator<<(std::ostream &, const Date &);
};

#endif