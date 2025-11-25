#include <iostream>
#include <limits>
#include "rational.hpp"

Rational::Rational(double numerator_main, double denominator_main)
: numerator(numerator_main), denominator(denominator_main) {}

Rational Rational::operator/(const Rational &rational_main) const
{
    Rational rational_divide;
    rational_divide.numerator = this->numerator * rational_main.denominator;
    rational_divide.denominator = this->denominator * rational_main.numerator;
    return rational_divide;
}

Rational Rational::operator-(const Rational &rational_main) const
{
    Rational rational_subtraction;
    rational_subtraction.numerator = (this->numerator * rational_main.denominator) - (this->denominator * rational_main.numerator);
    rational_subtraction.denominator = this->denominator * rational_main.denominator;
    return rational_subtraction;
}

Rational Rational::operator+=(const Rational &rational_main)
{
    this->numerator = (this->numerator * rational_main.denominator) + (this->denominator * rational_main.numerator);
    this->denominator = this->denominator * rational_main.denominator;
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Rational &rational_main)
{
    out << rational_main.numerator << " / " << rational_main.denominator;
    return out;
}

std::istream &operator>>(std::istream &in, Rational &rational_main)
{
    std::cout << "Enter numerator value: ";
    in >> rational_main.numerator;
    std::cout << "Enter denominator value: ";
    in >> rational_main.denominator;

    while (rational_main.denominator == 0 || std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error. Enter a valid value: ";
        std::cout << "Enter numerator value: ";
        in >> rational_main.numerator;
        std::cout << "Enter denominator value: ";
        in >> rational_main.denominator;
    }
    return in;
}