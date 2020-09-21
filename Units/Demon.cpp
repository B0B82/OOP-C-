#include "Demon.h"
#include "SoldierState.h" // потребовал компилятор.

Demon::Demon(const std::string& name, int hp, int dmg)
	: Unit( new SoldierState(name, hp, dmg), new BaseAttack()) {
	this->getState()->isUndead = true;
};

Demon::~Demon() {};

Demon* Demon::invokeDemon(const std::string& name) {
	return new Demon(name);
};

std::ostream& operator<<(std::ostream& out, Demon& demon) {
	return out << "Demon * " << *(demon.getState()) << " *";
};
