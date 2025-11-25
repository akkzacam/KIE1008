#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#include <iostream>

class Complex
{
    private:
    double real; // real part
    double imaginary; //imaginary part

    public:
    Complex(double = 0.0, double = 0.0); // constructor
    Complex operator+(const Complex &) const; // addition
    Complex operator*(const Complex &) const; // multiplication
    bool operator==(const Complex &) const; //comparison

    friend std::ostream &operator<<(std::ostream &, const Complex &); //output friend function
    friend std::istream &operator>>(std::istream &, Complex &); //input friend function
};

#endif