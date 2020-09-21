#ifndef MAGICATTACK_H
#define MAGICATTACK_H

#include "Spell.h"
#include "SpellBook.h"
#include "SpellCaster.h"
#include "BaseAttack.h"
#include "schema.h"

class SpellCaster;
class Spell;
class SpellBook;
class MagicAttack {
		private:
		SpellCaster* spellCaster;
		Spell* spell;
		SpellBook* spellBook;
	public:
		MagicAttack(SpellCaster* spellCaster, Spell* spell);
		virtual ~MagicAttack();
		void changeSpell(SPELL_LIST newSpell);
		void cast(Unit* enemy, SpellCaster* attacker);
		int getMagDmg();
};

#endif // MAGICATTACK_H
