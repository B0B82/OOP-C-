//имеет имунитет к атаке магии
#include "Berserker.h"
#include "BerserkerState.h" // потребовал компилятор.
#include "Unit.h"
#include "WerewolfState.h"

Berserker::Berserker(const std::string& name, int hp, int dmg) 
	: Unit( new BerserkerState(name, hp, dmg), new BaseAttack()) {
	this->uState->berserker = true;
};

Berserker::~Berserker() {};

std::ostream& operator<<(std::ostream& out, Berserker& berserker) {
    return out << "Berserker * " << *(berserker.getState()) << " *";
};
