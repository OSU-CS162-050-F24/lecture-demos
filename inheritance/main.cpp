#include <iostream>

#include "pet.hpp"
#include "dog.hpp"

int main() {
	pet p("Tad Cooper", "Dragon", 1472);
	p.print_info();

	std::cout << std::endl;

	dog d("Jeff", 2018, true);
	d.pet::print_info();

	std::cout << std::endl;

	// This is referred to as upcasting
	// Object slicing is when an object loses its derived-class information
	// during upcasting.
	pet p2 = d; // Upcasting
	p2.print_info();
	
	std::cout << std::endl;

	d.print_info();
}
