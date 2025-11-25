#include <iostream>
#include "../header/point.hpp"
using namespace std;

int main(void)
{
    point p1(1, 2), p2;

    //using overload operator <<
    cout << p1 << endl;

    //or using invoke via dot syntax
    operator<<(cout, p1);

    //using overload operator >>
    cout << endl;
    cin >> p1;
    cout << p1 << endl;

    //using invoke via dot syntax - more annoying
    cout << endl;
    operator>>(cin, p1);
    operator<<(cout, p1);

    //for cascading, use overload operator
    cout << endl;
    cout << "Enter point 1 coordinates." << endl;
    cin >> p1;
    cout << "Enter point 2 coordinates." << endl;
    cin >> p2;
    cout << "p1 = " << p1 << endl;
    cout << "p2 = " << p2 << endl;
    return 0;
}