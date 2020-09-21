#ifndef SPELL_H
#define SPELL_H

#include "schema.h"
#include "Unit.h"
#include "SpellCaster.h"

class SpellCaster;
//class Unit;

class Spell {
	protected:
		int cost;
		int magDmg;

	public:
		Spell();
		Spell(int cost, int magDmg);
		virtual ~Spell();
		virtual void cast(Unit* enemy, SpellCaster* attacker);
//		virtual void cast(Unit* enemy);
		void setCost(int cost);
		void setMagDmg(int magDmg);

		int getCost() const;
		int getMagDmg() const;
};

#endif // SPELL_H
