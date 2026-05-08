#include "../include/Matrix.h"

#include <iostream>

// Default constructor.
// Creates an empty matrix.
Matrix::Matrix()
    : rowCount(0), columnCount(0), values()
{
}

// Constructor with rows and columns.
// Creates a matrix filled with 0.0 values.
Matrix::Matrix(int rows, int columns)
    : rowCount(rows), columnCount(columns), values(rows * columns, 0.0)
{
}

// Prints the matrix size and values.
void Matrix::Print() const
{
    std::cout << "Matrix: " << rowCount << " x " << columnCount << std::endl;

    for (int row = 0; row < rowCount; row++)
    {
        for (int column = 0; column < columnCount; column++)
        {
            int index = row * columnCount + column;
            std::cout << values[index] << " ";
        }

        std::cout << std::endl;
    }
}