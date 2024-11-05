#include <iostream>

#include "person.hpp"
#include "directory.hpp"
#include "friend_list.hpp"

int main() {
	person john;
	john.initialize("John", "Legend", 27);
	person aditya;
	aditya.initialize("Aditya", "Prakash", 24);
	person muhammad;
	muhammad.initialize("Muhammad", "Ali", 23);

	// john.first_name = "Joe";
	john.set_first_name("Joe");

	std::cout << john.get_first_name() << std::endl;

	// John is friends with aditya and muhammad
	friend_list list = create_friend_list(john, 2);
	list.friends[0] = aditya;
	list.friends[1] = muhammad;

	print_friend_list(list);

	std::cout << std::endl;

	// Everyone is in the directory
	directory dir = create_directory(3);
	dir.people[0] = john;
	dir.people[1] = aditya;
	dir.people[2] = muhammad;

	print_directory(dir);

	// Clean up dynamic memory
	delete_directory(dir);
	delete_friend_list(list);


}
