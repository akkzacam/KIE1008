#ifndef BOX_HPP
#define BOX_HPP

#include <iostream>
using namespace std;

class Box
{
    private:
    int length, breadth, height;

    public:
    Box(int length = 0, int breadth = 0, int height = 0);
    void setParameters(int, int, int);
    int getVolume();
    Box operator+(const Box &box_main);
};

#endif