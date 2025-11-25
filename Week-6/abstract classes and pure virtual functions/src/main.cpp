#include "../header/circle.hpp"
#include "../header/rectangle.hpp"
#include "../header/shape.hpp"
#include <string>
#include <iostream>

int main(void)
{
    //shape s1, cannot create instance of abstract class shape

    //using pointers
    
    
    Shape *s1;
    s1 = new Circle();
    //std::cin >> *s1; dont use this. call circle using virtual input function
    s1->input(std::cin);
    std::cout << *s1;
    delete s1;

    std::cout << std::endl;

    Shape *s2;
    s2 = new Rectangle();
    s2->input(std::cin);
    std::cout << *s2;
    delete s2;
    
    std::cout << std::endl;
    //using friend

    //using references
    
    // Shape s3 = Circle(6); //Cannot allocate an object of abstract type
    Circle c3;
    Shape &s3 = c3;
    s3.input(std::cin);
    std::cout << s3;

    std::cout << std::endl;

    Rectangle r4;
    Shape &s4 = r4;
    s4.input(std::cin);
    std::cout << s4;

    return 0;
}