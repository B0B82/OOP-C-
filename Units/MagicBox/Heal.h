#ifndef HEAL
#define HEAL

#include <iostream>
#include "Spell.h"

class Heal : public Spell {
	public:
		Heal(int cost=int(HEAL_NAME), int magDmg=int(HEAL_DMG));
		~Heal();

		virtual void cast(Unit* enemy, SpellCaster* attacker);
//		virtual void cast(Unit* enemy);
};

#endif // HEAL
