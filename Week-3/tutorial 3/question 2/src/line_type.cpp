#include <iostream>
#include <cmath>
#include <iomanip>
#include "../header/line.h"
using namespace std;

lineType::lineType() : p1(), p2(){}

lineType::lineType(pointType &point1_main, pointType &point2_main) : p1(point1_main), p2(point2_main) {}

void lineType::lineCondition()
{
    //check if vertical
    if (p1.getX() == p2.getX())
    {
        vertical = true;
    }
    //check if horizontal
    else if (p1.getY() == p2.getY())
    {
        horizontal = true;
    }
    //confirm slanted
    else
    {
        slanted = true;
    }
}

float lineType::slope()
{
    if (vertical)
    {
        slope_value = NAN;
    }
    else if (horizontal)
    {
        slope_value = 0;
    }
    else if (slanted)
    {
        slope_value = (p2.getY() - p1.getY()) / (p2.getX() - p1.getX());
    }

    return slope_value;
}

void lineType::displayEquation()
{
    lineCondition();
    if (vertical)
    {
        cout << " x = " << fixed << setprecision(3) << p1.getX() << endl;
    }
    else if (horizontal)
    {
        cout << "y = " << fixed << setprecision(3) << p1.getY() << endl;
    }
    else if (slanted)
    {
        float c = p1.getY() - (slope() * p1.getX());
        float m = slope();
        cout << "y = " << fixed << setprecision(3) << m << "x + " << fixed << setprecision(3) << c << endl;
    }
}