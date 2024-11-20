#include <iostream>
#include <vector>

int main() {
	std::vector<int> my_list;
	
	// Append elements: push_back
	my_list.push_back(100);
	
	// Access elements: two ways
	std::cout << my_list[0] << std::endl; // Prints 100
	// my_list[1] = 101; // Undefined behavior

	my_list.at(0) = 102;
	std::cout << my_list.at(0) << std::endl; // Prints 102
	// std::cout << my_list.at(1) << std::endl; // Throws an exception

	my_list.push_back(500);

	// Iterators: An object that represents the location of an element
	// within an STL container (such as a vector)
	my_list.erase(my_list.begin() + 1);

	std::vector<double> my_doubles(5, 3.14);

	for (int i = 0; i < my_list.size(); i++) {
		std::cout << my_list.at(i) << std::endl;
	}

	std::cout << my_list.capacity() << std::endl;

	my_list.reserve(100);

	// 2D vector example:
	//std::vector<std::vector<room>> cave;
	//std::vector<room> row(10);
	//cave.push_back(row);
}
