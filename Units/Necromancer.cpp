#include "Necromancer.h"

Necromancer::Necromancer(const std::string& name, int hp, int dmg)
	:SpellCaster(new State(name, hp, dmg), new BaseAttack(), new MagicState(int(NECROMANCER_MANA)),
	new MagicAttack(this, new Spell())) {
	this->uState->necromancer = true;
};

Necromancer::~Necromancer() {};

void Necromancer::changeSpell(SPELL_LIST newSpell) {
	SpellCaster::changeSpell(newSpell);
};

void Necromancer::attack(Unit* enemy) {
	Unit::attack(enemy);
	enemy->addObservable(this);
};

//void Necromancer::keepTrackOf() {
//	addObserver(this);
//};

std::ostream& operator<<(std::ostream& out, Necromancer& necromancer) {
	return out << "Necromancer * " << *(necromancer.getState()) << *(necromancer.getMagState()) << " *";
};
