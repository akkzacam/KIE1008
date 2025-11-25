#ifndef B_HPP
#define B_HPP

#include <iostream>
#include "A.hpp"

class B : public A
{
    protected: //to be used in derived class C
    int b;

    public:
    B(int a_main = 0, int b_main = 0);
    int getB() const;

    friend std::ostream &operator<<(std::ostream &, const B &);
    friend std::istream &operator>>(std::istream &, B &);
};

#endif