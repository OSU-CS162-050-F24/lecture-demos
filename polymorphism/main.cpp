#include <iostream>

#include "player.hpp"
#include "vampire.hpp"
#include "zombie.hpp"

// The goal: Is to store all monsters in one array. To do their turns,
// we need one for loop.

// Polymorphism (Many forms): You have a variable whose actual type may be one
// of many candidates

void do_turn(monster** monsters, int n_monsters, player& p) {
	for (int i = 0; i < n_monsters; i++) {
		// Binding: When your computer decides what function should
		// be invoked according to a specific function call
		
		// Static binding. Default binding method. This is when, at
		// compile time, the compiler decides what functions should
		// be invoked by which function calls. Static binding happens
		// based on static types.

		// Goal: Replace this static binding with dynamic binding.
		monsters[i]->do_turn(p); // Calls the monster::do_turn() function
	}
}

int main() {
	player p;
	
	// These are hardcoded to simplify the demo, but they could be
	// variable lengths, so we use dynamic arrays
	int n_vampires = 10;
	int n_zombies = 5;
	int n_monsters = n_vampires + n_zombies;
	monster** monsters = new monster*[n_monsters];

	// monsters[0]
	// Static type: monster*
	// Dynamic type: vampire*
	
	for (int i = 0; i < n_vampires; i++) {
		vampire* some_vampire = new vampire;
		monsters[i] = some_vampire; // Upcasting pointers. No slicing
	}
	for (int i = 0; i < n_zombies; i++) {
		zombie* some_zombie = new zombie;
		monsters[i + n_vampires] = some_zombie; // Upcasting pointers.
	}

	while (p.alive()) {
		do_turn(monsters, n_monsters, p);
		p.print();
		std::cout << std::endl;
	}

	monster* copy_of_first_monster = monsters[0]->clone();

	for (int i = 0; i < n_monsters; i++) {
		delete monsters[i]; // Static type: monster*
	}
	delete [] monsters;
}
