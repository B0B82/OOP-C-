#ifndef WIZARDSTATE_H
#define WIZARDSTATE_H

#include "State.h"

class WizardState : public State {
	public:
		WizardState(const std::string& name, int hp=int(WIZARD), int dmg=int(WIZARD_DMG));
        virtual ~WizardState();
};

#endif // WIZARDSTATE_H
