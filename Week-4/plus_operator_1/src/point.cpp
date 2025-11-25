#include <iostream>
#include "../header/point.hpp"
using namespace std;

class Point;

Point::Point(int x_main, int y_main) : x(x_main), y(y_main) {}

int Point::getX() const
{
    return x;
}

int Point::getY() const
{
    return y;
}

void Point::setX(int x_main)
{
    this->x = x_main;
}

void Point::setY(int y_main)
{
    this->y = y_main;
}

void Point::print() const
{
    cout << "(" << getX() << ", " << getY() << ")" << endl;
}

//overloading '+' operator
Point Point::operator+(const Point &rhs)
{
    return Point(x + rhs.x, y + rhs.y);
}