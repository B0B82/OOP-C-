#ifndef SPELLCASTER_H
#define SPELLCASTER_H


#include "Unit.h"
#include "MagicAttack.h"
#include "MagicState.h"
#include "SpellBook.h"
#include "schema.h"
#include "Demon.h"

class MagicAttack;
class MagicState;

class SpellCaster: public Unit {
	protected:
		MagicAttack* mAttack;
		MagicState* mState;

	public:
		SpellCaster(State* uState, BaseAttack* uAttack, MagicState* mState, MagicAttack* mAttack);
		virtual~SpellCaster();

		virtual void cast(Unit* enemy);
		void changeSpell(SPELL_LIST newSpell);

		int getMana() const;
		int getMaxMana() const;

		int getMagDmg() const;

		void addMana(int addmana);
		void spendMana(int spendMana);

		MagicState* getMagState();
};

std::ostream& operator<<(std::ostream& out, SpellCaster& spellCaster);

#endif // SPELLCASTER_H
