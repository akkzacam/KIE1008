#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
using namespace std;

class Point
{
    private:
    int x, y;

    public:
    Point(int x = 0, int y = 0); //default constructor
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int Y);
    void print() const;

    //overloading '+' operator
    Point operator+(const Point &rhs);

};

#endif