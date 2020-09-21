#ifndef WEREWOLFSTATE_H
#define WEREWOLFSTATE_H

#include "State.h"

class WerewolfState : public State {
	public:
		WerewolfState(const std::string& name,  int hp=int(WEREWOLF), int dmg=int(WEREWOLF_DMG));
        virtual ~WerewolfState();

};

#endif // WEREWOLFSTATE_H
