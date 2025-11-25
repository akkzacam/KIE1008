#include "rectangle.hpp"
#include <string>
#include <iostream>
#include <limits>

Rectangle::Rectangle(int length_main, int width_main, std::string colour_main): 
Shape(colour_main), length(length_main), width(width_main){}

double Rectangle::getArea() const
{
    return length * width;
}

void Rectangle::input(std::istream &in)
{
    in >> *this;
}

void Rectangle::output(std::ostream &out) const
{
    out << "Rectangle length = " << length << ", width = " << width << std::endl;
    out << "Derived class of ";
    out << "Area of rectangle = " << getArea() << std::endl;
    Shape::output(out);
}

std::istream &operator>>(std::istream &in, Rectangle &rectangle_main)
{
    in >> static_cast<Shape &>(rectangle_main);
    std::cout << "Enter width = ";
    in >> rectangle_main.width;
    while(rectangle_main.width < 1 || in.fail())
    {
        in.clear();
        in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error! Invalid input" << std::endl;
        std::cout << "Enter width = ";
        in >> rectangle_main.width;
    }

    std::cout << "Enter length = ";
    in >> rectangle_main.length;
    while(rectangle_main.length < 1 || in.fail())
    {
        in.clear();
        in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error! Invalid input" << std::endl;
        std::cout << "Enter length = ";
        in >> rectangle_main.length;
    }
    return in;
}
