#ifndef NECROMANCER_H
#define NECROMANCER_H
#include "SpellCaster.h"
#include "schema.h"

class Necromancer : public SpellCaster{
	public:
		Necromancer(const std::string& name, int hp = int(NECROMANCER), int dmg = int(NECROMANCER_DMG));
		virtual ~Necromancer();

		void changeSpell(SPELL_LIST newSpell);
		virtual void attack(Unit* enemy);
//		void keepTrackOf();
};

std::ostream& operator<<(std::ostream& out, Necromancer& necromancer);

#endif // NECROMANCER_H
