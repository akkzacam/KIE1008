#include <iostream>
#include <iomanip>
#include "../header/line.h"
using namespace std;

int main(void)
{
    pointType p1(4, 4);
    cout << "Point 1: ";
    p1.print();

    pointType p2(3, 1);
    cout << "Point 2: ";
    p2.print();

    cout << "Distance between point 1 and point 2 is: " << setprecision(3) << p1.distance(p2) << endl;

    lineType line1(p1, p2);
    cout << "Equation of line is: ";
    line1.displayEquation();

    return 0;
}