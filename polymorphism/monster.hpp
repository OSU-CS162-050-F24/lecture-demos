#ifndef MONSTER_HPP
#define MONSTER_HPP

#include "player.hpp"

// Abstract class
class monster {
protected:
	int hp;
public:
	monster();
	monster(int hp);

	void do_turn(player& p);
};

#endif
