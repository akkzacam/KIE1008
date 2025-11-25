#include <iostream>
#include <ctime>  // Include ctime here
#include <cstdlib> // Include cstdlib here
#include "../header/tutor.hpp"

int main()
{
    // FIX: Seed the random number generator ONCE at the start
    srand(time(0)); 
    
    Tutor s1("Ali");
    s1.printInfo();
    
    // Add a simple check to ensure the second ID generated is different
    Tutor s2("Budi");
    s2.printInfo(); 
}