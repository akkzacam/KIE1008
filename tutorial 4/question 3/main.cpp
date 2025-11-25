#include <iostream>
#include "rational.hpp"

int main(void)
{
    Rational rational_1, rational_2;

    std::cout << "\nEnter values for rational number 1:" << std::endl;
    std::cin >> rational_1;
    std::cout << "Rational number 1 = " << rational_1 << std::endl;

    std::cout << "\nEnter values for rational number 2:" << std::endl;
    std::cin >> rational_2;
    std::cout << "Rational number 2 = " << rational_2 << std::endl;

    Rational rational_subtraction;
    rational_subtraction = rational_1 - rational_2;

    Rational rational_division;
    rational_division = rational_1 / rational_2;

    std::cout << "(" << rational_1 << ") / (" << rational_2 << ") = " << rational_division << std::endl;
    std::cout << "(" << rational_1 << ") - (" << rational_2 << ") = " << rational_subtraction << std::endl;

    Rational temp = rational_1;
    std::cout << "(" << rational_1 << ") += (" << rational_2 << ") is " << (temp += rational_2) << std::endl;
    
    return 0;
}