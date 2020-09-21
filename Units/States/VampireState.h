#ifndef VAMPIRESTATE_H
#define VAMPIRESTATE_H

#include "State.h"

class VampireState : public State {
	public:
		VampireState(const std::string& name,  int hp=int(VAMPIRE), int dmg=int(VAMPIRE_DMG));
        virtual ~VampireState();
};

#endif // VAMPIRESTATE_H
