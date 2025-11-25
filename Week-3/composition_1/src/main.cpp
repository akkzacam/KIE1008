#include <iostream>
#include "../header/composition_1.h"
using namespace std;

int main (void)
{
    Point p1(2, 7);
    Point p2(5, 9);
    Location loc(p1, p2);

    cout << "Distance between ";
    p1.print();
    cout << " and ";
    p2.print();
    cout << " is " << loc.distance() << endl;

    return 0;
}