#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "shape.hpp"

class Circle: public Shape
{
    private:
    int radius;

    public:
    Circle(int radius_main = 1, 
    std::string colour_main = "red"); //default constructor
    double getArea() const override; //implement virtual function

    virtual void input(std::istream &in) override;
    virtual void output(std::ostream &out) const override;
    friend std::istream &operator>>(std::istream &, Circle &);
};

#endif
