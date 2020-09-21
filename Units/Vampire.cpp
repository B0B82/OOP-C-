#include "Vampire.h"
#include "VampireState.h" // потребовал компилятор.
#include "VampireAttack.h"

Vampire::Vampire(const std::string& name, int hp, int dmg) 
	: Unit( new VampireState(name, hp, dmg), new VampireAttack()) {
	this->uState->vampire = true;
	this->uState->isUndead = true;
};

Vampire::~Vampire() {};

std::ostream& operator<<(std::ostream& out, Vampire& vampire) {
    return out << "Vampire * " << *(vampire.getState()) << " *";
};
