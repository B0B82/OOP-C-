#ifndef SPELLBOOK_H
#define SPELLBOOK_H

//#include "schema.h"
#include "Spell.h"
#include <map>
#include "SpellCaster.h"


class Spell;

class SpellBook {
	private:
		std::map<SPELL_LIST, Spell&>magBook;// = new std::map<BOOK, Spell*>();
//		void find(int id);
//		Spell* rez = new Fireball();
	public:
		SpellBook();
		~SpellBook();

		Spell& changeSpell(SPELL_LIST newSpell);
//		const std::map<int, Spell*>& getSpellBook() const;
};

#endif // SPELLBOOK_H
