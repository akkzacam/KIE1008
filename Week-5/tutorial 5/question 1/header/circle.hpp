#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include <cmath>

class circle
{
    public:
    void print() const;
    void setRadius(double);
    void setCenter(double, double);
    void getCenter(double &, double &);
    double getRadius() const;
    double area() const;

    circle();
    circle(double, double, double);

    private:
    double x_coordinate;
    double y_coordinate;
    double radius;
};

#endif