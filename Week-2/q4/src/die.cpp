#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../header/die.h"
using namespace std;

die::die()
{
    num = 1;
    sum = 0;
}

void die::roll(int user_roll_main, int desired_sum_main)
{
    int value_desired_roll;
    bool desired_reach = true;
    cout << endl;
    for (int i = 0; i < user_roll_main; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            num = (rand() % 6) + 1;
            ten_dice[j] = getNum();
            cout << ten_dice[j] << " ";
            sum += ten_dice[j];
        }
        cout << "\nSum of roll number " << i + 1 << " for 10 dice: " << sum << endl << endl;

        if ((sum > desired_sum_main) && desired_reach)
        {
            value_desired_roll = i + 1;
            desired_reach = false;
        }
        else
        {
            continue;
        }
    }

    if ((sum > desired_sum_main) && (desired_reach == false))
    {
        cout << "\nNumber of rolls to reach desired sum: " << value_desired_roll << endl;
    }
    else
    {
        cout << "\nNumber of rolls did not reach desired sum" << endl;
    }
}

int die::getNum() const
{
    return num;
}