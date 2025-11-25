#include <iostream>
#include <iomanip>
#include "../header/employee.hpp"
#include "../header/hourly_employee.hpp"

int main(void)
{
    std::cout << std::fixed << std::setprecision(2);

    // 1. Test using the Constructor
    // Name, Dept, Age, Pay(base), Hours/Wk, Rate/Hr
    // Calculated Monthly Pay: 40 hrs/wk * $40.00/hr * 4 wks = $6400.00
    hourlyEmployee emp1("Aydan", "Microchips", 20, 0.0, 40.0, 40.0);
    
    std::cout << "--- Employee 1 (Constructed) ---" << std::endl;
    std::cout << emp1;
    
    // 2. Test using the Stream Operator (Interactive Input)
    hourlyEmployee emp2;
    std::cout << "\n--- Enter Data for Employee 2 ---" << std::endl;
    std::cin >> emp2; // Triggers your defined istream operator

    // CRITICAL: After user input, we must manually trigger the pay calculation!
    emp2.setPay(); 

    std::cout << "\n--- Employee 2 (From Input) ---" << std::endl;
    std::cout << emp2; // Triggers your defined ostream operator

    return 0;
}