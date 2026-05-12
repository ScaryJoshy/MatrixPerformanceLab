#include "Vector.h"
#include <iostream>
#include "../include/Matrix.h"

int main()
{ 
     std::cout << "--- Matrix Performance Lab ---" << std::endl;

    std::cout << "\n--- Matrix Test ---" << std::endl;

    Matrix testMatrix(2, 3);

testMatrix.SetValue(0, 0, 1.5);
testMatrix.SetValue(0, 1, 2.5);
testMatrix.SetValue(0, 2, 3.5);
testMatrix.SetValue(1, 0, 4.5);
testMatrix.SetValue(1, 1, 5.5);
testMatrix.SetValue(1, 2, 6.5);

testMatrix.Print();

    return 0;
}