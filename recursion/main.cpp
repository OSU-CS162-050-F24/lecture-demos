#include <iostream>

// Stack Overflow

// Every function call has a "stack frame". Every time a function call starts,
// its stack frame is pushed on top of the stack. Every time a function call
// ends, its stack frame is popped off the top of the stack.

// Recursion is when a function calls itself
void foo() {
	foo();
}

void print_hello_n_times(int n) {
	// Base cases
	if (n == 0) {
		return;
	}

	// The actual processing
	std::cout << "Hello, World!" << std::endl;

	// The recursive calls
	print_hello_n_times(n - 1);
}

/*
 *
 * Write a function that is given a directory, and it prints
 * all of the files in that directory, AND all of the files in
 * all of the directories in that directory, AND ...
 * 
 * The directory given is named D
 * for each file f in D:
 * 	print f
 *
 * for each directory D2 in D:
 * 	recurse on D2
 *
 */


// 0 1 1 2 3 5 8 13 21 34

int fib(int n) {
	if (n == 1) {
		return 0;
	}
	if (n == 2) {
		return 1;
	}

	return fib(n-1) + fib(n-2);
}

/*
 * print_x(5, 0)
 * 
 *   *   *
 *    * * 
 *     *
 *    * * 
 *   *   *
 * 
 */

void print_x(int height, int padding) {
	// Base case
	if (height == 1) {
		for (int i = 0; i < padding; i++) {
			std::cout << ' ';
		}
		std::cout << '*';
		std::cout << std::endl;
		return;
	}

	// Print top row
	// Print the padding
	for (int i = 0; i < padding; i++) {
		std::cout << ' ';
	}
	std::cout << '*';
	// Print height - 2 spaces
	for (int i = 0; i < height - 2; i++) {
		std::cout << ' ';
	}
	std::cout << '*';
	std::cout << std::endl;

	// Recurse
	print_x(height - 2, padding + 1);
	
	// Print bottom row
	// Print the padding
	for (int i = 0; i < padding; i++) {
		std::cout << ' ';
	}
	std::cout << '*';
	// Print height - 2 spaces
	for (int i = 0; i < height - 2; i++) {
		std::cout << ' ';
	}
	std::cout << '*';
	std::cout << std::endl;
}

void print_x(int height) {
	print_x(height, 0);
}

int main() {
	// print_hello_n_times(10);
	print_x(7);
}
