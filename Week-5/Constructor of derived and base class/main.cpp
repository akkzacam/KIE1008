#include <iostream>
#include "point.hpp"
#include "movable_point.hpp"

int main(void)
{
    Point p1(4, 5);
    p1.print();
    std::cout << std::endl;

    MovablePoint mp1(11, 22, 33, 44);
    mp1.print();
    std::cout << std::endl;

    mp1.move();
    mp1.print();
    std::cout << std::endl;
    return 0;
}