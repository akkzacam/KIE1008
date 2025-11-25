#ifndef CLOCK1_H
#define CLOCK1_H

#include <iostream>
using namespace std;

class Clock
{
    public:
    Clock();
    void setTime(int, int, int);
    void setHour(int);
    void setMinute(int);
    void setSecond(int);
    void printClock();

    void increaseHour();

    int getHour();
    int getMinute();
    int getSecond();

    private:
    int hour, minute, second;
};

#endif