#include <iostream>

// Function declaration. Function prototype.
double add(double x1, double x2);

void print_hello() {
	// Some code
	std::cout << "Hello" << std::endl;
	return;
}

bool change_me(bool value[]) {
	value[0] = false;
}

int main() {
	print_hello();

	double sum = add(31.4, 22.1);
	std::cout << add(31.4, 22.1) << std::endl;

	// Arrays are homogeneous lists of a fixed size
	// Homogeneous: Same type
	
	// The size of the array MUST be a compile-time constant integer
	bool trues_and_falses[12];
	for (int i = 0; i < 12; i++) {
		trues_and_falses[i] = true;
	}

	std::cout << trues_and_falses << std::endl; // Prints base address

	// Memory address: A number that represents the location of a byte of
	// memory
	
	// Base address: The address of the first byte of an array
	
	change_me(trues_and_falses);
	std::cout << trues_and_falses[0] << std::endl; // 

	
}

// Function definition
double add(double x1, double x2) {
	// Some code
	return x1 + x2;
}
