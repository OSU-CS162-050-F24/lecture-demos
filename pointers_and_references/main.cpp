#include <iostream>

/*
void change_me(int* x) {
	*x = 100;
}
*/

void change_me(int& x) {
	x = 100;
}

/* // DONT DO THIS
bool* create_true() {
	bool my_bool = true;
	return &my_bool;
}
*/

int main() {
	// Char: 1 byte (usually 8 bits)
	int my_int = 5;

	// Memory address: A non-negative whole number that represents the
	// location of a byte in memory
	
	std::cout << &my_int << std::endl; // Prints the memory address of my_int

	int* p = &my_int;

	std::cout << p << std::endl; // Prints the memory address of my_int

	// Dereference operator (aka indirection operator): *
	std::cout << *p << std::endl; // Prints the value of my_int (5)

	change_me(my_int);
	std::cout << my_int << std::endl; // Prints 100

	p = nullptr; // 0
	if (p != nullptr) {
		std::cout << *p << std::endl; // What does this do? Undefined behavior
	}

	// References are basically pointers
	int& ref = my_int;
	ref = 100;

	int x = 3;
	p = &x;
	ref = x; // my_int = x;

	double pi;
	double* p1;
	double** p2 = &p1;
	*p2 = &pi; // What does this do? p1 = &pi;
	// *p1 = 3.14; // What does this do? pi = 3.14;
	**p2 = 3.14;
	std::cout << pi << std::endl;

	/*
	bool* p3 = create_true(); // Dangling pointer. DONT DO THIS
	std::cout << *p3 << std::endl; // Use after free
	*/
}
