#include "Vector.h"
#include <iostream>
#include "../include/Matrix.h"

int main()
{ 
     std::cout << "--- Matrix Performance Lab ---" << std::endl;

    std::cout << "\n--- Matrix Test ---" << std::endl;

    Matrix testMatrix(2, 3);
    testMatrix.Print();

    return 0;
}