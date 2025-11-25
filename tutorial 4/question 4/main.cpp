#include <iostream>
#include <limits>
#include "matrix.hpp"

void input(int &, int &);

void input(int &row, int &column)
{
    std::cout << "row = ";
    std::cin >> row;
    std::cout << "column = ";
    std::cin >> column; 

    while (row < 1 || column < 1 || std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error. invalid input" << std::endl;
        std::cout << "row = ";
        std::cin >> row;
        std::cout << "column = ";
        std::cin >> column; 
    }
}

int main(void)
{
    int row1, column1, row2, column2;

    std::cout << "\nEnter row and column value for matrix 1:" << std::endl;
    input(row1, column1);
    MatrixType matrixA(row1, column1);
    std::cin >> matrixA;
    std::cout << "\nMatrix A:" << std::endl << matrixA;

    std::cout << "\nEnter row and column value for matrix 2:" << std::endl;
    input(row2, column2);
    MatrixType matrixB(row2, column2);
    std::cin >> matrixB;
    std::cout << "\nMatrix B" << std::endl << matrixB;

    if(column1 == row2)
    {
        MatrixType matrix_product(row1, column2);
        matrix_product = matrixA * matrixB;
        std::cout << "\nMatrix A * Matrix B = " << std::endl << matrix_product << std::endl;
    }
    else
    {
        std::cout << "\nMultiplication failed!" << std::endl;
        std::cout << "Number of columns of A must equal to number of rows of B for multiplication." << std::endl;
    }

    if (column1 == column2 && row1 == row2)
    {
        MatrixType matrix_sum(row1, column1);
        matrix_sum = matrixA + matrixB;
        std::cout << "\nMatrix A + Matrix B = " << std::endl << matrix_sum << std::endl;
    }
    else
    {
        std::cout << "\nAddition failed!" << std::endl;
        std::cout << "Dimensions of A must equal to B." << std::endl;
    }

    return 0;
}