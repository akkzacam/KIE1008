#include "circle.hpp"
#include <cmath>

circle::circle(){}

circle::circle(double x_c_main, double y_c_main, double radius_main)
: x_coordinate(x_c_main), y_coordinate(y_c_main), radius(radius_main)
{
    setRadius(radius_main);
    setCenter(x_c_main, y_c_main);
}

void circle::setRadius(double radius_main)
{
    radius = radius_main;
}

void circle::setCenter(double x_c_main, double y_c_main)
{
    x_coordinate = x_c_main;
    y_coordinate = y_c_main;
}

void circle::getCenter(double &x_c_main, double &y_c_main)
{
    x_c_main = x_coordinate;
    y_c_main = y_coordinate;
}

double circle::getRadius() const
{
    return radius;
}

double circle::area() const
{
    return M_PI * pow(radius, 2);
}

