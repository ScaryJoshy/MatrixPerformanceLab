#include "Vector.h"
#include <iostream>

// Constructor definition
// This copies the incoming values into the class's data member.
Vector::Vector(const std::vector<double>& values)
    : data(values)
{
}

// Adds two vectors together and returns the result.
// Example:
// [1, 2, 3] + [4, 5, 6] = [5, 7, 9]
Vector Vector::Add(const Vector& other) const
{
    std::vector<double> result;

    // Go through each position in the vector
    for (size_t i = 0; i < data.size(); i++)
    {
        result.push_back(data[i] + other.data[i]);
    }

    // Return a brand new Vector made from the result
    return Vector(result);
}

// Prints the vector in readable form.
// Example output: [1, 2, 3]
void Vector::Print() const
{
    std::cout << "[";

    for (size_t i = 0; i < data.size(); i++)
    {
        std::cout << data[i];

        // Add commas between values, but not after the last one
        if (i < data.size() - 1)
        {
            std::cout << ", ";
        }
    }

    std::cout << "]" << std::endl;
}

