#include "../header/saving.hpp"
#include "../header/current.hpp"
#include <iostream>

int main()
{
    Saving s1("A001", 5000.00, "John Tan", "990101-10-1234", 0.02);
    Current c1("C001", 5000.00, "Ali Ahmad", "970202-10-5678", 10.00);

    std::cout << "\n--- Saving Account Info ---\n";
    s1.displayInfo();
    s1.calculateBalance(12);

    std::cout << "\n--- Current Account Info ---\n";
    c1.displayInfo();
    c1.calculateBalance(12);

    return 0;
}