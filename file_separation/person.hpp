#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

// Structure type definition.
struct person {
	std::string name;
};


void print_person(const person& p);

#endif
