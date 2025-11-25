#include <iostream>
#include "../header/circle.hpp"
#include "../header/cylinder.hpp"

int main(void)
{
    cylinder newCylinder(3, 4, 5, 6);
    newCylinder.print();
    return 0;
}