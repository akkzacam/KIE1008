#ifndef COMPOSITION_1_H
#define COMPOSITION_1_H

#include <iostream>
using namespace std;

class Point
{
    public:
    Point(int x = 0, int y = 0);
    int getX() const;
    int getY() const;
    void print() const;

    private:
    int x, y;
};

class Location
{
    public:
    Location(Point, Point);
    double distance();

    private:
    Point Source;
    Point Destination;
};


#endif