#include <iostream>
#include <fstream>

int main() {
	std::ifstream file;
	file.open("data.txt");

	if (!file.is_open()) {
		std::cout << "Failed to open data.txt!" << std::endl;
		// file.clear(); // Resets internal fail bit to false
	} else {
		// Stream extraction operator: >>
		// 0. Skips leading whitespace
		// 1. Starts reading characters from the given input stream
		// 2. It reads as many as it can, until it encounters an
		// 	"invalid" character for the given type
		// 3. Converts all of the characters that it has read
		// 	into the appropriate type
		// 4. Leaves the rest of the characters in the stream
		std::string name;
		file >> name;

		int age;
		file >> age;

		double pi;
		file >> pi;

		std::cout << name << std::endl;
		std::cout << age << std::endl;
		std::cout << pi << std::endl;
	}
}
