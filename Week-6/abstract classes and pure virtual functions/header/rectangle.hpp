#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include <string>
#include "shape.hpp"

class Rectangle: public Shape
{
    private:
    int length, width;

    public:
    Rectangle(int length_main = 1, int width_main = 1, std::string colour = "red");
    double getArea() const override; //implement virtual function

    virtual void input(std::istream &in) override;
    virtual void output(std::ostream &out) const override;
    friend std::istream &operator>>(std::istream &, Rectangle &);
};

#endif