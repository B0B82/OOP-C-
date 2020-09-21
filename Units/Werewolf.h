#ifndef  WEREWOLF_H
#define WEREWOLF_H

#include "Unit.h"
#include "schema.h"

class Werewolf : public Unit {
	public:
		Werewolf(const std::string& name, int hp=int(WEREWOLF), int dmg=int(WEREWOLF_DMG));
        virtual ~Werewolf();

		virtual void transformW_H();
};

std::ostream& operator<<(std::ostream& out, Werewolf& werewolf);

#endif // WEREWOLF_H
