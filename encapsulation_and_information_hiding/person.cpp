#include <iostream>

#include "person.hpp"

void person::print() const {
	// this is a pointer to the object on which the function is being called
	std::cout << this->first_name << " " << this->last_name << ", age " << this->age;
}

void person::initialize(std::string first_name, std::string last_name, int age) {
	this->first_name = first_name;
	this->last_name = last_name;
	this->age = age;
}

std::string person::get_first_name() const {
	return this->first_name;
}

void person::set_first_name(const std::string& first_name) {
	this->first_name = first_name;
}
