#include <iostream>
#include <iomanip>
#include <cmath>
#include "../header/line.h"
using namespace std;

//default constructor
pointType::pointType() : x(0), y(0) {}

pointType::pointType(float x_main, float y_main) : x(x_main), y(y_main) {}

void pointType::setX(float x_main)
{
    x = x_main;
}

void pointType::setY(float y_main)
{
    y = y_main;
}

float pointType::getX() const
{
    return x;
}

float pointType::getY() const
{
    return y;
}

float pointType::distance(pointType &p2_main)
{
    float dx, dy, distance;
    dx = p2_main.getX() - getX();
    dy = p2_main.getY() - getY();
    distance = sqrt(pow(dx, 2) + pow(dy, 2));

    return distance;
}

void pointType::print()
{
    cout << "(" << getX() << ", " << getY() << ")" << endl;
}