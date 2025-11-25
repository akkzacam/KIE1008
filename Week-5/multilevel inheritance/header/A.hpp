#ifndef A_HPP
#define A_HPP

#include <iostream>

class A
{
    protected://instead of private to be accessed by derived class b and c
    int a;
    
    public:
    A(int a_main = 0); //default constructor
    int getA() const;

    friend std::ostream &operator<<(std::ostream &, const A &); //output
    friend std::istream &operator>>(std::istream &, A &); //input
};


#endif