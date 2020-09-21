#include "Heal.h"

Heal::Heal(int cost, int magDmg): Spell(cost, magDmg) {};
Heal::~Heal() {};

void Heal::cast(Unit* enemy, SpellCaster *attacker) {
	if (enemy->getState()->berserker || enemy->getState()->isUndead){
	} else if (attacker->getState()->wizard) {
		enemy->addHp(this->getMagDmg()/2);
//		enemy->takeMagDmg(this->getMagDmg()*(-1)/2);
	} else {
		enemy->addHp(this->getMagDmg());
//		enemy->takeMagDmg(this->getMagDmg()*(-1));
	}
	std::cout << "Heal!" << std::endl;
}
