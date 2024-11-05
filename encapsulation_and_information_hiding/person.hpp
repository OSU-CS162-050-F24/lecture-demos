#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

// Member variables of a class are "private" by default.
// Member variables of a structure type are "public" by default

// Private members can only be accessed by member functions of the class /
// structure type
class person {
private:
	std::string first_name;
	std::string last_name;
	int age = 0;
public:
	void print() const; // Member function of the person class
	void initialize(std::string first_name, std::string last_name, int age);

	// Accessors and mutators
	// (Getters and setters)
	std::string get_first_name() const;
	void set_first_name(const std::string& first_name);
};

// 2 things we do with person structures:
// 1. Create person structures
// 2. Print person structures

#endif
