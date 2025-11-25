#include <iostream>
#include "B.hpp"
#include "C.hpp"

C::C (int a_main, int b_main, int c_main) : B(a_main, b_main), c(c_main) {}

int C::getC() const
{
    return c;
}

int C::sum()
{
    int sum;
    sum = a + b + c;
    return sum;
}

std::istream &operator>>(std::istream &in, C &C_main)
{
    in >> static_cast<B &>(C_main);
    std::cout << "Enter value of c: ";
    in >> C_main.c;
    return in;
}

std::ostream &operator<<(std::ostream &out, const C &C_main)
{
    out << static_cast<const B &>(C_main);
    out << "Value of c: " << C_main.getC() << std::endl; 
    return out;
}