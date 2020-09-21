#ifndef SOLDIERSTATE_H
#define SOLDIERSTATE_H

#include "State.h"

class SoldierState : public State {
	public:
		SoldierState(const std::string& name,  int hp=int(SOLDIER), int dmg=int(SOLDIER_DMG));
        virtual ~SoldierState();
};

#endif // SOLDIERSTATE_H
