#include <iostream>
#include <ctime>
#include "../header/die.h"
using namespace std;

int main (void)
{
    srand(time(0));
    int user_roll_main, desired_sum_main;

    cout << "\nEnter amount of rolls: ";
    cin >> user_roll_main;
    cout << "\nEnter value of desired sum: ";
    cin >> desired_sum_main;

    die turn1;
    turn1.roll(user_roll_main, desired_sum_main);

    return 0;
}