#include <iostream>
#include <string>
#include <stdexcept>
#include "../header/day_type.h"
using namespace std;

dayType::dayType()
{
    day = "";
    previous_day = "";
    next_day = "";
    day_after = "";
}

void dayType::setDay(string d)
{
    if (d == "mon")
    {
        day = day_week[0];
    }
    else if (d == "tues")
    {
        day = day_week[1];
    }
    else if (d == "wed")
    {
        day = day_week[2];
    }
    else if (d == "thurs")
    {
        day = day_week[3];
    }
    else if (d == "fri")
    {
        day = day_week[4];
    }
    else if (d == "sat")
    {
        day = day_week[5];
    }
    else if (d == "sun")
    {
        day = day_week[6];
    }
    else
    {
        throw invalid_argument("invalid input");
    }
}

void dayType::setNextDay()
{
    if (day == day_week[6])
    {
        next_day = day_week[0];
    }
    else
    {
        for (int i = 0; i < 6; i++)
        {
            if (day == day_week[i])
            {
                next_day = day_week[i + 1];
                break;
            }
            else
            {
                continue;
            }
        }
    }
}

void dayType::setPreviousDay()
{
    if (day == day_week[0])
    {
        previous_day = day_week[6];
    }
    else
    {
        for (int i = 1; i < 7; i++)
        {
            if (day == day_week[i])
            {
                previous_day = day_week[i - 1];
                break;
            }
            else
            {
                continue;
            }
        }
    }
}

void dayType::calculateDays(int number_day_main)
{
    // Find current day's index
    int current_index = -1;
    for (int i = 0; i < 7; i++)
    {
        if (day == day_week[i])
        {
            current_index = i;
            break;
        }
    }

    // Safety check
    if (current_index == -1)
    {
        throw logic_error("Current day is invalid before calculating days after.");
    }

    // Calculate new index with wraparound
    int newIndex = (current_index + number_day_main) % 7;
    day_after = day_week[newIndex];
}


void dayType::displayDaysAfter(int number_day_main)
{
    cout << number_day_main << " days after " << getDay() << " is " << day_after << endl;
}

string dayType::getDay()
{
    return day;
}

string dayType::getNextDay()
{
    return next_day;
}

string dayType::getPreviousDay()
{
    return previous_day;
}

void dayType::printDay()
{
    cout << "Current day is: " << getDay() << endl;
    cout << "Next day is: " << getNextDay() << endl;
    cout << "Previous day is: " << getPreviousDay() << endl;
}


