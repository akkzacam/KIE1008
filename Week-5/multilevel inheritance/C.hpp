#ifndef C_HPP
#define C_HPP

#include <iostream>
#include "B.hpp"

class C : public B
{
    protected:
    int c;

    public:
    C(int a_main = 0, int b_main = 0, int c_main = 0);
    int sum();
    int getC() const;

    friend std::istream &operator>>(std::istream &, C &);
    friend std::ostream &operator<<(std::ostream &, const C &);
};

#endif