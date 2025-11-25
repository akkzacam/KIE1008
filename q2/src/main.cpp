#include <iostream>
#include <string>
#include "../header/day_type.h"
using namespace std;

void inputDay(string&);
void inputNumberDay(int&, string);

void inputDay(string &day_main)
{
    cout << "\nEnter day (ie. mon, tue, etc.): ";
    cin >> day_main;
}

void inputNumberDay(int &number_day_main, string day_main)
{
    cout << "\nHow many days would like to count after " << day_main << "?" << endl;
    cin >> number_day_main;
}

int main (void)
{
    string day_main;
    inputDay(day_main);

    dayType day1;
    day1.setDay(day_main);
    day1.setNextDay();
    day1.setPreviousDay();
    day1.printDay();

    int number_day_main;
    inputNumberDay(number_day_main, day_main);
    day1.calculateDays(number_day_main);
    day1.displayDaysAfter(number_day_main);

    return 0;
}
//send help