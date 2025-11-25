#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "../header/Clock1.h"
using namespace std;

Clock::Clock()
{
    hour = 0;
    minute = 0;
    second = 0;
}

void Clock::setTime(int hour_main, int minute_main, int second_main)
{
    setHour(hour_main);
    setMinute(minute_main);
    setSecond(second_main);
}

void Clock::setHour(int hour_main)
{
    if ((hour_main >= 0) && (hour_main < 24))
    {
        hour = hour_main;
    }
    else
    {
        throw invalid_argument("Invalid hour");
    }
}

void Clock::setMinute(int minute_main)
{
    if ((minute_main >= 0) && (minute_main < 60))
    {
        minute = minute_main;
    }
    else
    {
        throw invalid_argument("Invalid minute");
    }
}

void Clock::setSecond(int second_main)
{
    if ((second_main >= 0) && (second_main < 60))
    {
        second = second_main;
    }
    else
    {
        throw invalid_argument("Invalid second");
    }
}

void Clock::printClock()
{
    cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second << endl;
}

int Clock::getHour()
{
    return hour;
}

int Clock::getMinute()
{
    return minute;
}

int Clock::getSecond()
{
    return second;
}

void Clock::increaseHour()
{
    hour = hour + 1;
}
