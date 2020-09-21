#ifndef HEALER_H
#define HEALER_H

#include "schema.h"
#include "SpellCaster.h"


class Healer : public SpellCaster{
	public:
		Healer(const std::string& name, int hp = int(HEALER), int dmg = int(HEALER_DMG));
		virtual ~Healer();

		void changeSpell(SPELL_LIST newSpell);
};

std::ostream& operator<<(std::ostream& out, Healer& healer);
#endif // HEALER_H
