#include <iostream>
#include "friend_class.h"
using namespace std;

int main(void)
{
    Employee e1(5);
    Employer m1;

    cout << m1.getCount(e1) << endl;

    return 0;
}