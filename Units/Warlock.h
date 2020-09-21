#ifndef WARLOCK_H
#define WARLOCK_H

#include "SpellCaster.h"
#include "schema.h"
#include "Demon.h"
//#include "WarlockMagAttack.h"

class Warlock : public SpellCaster{
	public:
		Warlock(const std::string& name, int hp = int(WARLOCK), int dmg = int(WARLOCK_DMG));
		virtual ~Warlock();

		Demon* invokeDemon(const std::string& name);
};

std::ostream& operator<<(std::ostream& out, Warlock& warlock);
#endif // WARLOCK_H
