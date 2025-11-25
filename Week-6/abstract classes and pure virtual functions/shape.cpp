#include "shape.hpp"
#include <string>
#include <iostream>

Shape::Shape(std::string colour_main)
{
    this->colour = colour_main; //the same as colour = colour_main
}

std::istream &operator>>(std::istream &in, Shape &shape_main)
{
    std::cout << "Enter colour of shape: ";
    in >> shape_main.colour;
    return in;
}

std::ostream &operator<<(std::ostream &out, const Shape &shape_main)
{
    shape_main.output(out);
    return out;
}

void Shape::input(std::istream &in)
{
    in >> *this;
}

void Shape::output(std::ostream &out) const
{
    out << "Colour of shape is " << colour << std::endl;
}