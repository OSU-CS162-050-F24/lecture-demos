#include <iostream>

int* create_array() {
	int* array = new int[100];
	return array;
}

int main() {
	// Every variable we've created has gone on the "stack"
	// Stack: Special place in memory to store data with
	// 	automatic storage duration
	//
	// Stack is "LIFO": "Last-in, first-out"

	// "Statically allocated arrays". aka "arrays"
	// Arrays with "automatic storage duration"
	int size = 10;
	double* p = new double[size] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	std::cout << p[9] << std::endl;

	// There's a bunch of code here

	// The stack: Statically allocated
	// The heap: Dynamically allocated. Allocated with the new keyword

	int favorite_number;
	std::cout << "What is your favorite number?: ";
	std::cin >> favorite_number;
	if (favorite_number == 5) {
		double* temp = new double[size + 1];
		for (int i = 0; i < 10; i++) {
			temp[i] = p[i];
		}
		temp[10] = 5;
		delete [] p;
		p = temp;
		size = size + 1;
	}

	// There's a bunch of code here
	std::cout << p[10] << std::endl;

	// Rules for freeing dynamic memory:
	// 1. You must do it. Failure = memory leak.
	// 	Memory debugging tool: valgrind
	// 2. You must not do it before you're done with it
	// 3. Don't do it more than once
	delete [] p;
}
