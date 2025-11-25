#include <iostream>
#include <iomanip>
#include "complex.hpp"

int main(void)
{
    Complex complex_1, complex_2;

    std::cout << "\nEnter values for complex number 1." << std::endl;
    std::cin >> complex_1;
    std::cout << "Values for complex number 1: " << std::fixed << std::setprecision(2)<< complex_1 << std::endl;

    std::cout << "\nEnter values for complex number 2." << std::endl;
    std::cin >> complex_2;
    std::cout << "Values for complex number 2: " << std::fixed << std::setprecision(2) << complex_2 << std::endl;

    Complex complex_sum;
    complex_sum = complex_1 + complex_2;
    std::cout << "\nSum of " << std::fixed << std::setprecision(2) << complex_1 << " and " << std::fixed << std::setprecision(2) << complex_2 << " is: " << std::fixed << std::setprecision(2) << complex_sum << std::endl;

    Complex complex_multiple;
    complex_multiple = complex_1 * complex_2;
    std::cout << "\nProduct of " << std::fixed << std::setprecision(2) << complex_1 << " and " << std::fixed << std::setprecision(2) << complex_2 << " is: " << std::fixed << std::setprecision(2) << complex_multiple << std::endl;

    if (complex_1 == complex_2)
    {
        std::cout << "\nBoth complex numbers 1 and 2 are equal." << std::endl;
    }
    else
    {
        std::cout << "\nBoth complex numbers 1 and 2 are different." << std::endl;
    }

    return 0;
}