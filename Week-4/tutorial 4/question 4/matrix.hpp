#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <iostream>
#include <vector>

class MatrixType
{
    private:
    std::vector<std::vector<double>> matrix_2x2;
    int row;
    int column;

    public:
    MatrixType(int, int);

    MatrixType operator+(const MatrixType &) const;
    MatrixType operator*(const MatrixType &) const;

    friend std::ostream &operator<<(std::ostream &, const MatrixType &);
    friend std::istream &operator>>(std::istream &, MatrixType &);

};

#endif