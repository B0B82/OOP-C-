#ifndef SOLDIER_H
#define SOLDIER_H

#include "Unit.h"
#include "schema.h"

class Soldier : public Unit {
	public:
		Soldier(const std::string& name, int hp=int(SOLDIER), int dmg=int(SOLDIER_DMG));
        virtual ~Soldier();
};

std::ostream& operator<<(std::ostream& out, Soldier& soldier);

#endif // SOLDIER_H
