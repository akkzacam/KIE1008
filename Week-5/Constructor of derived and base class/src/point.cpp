#include <iostream>
#include "../header/point.hpp"

Point::Point (int x_main, int y_main) : x(x_main), y(y_main)
{
    setX(x);
    setY(y);
}

int Point::getX() const
{
    return x;
}

int Point::getY() const
{
    return y;
}

void Point::setX(int x)
{
    this->x = x;
}

void Point::setY(int y)
{
    this->y = y;
}

void Point::print() const
{
    std::cout << "(" << getX() << ", " << getY() << ")" << std::endl;
}