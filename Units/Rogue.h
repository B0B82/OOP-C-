#ifndef ROGUE_H
#define ROGUE_H

#include "Unit.h"
#include "schema.h"

class Rogue : public Unit {
	public:
		Rogue(const std::string& name, int hp=int(ROGUE), int dmg=int(ROGUE_DMG));
        virtual~Rogue();
};

std::ostream& operator<<(std::ostream& out, Rogue& rogue);

#endif // ROGUE_H
