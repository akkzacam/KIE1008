#include <iostream>
#include "../header/composition_1.h"
using namespace std;

Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}

int Point::getX() const
{
    return x;
}

int Point::getY() const
{
    return y;
}

void Point::print() const{
    cout << "(" << x << ", " << y << ")" << endl;
}