#include "../header/cylinder.hpp"
#include <cmath>
#include <iostream>

cylinder::cylinder() {}

cylinder::cylinder(double x_c_main, double y_c_main, double radius_main, double height_main)
: circle(x_c_main, y_c_main, radius_main), height(height_main)
{
    setHeight(height_main);
}

void cylinder::setHeight(double height_main)
{
    height = height_main;
}

void cylinder::print() const
{
    std::cout << "Area of cylinder is: " << area() << std::endl;
    std::cout << "Volume of cylinder is: " << volume() << std::endl;
}

double cylinder::getHeight() const
{
    return height;
}

double cylinder::volume() const
{
    return area() * height;
}

double cylinder::area() const
{
    return (2 * M_PI * getRadius() * height) + (2 * M_PI * pow(getRadius(), 2));
}



