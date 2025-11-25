#include "bank_acc.hpp"
#include "saving_acc.hpp"
#include <iostream>
#include <iomanip>
#include <memory> // Good practice for managing objects

// Define the constant here so main.cpp can use it for display
const double TRANSACTION_FEE = 0.50; 

int main() {
    // Set output formatting to two decimal places
    std::cout << std::fixed << std::setprecision(2);
    
    std::cout << "========================================" << std::endl;
    std::cout << "        Bank Account Test Program       " << std::endl;
    std::cout << "========================================" << std::endl;

    // --- 1. Testing bankAccount (Base Class) ---
    
    // a) Test invalid initial balance (should display error and set balance to 0.0)
    try {
        bankAccount regularAcc(1001, -50.00); 
        std::cout << "\n--- Regular Account (1001) ---" << std::endl;
        regularAcc.printInfo(); 

        // b) Test successful credit
        std::cout << "\nAttempting credit of RM100.00..." << std::endl;
        regularAcc.credit(100.00); 
        std::cout << "New Balance: RM" << regularAcc.getBalance() << std::endl; // Should be RM100.00

        // c) Test successful debit
        std::cout << "\nAttempting debit of RM30.00..." << std::endl;
        regularAcc.debit(30.00); 
        std::cout << "New Balance: RM" << regularAcc.getBalance() << std::endl; // Should be RM70.00

        // d) Test failed debit (debit amount exceeds account balance)
        std::cout << "\nAttempting debit of RM500.00 (Exceeds Balance)..." << std::endl;
        regularAcc.debit(500.00); // Should print error message
        std::cout << "Final Balance: RM" << regularAcc.getBalance() << std::endl; // Should remain RM70.00

    } catch (const std::invalid_argument& e) {
        // Catch block for constructor error (though the requirement is to handle it internally)
        std::cerr << "Exception caught during bankAccount setup: " << e.what() << std::endl;
    }

    std::cout << "\n========================================" << std::endl;
    
    // --- 2. Testing savingsAccount (Derived Class) ---
    
    savingsAccount savingsAcc(2001, 1000.00, 0.05); // 5% Interest Rate

    std::cout << "\n--- Savings Account (2001) ---" << std::endl;
    savingsAcc.printInfo();

    // a) Test calculateInterest
    double interest = savingsAcc.calculateInterest();
    std::cout << "Calculated Annual Interest (on RM1000.00): RM" << interest << std::endl;

    // b) Test credit (fee subtracted)
    std::cout << "\nAttempting credit of RM200.00 (Fee: RM" << TRANSACTION_FEE << ")..." << std::endl;
    savingsAcc.credit(200.00); 
    // Expected Balance: 1000.00 + 200.00 - 0.50 = 1199.50
    savingsAcc.printInfo(); 

    // c) Test debit (fee subtracted)
    std::cout << "\nAttempting debit of RM50.00 (Fee: RM" << TRANSACTION_FEE << "))..." << std::endl;
    savingsAcc.debit(50.00); 
    // Expected Balance: 1199.50 - 50.00 - 0.50 = 1149.00
    savingsAcc.printInfo();

    // d) Test failed debit where amount + fee exceeds balance
    std::cout << "\nAttempting debit of RM1200.00 (Exceeds Balance + Fee)..." << std::endl;
    savingsAcc.debit(1200.00); 
    savingsAcc.printInfo(); // Balance should remain RM1149.00
    
    std::cout << "\n========================================" << std::endl;
    std::cout << "Test run finished. Ready for tomorrow's fixes!" << std::endl;

    return 0;
}