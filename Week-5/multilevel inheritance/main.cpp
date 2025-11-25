#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(void)
{
    C object_C;
    B object_B;
    A object_A;
    
    std::cout << "--- Testing A Input/Output ---" << std::endl;
    std::cin >> object_A;
    std::cout << object_A;

    std::cout << "\n--- Testing B Input/Output (Chained to A) ---" << std::endl;
    std::cin >> object_B;
    std::cout << object_B;

    std::cout << "\n--- Testing C Input/Output (Chained to B and A) ---" << std::endl;
    std::cin >> object_C;
    std::cout << object_C;

    std::cout << "\n--- Testing Sum (A+B+C members) ---" << std::endl;
    std::cout << "Sum: " << object_C.sum() << std::endl;
    
    return 0;
}