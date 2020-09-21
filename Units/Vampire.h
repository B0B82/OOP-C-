#ifndef  VAMPIRE_H
#define VAMPIRE_H

#include "Unit.h"
#include "schema.h"

class Vampire : public Unit {
	public:
		Vampire(const std::string& name, int hp=int(VAMPIRE), int dmg=int(VAMPIRE_DMG));
        virtual ~Vampire();
};

std::ostream& operator<<(std::ostream& out, Vampire& vampire);

#endif // VAMPIRE_H
