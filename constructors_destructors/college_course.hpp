#ifndef COLLEGE_COURSE_HPP
#define COLLEGE_COURSE_HPP

#include "student.hpp"

class college_course {
	std::string name = "CS 162"; // Default member initializer
	int n_students;
	student* students;
public:
	// Default constructor: A constructor with no parameters
	college_course();

	// Nondefault constructor
	college_course(std::string name, int n_students);
};

#endif
