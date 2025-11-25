#include <iostream>
#include "A.hpp"
#include "B.hpp"

B::B (int a_main,int b_main) : A(a_main), b(b_main) {}

int B::getB() const
{
    return b;
}

std::istream &operator>>(std::istream &in, B &B_main)
{
    in >> static_cast<A &>(B_main);
    std::cout << "Enter the value of b: ";
    in >> B_main.b;
    return in;
}

std::ostream &operator<<(std::ostream &out, const B &B_main)
{
    out << static_cast<const A &>(B_main);
    std::cout << "Value of b: " << B_main.getB() << std::endl;
    return out;
}