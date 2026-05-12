#pragma once

#include <vector>

// Matrix class skeleton.
// This class will store matrix size and matrix values.
class Matrix
{
public:
    // Default constructor.
    // Creates an empty matrix.
    Matrix();

    // Constructor that creates a matrix with rows and columns.
    Matrix(int rows, int columns);

    // Prints the matrix to the console.
    void Print() const;
    // Changes one value inside the matrix.
    void SetValue(int row, int column, double value); 

private:
    // Number of rows in the matrix.
    int rowCount;

    // Number of columns in the matrix.
    int columnCount;

    // Stores matrix values in one long list.
    std::vector<double> values;
};
