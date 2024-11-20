#include <iostream>

#include "array.hpp"

template<typename Type>
Type add_numbers(Type a, Type b) {
	return a + b;
}

int main() {
	// Template instantiation happens at COMPILE TIME,
	// so template arguments must be COMPILE TIME CONSTANTS
	array<10, bool> my_array; // Template instantiation
	array<10, bool> my_array3; // Template instantiation
	array<11, bool> my_array2; // Template instantiation

	my_array.at(0) = true;
	my_array.at(1) = false;

	std::cout << my_array.at(1) << std::endl; // Prints 0

	std::cout << add_numbers(3.14, 9.81) << std::endl;
	std::cout << add_numbers(3, 8) / 12 << std::endl; // Prints 0
}
