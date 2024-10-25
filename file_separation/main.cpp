#include <iostream>
#include <string>

#include "person.hpp"
#include "hello.hpp"

// 1. In each .cpp file, every function that is "used"
// 	must be declared in that exact .cpp file at least once BEFORE
// 	its first use
// 2. Across ALL .cpp files in the entire program,
// 	each function that is used must be defined EXACTLY
// 	once
// 3. In each .cpp file, every structure type that is "used"
// 	must be DEFINED exactly once in that exact .cpp file BEFORE its
// 	first use.

int main() {
	say_hello();

	person p;
	p.name = "Alex";

	print_person(p);
}
