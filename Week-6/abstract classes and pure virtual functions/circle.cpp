#include "circle.hpp"
#include <iostream>
#include <string>
#include <cmath>
#include <limits>

Circle::Circle(int radius_main, std::string colour_main): Shape(colour_main), radius(radius_main){}

double Circle::getArea() const
{
    return pow(radius, 2) * M_PI;
}

void Circle::input(std::istream &in)
{
    in >> *this;//calls for operator>>
}

void Circle::output(std::ostream &out) const
{
    out << "Circle radius = " << radius << std::endl;
    out << "Derived class of ";
    out << "Area of circle = " << getArea() << std::endl;
    Shape::output(out);
}

std::istream &operator>>(std::istream &in, Circle &circle_main)
{
    in >> static_cast<Shape &>(circle_main);
    std::cout << "Enter radius = ";
    in >> circle_main.radius;
    while(circle_main.radius < 1 || in.fail())
    {
        in.clear();
        in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error! Invalid input" << std::endl;
        std::cout << "Enter radius = ";
        in >> circle_main.radius;
    }
    return in;
}
