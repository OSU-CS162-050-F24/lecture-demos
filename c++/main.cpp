#include <iostream>
#include <string>

// Entry point: It's where the program starts
int main() {
	// Stream insertion operator: <<
	std::cout << "Hello, World!" << std::endl;

	// Call other functions here

	// Primitive types:
	// int: Integer (whole number). 1, 12, -1000000
	// float: Floating point number. 1.0f, 3f
	// double: Double-precision floating point number. 1.0, -3.14
	// bool: Boolean (true/false). true, false
	// char: Character (digit, letter, symbol). 'a', '@'
	
	int x = 3 + 7 * 2;

	std::cout << x << std::endl; // Prints: 3

	// Arithmetic operators:
	// +
	// -
	// *
	// /
	// % (modulo): Remainder after division

	std::cout << (999.0 / 1000) << std::endl; // 0.999

	std::cout << "What is your favorite character?: ";
	char favorite_character;
	std::cin >> favorite_character;

	std::cout << favorite_character << std::endl;

	if (!(favorite_character == '&' || favorite_character == 'a')) {
		// some code
	} else if (favorite_character == '@') {
		// Some other code
	} else {
		// Some catch-all code
	}

	// Scope: A pair of curly braces
	// Dictate where a variable is accessible, and when a variable
	// is freed from memory
	
	// While loops
	// Do-while loops
	// For loops
	
	int counter = 0;
	while (counter < 5 && counter > 0) {
		// Some code
		counter = 1000000;
		std::cout << "Hello, World!" << std::endl;
		counter = counter + 1;
	}

	int user_input;
	do {
		std::cout << "Enter an integer between 1 and 5: ";
		std::cin >> user_input;
	} while(user_input < 1 || user_input > 5);

	for (int i = 0; i < 10; ++i) {
		// Some code
		std::cout << i << std::endl;
	}

	


}
