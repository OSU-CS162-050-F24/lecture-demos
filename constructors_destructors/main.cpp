#include "student.hpp"
#include "college_course.hpp"

void foo(college_course c) {
	
}

int main() {
	// college_course c1("CS 261", 120);

	// This declares c2
	// It also declares c2.the_instructor
	// college_course c2;

	// When you create an array of N objects, the
	// default constructor of that class will be
	// called N times (once per object). You NEED
	// a default constructor in order to create an
	// array of your objects
	// college_course courses[100];
	
	// college_course c3("CS 374", 110);
	// courses[0] = c3;

	// When an array of size N is freed from memory, 
	// the class's destructor is called N times


	college_course c1("CS 162", 125);

	// This is legal.
	// This calls the "copy constructor" of the college_course class
	college_course c2 = c1;

	foo(c2); // Also calls the college_course copy constructor

	// The big three:
	// 1. Destructors
	// 2. Copy constructors
	// 3. Copy assignment operator overloads (AOOs)
	
	college_course c3("CS 374", 250);

	// Calls the AOO and performs a shallow copy by default.
	c3 = c2;

	c1 = c2 = c3;
}
