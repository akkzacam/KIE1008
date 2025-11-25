#include <iostream>
#include <stdexcept>
#include "../header/composition_2.h"
using namespace std;

Date::Date (int m, int d, int y)
{
    if ((m > 0) && (m <= 12))
    {
        month = m;
    }
    else
    {
        throw invalid_argument ("month must be 1 to 12");
    }

    year = y;
    day = d;
}

void Date::print() const
{
    cout << day << '/' << month << '/' << year << endl;
}