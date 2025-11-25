#ifndef RATIONAL_HPP
#define RATIONAL_HPP

#include <iostream>

class Rational
{
    private:
    double numerator, denominator;
    
    public:
    Rational(double = 0, double = 1);//constructor
    Rational operator/(const Rational &) const;//division
    Rational operator-(const Rational &) const; //subtraction
    Rational operator+=(const Rational &); // 2+=3 ex

    friend std::ostream &operator<<(std::ostream &, const Rational &); //output
    friend std::istream &operator>>(std::istream &, Rational &); // input
};

#endif