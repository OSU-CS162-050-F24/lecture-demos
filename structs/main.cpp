#include <iostream>

// Structure: A variable that stores zero or more other variables inside it
//
// Structure type: A programmer-defined data type representing a kind of
// 	structure

struct baseball {
	std::string signature;
};

struct baseball_player {
	std::string name; // Member variable
	int age = 0; // Default member initializer. 
	double batting_average; // Member variable
	baseball my_baseball; // Nested structure
};

void print_baseball_player(const baseball_player& player) {
	std::cout << player.name << " is age " << player.age <<
		", and their batting average is " << player.batting_average <<
		". Their baseball was signed by " <<
		player.my_baseball.signature << std::endl;
}

int main() {
	// Every baseball player has:
	// Name (std::string)
	// Age (int)
	// Batting average (double)
	baseball_player joe;
	
	std::cout << joe.age << std::endl; // Prints 21

	// Dot operator (member access operator)
	joe.name = "Joe";
	joe.age = 35;
	joe.batting_average = 0.7;
	joe.my_baseball.signature = "Sally";

	std::cout << joe.age << std::endl; // Prints 35

	// What does this do?
	// "Shallow copy"
	baseball_player sally = joe;
	// baseball_player sally;
	// sally.name = joe.name;
	// sally.age = joe.age;
	// sally.batting_average = joe.batting_average;
	// // Shallow copy
	// sally.my_baseball = joe.my_baseball;
	// // sally.my_baseball.signature = joe.my_baseball.signature
	
	sally.age = 31;
	sally.name = "Sally";
	sally.batting_average = 0.71;
	sally.my_baseball.signature = "Joe";
	
	print_baseball_player(sally);

	baseball_player* p = &sally;
	std::cout << (*p).name << std::endl;
	std::cout << p->my_baseball.signature << std::endl;
}
