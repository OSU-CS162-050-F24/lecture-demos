#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

#include "monster.hpp"

class vampire : public monster {
public:
	vampire();

	void do_turn(player& p) override; // Override

	monster* clone() override; // Override
};

#endif
