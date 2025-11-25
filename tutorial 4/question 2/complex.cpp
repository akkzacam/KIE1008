#include <iostream>
#include "complex.hpp"

Complex::Complex(double x_main, double y_main)
: real(x_main), imaginary(y_main){}

Complex Complex::operator+(const Complex &complex_main) const
{
    Complex complex_sum;
    complex_sum.real = this->real + complex_main.real;
    complex_sum.imaginary = this->imaginary + complex_main.imaginary;
    return complex_sum;
}

Complex Complex::operator*(const Complex &complex_main) const
{
    Complex complex_multiple;
    complex_multiple.real = (this->real * complex_main.real) - (this->imaginary * complex_main.imaginary);
    complex_multiple.imaginary = (this->imaginary * complex_main.real) + (this->real * complex_main.imaginary);
    return complex_multiple;
}

bool Complex::operator==(const Complex &complex_main) const
{
    return (real == complex_main.real) && (imaginary == complex_main.imaginary);
}

//input output
std::ostream &operator<<(std::ostream &out, const Complex &complex_main)
{
    out << complex_main.real << " + " << complex_main.imaginary << "j";
    return out;
}

std::istream &operator>>(std::istream &in, Complex &complex_main)
{
    std::cout << "Enter Real value: ";
    in >> complex_main.real;
    std::cout << "Enter Imaginary value: ";
    in >> complex_main.imaginary;
    return in;
}