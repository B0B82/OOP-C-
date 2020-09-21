#ifndef BERSERKER_H
#define BERSERKER_H

//имеет имунитет к атаке магии
#include "Unit.h"
#include "schema.h"

class Berserker : public Unit {
    public:
		Berserker(const std::string& name, int hp=int(BERSERKER), int dmg=int(BERSERKER_DMG));
        virtual ~Berserker();
};

std::ostream& operator<<(std::ostream& out, Berserker& berserker);


#endif // BERSERKER_H
