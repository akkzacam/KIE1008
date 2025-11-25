#include <iostream>
#include "../header/point.hpp"
using namespace std;

int main(void)
{
    Point p1(1, 2);
    Point p2(4, 5); 

    //using the overload constructor +
    Point p3 = p1 + p2;
    p3.print();

    //or invoke using dot syntax, same as p1 + p2
    Point p4 = p1.operator+(p2);
    p4.print();

    //for multiple addition, chaining is more efficient
    Point p5 = p1 + p2 + p3 + p4;
    p5.print();
    
    return 0;
}