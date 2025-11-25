#include <iostream>
#include "../header/box.hpp"
using namespace std;

class Box;

Box::Box(int length_main, int breadth_main, int height_main) : 
length(length_main), breadth(breadth_main), height(height_main) {}

void Box::setParameters(int length_main, int breadth_main, int height_main)
{
    length = length_main;
    breadth = breadth_main;
    height = height_main;
}

int Box::getVolume()
{
    int volume = length * breadth * height;
    return volume;
}

Box Box::operator+(const Box &box_main)
{
    Box box1;
    box1.length = this->length + box_main.length;
    box1.breadth = this->breadth + box_main.breadth;
    box1.height = this->height + box_main.height;
    return box1;
}