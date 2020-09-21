#include "Werewolf.h"
#include "WerewolfState.h" // потребовал компилятор.
#include "WerewolfAttack.h"

#define DIF 2

Werewolf::Werewolf(const std::string& name, int hp, int dmg)
	: Unit( new WerewolfState(name, hp, dmg), new WerewolfAttack()) {
	this->uState->werewolf = true;
};

Werewolf::~Werewolf() {};

void Werewolf::transformW_H() {
	if (!getState()->wolf) {
		std::cout << *getState()->getName() << " - TransformedToWolf: \n";

		getState()->setHpMax(getState()->getHpMax()*DIF);
		getState()->setHp(getState()->getHp()*DIF);
		getState()->setDmg(getState()->getDmg()*DIF);
		this->uState->wolf = true;
	} else {
		std::cout << *getState()->getName() << " - TransformedToHuman: \n";

		getState()->setHpMax(getState()->getHpMax()/DIF);
		getState()->setHp(getState()->getHp()/DIF);
		getState()->setDmg(getState()->getDmg()/DIF);
		this->uState->wolf = false;
	}
}


std::ostream& operator<<(std::ostream& out, Werewolf& werewolf) {
    return out << "Werewolf * " << *(werewolf.getState()) << " *";
};
