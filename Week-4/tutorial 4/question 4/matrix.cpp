#include <iostream>
#include <vector>
#include <iomanip>
#include <limits>
#include <stdexcept>
#include "matrix.hpp"

/*
MatrixType::MatrixType(int rows_main, int column_main) : rows(rows_main), columns(column_main)
{
    matrix_2x2.resize(rows, std::vector<double>(columns, 0.0));
}
*/

//or

MatrixType::MatrixType(int row_main, int column_main) : row(row_main), column(column_main), matrix_2x2(row_main, std::vector<double>(column_main, 0.0)) {}

MatrixType MatrixType::operator+(const MatrixType &matrix_main) const
{
    if (row != matrix_main.row || column != matrix_main.column)
    {
        throw std::invalid_argument("Matrix dimensions must match for addition!");
    }

    MatrixType matrix_sum(row, column);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            matrix_sum.matrix_2x2[i][j] = matrix_2x2[i][j] + matrix_main.matrix_2x2[i][j];
        }
    }
    return matrix_sum;
}

MatrixType MatrixType::operator*(const MatrixType &matrix_main) const
{
    if (column != matrix_main.row)
    {
        throw std::invalid_argument("Number of columns of A must equal to number of rows of B!");
    }

    MatrixType matrix_product(row, column);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < matrix_main.column; j++)
        {
            matrix_product.matrix_2x2[i][j] = 0.0;
            for (int k = 0; k < column; k++)
            {
                matrix_product.matrix_2x2[i][j] += matrix_2x2[i][k] * matrix_main.matrix_2x2[k][j];
            }
        }
    }
    return matrix_product;
}

std::ostream &operator<<(std::ostream &out, const MatrixType &matrix_main)
{
    for (int i = 0; i < matrix_main.row; i++)
    {
        for (int j = 0; j < matrix_main.column; j++)
        {
            out << std::setw(5) << matrix_main.matrix_2x2[i][j];
        }
        out << std::endl;
    }
    return out;
}

std::istream &operator>>(std::istream &in, MatrixType &matrix_main)
{
    for (int i = 0; i < matrix_main.row; i++)
    {
        for (int j = 0; j < matrix_main.column; j++)
        {
            std::cout << "[" << i << "][" << j << "] = ";
            in >> matrix_main.matrix_2x2[i][j];

            while (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Error! Invalid input.";
                std::cout << "[" << i << "][" << j << "] = ";
                in >> matrix_main.matrix_2x2[i][j];
            }
        }
    }
    return in;
}


