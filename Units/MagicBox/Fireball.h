#ifndef FIREBALL
#define FIREBALL

#include "Spell.h"
#include "SpellCaster.h"

class SpellCaster;


class Fireball : public Spell {
	public:
		Fireball(int cost, int magDmg);
		virtual ~Fireball();

		void cast(Unit* enemy, SpellCaster* attacker);
//		virtual void cast(Unit* enemy);
};

#endif // FIREBALL
