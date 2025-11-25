#include <iostream>
#include "../header/point.hpp"
using namespace std;

class point;

point::point(int x_main, int y_main) : x(x_main), y(y_main){}

ostream &operator<<(ostream &out, const point &point_main)
{
    out << "(" << point_main.x << ", " << point_main.y << ")";
    return out;
}

istream &operator>>(istream &in, point &point_main)
{
    cout << "Enter x coordinate: ";
    in >> point_main.x;
    cout << "Enter y coordinate: ";
    in >> point_main.y;
    return in;
}

