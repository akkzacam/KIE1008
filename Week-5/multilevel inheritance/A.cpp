#include <iostream>
#include "A.hpp"

A::A(int a_main) : a(a_main) {}

int A::getA() const
{
    return a;
}

std::istream &operator>>(std::istream &in, A &A_main)
{
    std::cout << "Enter value of A: ";
    in >> A_main.a;
    return in;
}

std::ostream &operator<<(std::ostream &out, const A &A_main)
{
    out << "Value of a: " << A_main.getA() << std::endl; 
    return out;
}
