#ifndef BERSERKERSTATE_H
#define BERSERKERSTATE_H

#include "State.h"
#include "schema.h"

class BerserkerState : public State {
	public:
		BerserkerState(const std::string& name,  int hp=int(SOLDIER), int dmg=int(SOLDIER_DMG));
        virtual ~BerserkerState();
};

#endif // BERSERKERSTATE_H
