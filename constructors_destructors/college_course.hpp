#ifndef COLLEGE_COURSE_HPP
#define COLLEGE_COURSE_HPP

#include "student.hpp"
#include "instructor.hpp"

class college_course {
	std::string name = "CS 162"; // Default member initializer
	int n_students;
	student* students;
	instructor the_instructor;
public:
	// Default constructor: A constructor with no parameters
	college_course();

	// Nondefault constructor
	college_course(std::string name, int n_students);

	// Copy constructor
	college_course(const college_course& other);

	college_course& operator=(const college_course& other);

	// Destructor
	~college_course();
};

#endif
