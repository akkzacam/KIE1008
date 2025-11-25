#ifndef DATE_TIME_HPP
#define DATE_TIME_HPP

#include <iostream>
#include "date.hpp"
#include "time.hpp"

class DateTime : public Date, public Time
{
    public:
    DateTime();
    DateTime(int second_main, int minute_main, int hour_main, int day_main, int month_main, int year_main);

    friend std::istream &operator>>(std::istream &, DateTime &);
    friend std::ostream &operator<<(std::ostream &, const DateTime &);
};

#endif