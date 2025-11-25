#ifndef CYLINDER_HPP
#define CYLINDER_HPP

#include "circle.hpp"

class cylinder: public circle
{
    public:
    void print() const;
    void setHeight(double);

    double getHeight() const;
    double volume() const;
    double area() const;

    cylinder();
    cylinder(double, double, double, double);

    private:
    double height;
};

#endif