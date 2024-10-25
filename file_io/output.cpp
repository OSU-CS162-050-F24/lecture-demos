#include <iostream>
#include <fstream>

int main() {
	std::ofstream file;
	// file.open("hello.txt"); // By default, this opens the file in
	// "truncate mode". Overwrites the existing contents of hello.txt
	
	file.open("hello.txt", std::ofstream::app); // Open in append mode

	// Suppose you want this to go into a file called hello.txt
	file << "Hello, World!";
	file << std::endl;

	// That's called file output

	// File I/O (file input/output)
	file.close(); // This is often optional
}
