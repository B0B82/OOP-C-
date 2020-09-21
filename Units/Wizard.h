#ifndef  WIZARD_H
#define WIZARD_H

#include "SpellCaster.h"
#include "schema.h"

class Wizard : public SpellCaster{
	public:
		Wizard(const std::string& name, int hp = int(WIZARD), int dmg = int(WIZARD_DMG));
		virtual ~Wizard();

		void changeSpell(SPELL_LIST newSpell);
};

std::ostream& operator<<(std::ostream& out, Wizard& wizard);

#endif // WIZARD_H
