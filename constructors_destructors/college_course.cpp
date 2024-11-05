#include <iostream>

#include "college_course.hpp"

college_course::college_course() :
		name("CS 162"),
		students(new student[10]) {
	this->n_students = 0;
	std::cout << this->name << std::endl;
	std::cout << "Hello, World!" << std::endl;
}

college_course::college_course(std::string name, int n_students) :
		name(name),
		n_students(n_students),
		students(new student[n_students]) {
}
