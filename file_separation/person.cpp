#include <iostream>

#include "person.hpp"
#include "hello.hpp"

void print_person(const person& p) {
	std::cout << p.name << std::endl;
	say_hello();
}
