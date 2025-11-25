#ifndef DAY_TYPE_H
#define DAY_TYPE_H

#include <iostream>
#include <string>
using namespace std;

class dayType
{
    public:
    dayType();
    void setDay(string);
    void printDay();
    void setNextDay();
    void setPreviousDay();
    void calculateDays(int);
    void displayDaysAfter(int);

    string getDay(); //returns day
    string getNextDay(); // returns next day
    string getPreviousDay(); // returns previous day

    private:
    string day, previous_day, next_day, day_after;
    string day_week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
};

#endif