#include <iostream>

#include "dog.hpp"


dog::dog() {
	std::cout << "Dog default ctor" << std::endl;
}

dog::dog(const std::string& name, int year_born, bool fixed) :
		pet(name, "Dog", year_born),
		fixed(fixed) {
	std::cout << "Dog nondefault ctor" << std::endl;
}

void dog::print_info() const {
	this->pet::print_info();
	
	std::cout << "Fixed?: ";
	if (this->fixed) {
		std::cout << "Yes!";
	} else {
		std::cout << "No!";
	}

	std::cout << std::endl;
}
