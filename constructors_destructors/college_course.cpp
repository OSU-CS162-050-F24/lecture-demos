#include <iostream>

#include "college_course.hpp"


college_course::college_course() :
		name("CS 162"),
		students(nullptr),
		n_students(0) {
	// std::cout << "College course constructor" << std::endl;
}

college_course::college_course(std::string name, int n_students) :
		name(name),
		n_students(n_students),
		students(new student[n_students]) {
}

college_course::college_course(const college_course& other) {
	this->name = other.name;
	this->n_students = other.n_students;
	this->students = new student[this->n_students];
	for (int i = 0; i < this->n_students; i++) {
		this->students[i] = other.students[i];
	}
	this->the_instructor = other.the_instructor;
	std::cout << "Copy constructor" << std::endl;
}

college_course& college_course::operator=(const college_course& other) {
	if (this == &other) {
		return *this;
	}

	this->name = other.name;
	this->n_students = other.n_students;

	if (this->students != null) {
		delete [] this->students;
	}
	this->students = new student[this->n_students];
	for (int i = 0; i < this->n_students; i++) {
		this->students[i] = other.students[i];
	}
	this->the_instructor = other.the_instructor;

	return *this;
}

college_course::~college_course() {
	if (this->students != nullptr) {
		delete [] this->students;
		this->students = nullptr;
	}
}
