#pragma once

#include <vector>

// Matrix class skeleton.
// This will store matrix data and later handle matrix operations.
class Matrix
{
public:
    // Temporary default constructor.
    // This lets us create a Matrix object without errors for now.
    Matrix() = default;

private:
    // Number of rows in the matrix.
    int rowCount = 0;

    // Number of columns in the matrix.
    int columnCount = 0;

    // Stores all matrix values.
    // Later, we will decide how to organize/index these values.
    std::vector<double> values;
};