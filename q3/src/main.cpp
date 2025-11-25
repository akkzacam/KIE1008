#include <iostream>
#include "../header/Clock1.h"
using namespace std;

int main (void)
{
    //a
    int hour_main, second_main, minute_main;
    Clock myClock;
    myClock.setTime(8, 12, 30);
    cout << "My clock: ";
    myClock.printClock();

    //b
    Clock yourClock;
    yourClock.setTime(12, 35, 45);
    cout << "Your clock: ";
    yourClock.printClock();

    //c
    myClock.setTime(3, 48, 52);
    cout << "Now my clock is changed to ";
    myClock.printClock();
    cout << "Our clocks have different time." << endl;

    //d
    yourClock = myClock;

    //e
    cout << "If your clock is changed to ";
    yourClock.printClock();
    cout << "Our clocks have same time." << endl;

    //f
    //g
    myClock.increaseHour();
    cout << "My clock is increased an hour to ";
    myClock.printClock();
    cout << endl;

    return 0;
}