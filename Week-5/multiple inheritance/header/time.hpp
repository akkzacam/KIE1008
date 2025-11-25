#ifndef TIME_HPP
#define TIME_HPP

#include <iostream>

class Time
{
    protected:
    int second, minute, hour;

    public:
    Time(int second_main = 0, int minute_main = 0, int hour_main = 0);
    
    friend std::istream &operator>>(std::istream &, Time &);
    friend std::ostream &operator<<(std::ostream &, const Time &);
};

#endif