#ifndef DOG_HPP
#define DOG_HPP

#include "pet.hpp"

// Public inheritance. Every member that a pet has, a dog also has.

// Inheritance is used to express "is-a" relationships

// The inheriting class is referred to as the "child" class, or the "derived"
// class, or the "subclass"

// The inherited class is referred to as the "parent" class, or the "base"
// class, or the "superclass"

// Extension is when you add more member variables and / or member functions
// to the derived class
class dog : public pet {
private:
	bool fixed = false;
public:
	dog();
	dog(const std::string& name, int year_born, bool fixed);

	// This is overriding
	void print_info() const;
};

#endif
