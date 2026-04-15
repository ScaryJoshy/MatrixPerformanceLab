#include "Vector.h"
#include <iostream>

int main()
{
    // Create two vectors
    Vector v1({ 1, 2, 3 });
    Vector v2({ 4, 5, 6 });

    // Show the original vectors
    std::cout << "Vector 1: ";
    v1.Print();

    std::cout << "Vector 2: ";
    v2.Print();

    // Add them together
    Vector sum = v1.Add(v2);

    // Show the result
    std::cout << "Sum: ";
    sum.Print();

    return 0;
}