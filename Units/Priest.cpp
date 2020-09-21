#include "Priest.h"

Priest::Priest(const std::string& name, int hp, int dmg)
	:SpellCaster(new State(name, hp, dmg), new BaseAttack(), new MagicState(int(PRIEST_MANA)),
	new MagicAttack(this, new Spell())) {
	this->uState->priest = true;
};

Priest::~Priest() {};

void Priest::changeSpell(SPELL_LIST newSpell) {
	SpellCaster::changeSpell(newSpell);
};

std::ostream& operator<<(std::ostream& out, Priest& priest) {
	return out << "Priest * " << *(priest.getState()) << *(priest.getMagState()) << " *";
};
