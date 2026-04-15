#pragma once
#include <vector>

// this class represents a mathmatical vector.
// For now, is stores a list of numbers like [1,2,3].
class Vector
{
private:
	// The actual #'s inside the vector.
	std::vector<double> data;

public:
	// Constructor:
	// builds a Vector object from a std:vector<double>.
	Vector(const std::vector<double>& values);

	// Adds this vector to another vector and returns the result.
	Vector Add(const Vector& other) const;

	// Prints the vector nicely to the console.
	void Print() const;
};