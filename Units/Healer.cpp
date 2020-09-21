#include "Healer.h"

Healer::Healer(const std::string& name, int hp, int dmg)
	:SpellCaster(new State(name, hp, dmg), new BaseAttack(), new MagicState(int(HEALER_MANA)),
	new MagicAttack(this, new Spell())) {
	this->uState->healer = true;
};

Healer::~Healer() {};

void Healer::changeSpell(SPELL_LIST newSpell) {
	SpellCaster::changeSpell(newSpell);
};

std::ostream& operator<<(std::ostream& out, Healer& Healer) {
	return out << "Healer * " << *(Healer.getState()) << *(Healer.getMagState()) << " *";
};
