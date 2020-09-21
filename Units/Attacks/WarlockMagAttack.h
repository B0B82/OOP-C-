#ifndef WARLOCKMAGATTACK_H
#define WARLOCKMAGATTACK_H

#include "MagicAttack.h"
#include "Demon.h"

class MagicAttack;

class WarlockMagAttack : public MagicAttack {
	public:
		WarlockMagAttack(SpellCaster* spellCaster, Spell* spell);
		virtual ~WarlockMagAttack();

};
#endif // WARLOCKMAGATTACK_H
