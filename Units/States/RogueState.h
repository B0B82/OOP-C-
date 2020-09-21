#ifndef ROGUESTATE_H
#define ROGUESTATE_H

#include "State.h"

class RogueState : public State {
	public:
		RogueState(const std::string& name, int hp=int(ROGUE), int dmg=int(ROGUE_DMG));
        virtual ~RogueState();
};

#endif // ROGUESTATE_H
