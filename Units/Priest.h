#ifndef PRIEST_H
#define PRIEST_H
#include "schema.h"
#include "SpellCaster.h"

class Priest : public SpellCaster{
	public:
		Priest(const std::string& name, int hp = int(PRIEST), int dmg = int(PRIEST_DMG));
		virtual ~Priest();

		void changeSpell(SPELL_LIST newSpell);
};

std::ostream& operator<<(std::ostream& out, Priest& Priest);
#endif // PRIEST_H
