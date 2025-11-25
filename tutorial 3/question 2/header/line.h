#ifndef LINE_H
#define LINE_H

#include <iostream>
using namespace std;

class pointType
{
    public:
    pointType();
    pointType(float, float);

    void setX(float);
    void setY(float);

    float getX() const;
    float getY() const;

    float distance(pointType &);
    void print();

    private:
    double x, y;
};

class lineType
{
    public:
    lineType();
    lineType(pointType &, pointType &);

    void lineCondition();
    float slope();
    void displayEquation();


    private:
    pointType p1, p2;

    bool vertical = false;
    bool horizontal = false;
    bool slanted = false;

    float slope_value = 0;
};

#endif