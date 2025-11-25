#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <string>
#include <iostream>
class Shape
{
    private:
    std::string colour;

    public:
    Shape(std::string colour = "red"); //default constructor
    virtual ~Shape() = default;

    virtual double getArea() const = 0; //pure virtual

    virtual void input(std::istream &in); //virtual input function for polymorphism
    virtual void output(std::ostream &out) const; //virtual output
    friend std::istream &operator>>(std::istream &, Shape &);
    friend std::ostream &operator<<(std::ostream &, const Shape &);
};

#endif
