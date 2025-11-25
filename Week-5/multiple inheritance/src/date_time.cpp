#include <iostream>
#include "../header/date_time.hpp"

DateTime::DateTime() : Time(), Date() {}

DateTime::DateTime(int second_main, int minute_main, int hour_main, int day_main, int month_main, int year_main)
: Time(second_main, minute_main, hour_main), Date(day_main, month_main, year_main)  {}

std::istream &operator>>(std::istream &in, DateTime &date_time_main)
{
    //call for date base clss operator >>
    std::cout << "\n--- ENTER DATE ---" << std::endl;
    in >> static_cast<Date &>(date_time_main);

    //call for time base class operator >>
    std::cout << "\n--- ENTER TIME ---" << std::endl;
    in >> static_cast<Time &>(date_time_main);

    return in;
}

std::ostream &operator<<(std::ostream &out, const DateTime &date_time_main)
{
    //call for date and time base class operator <<
    out << static_cast<const Date &>(date_time_main);
    out << " @ ";
    out << static_cast<const Time &>(date_time_main);

    return out;
}