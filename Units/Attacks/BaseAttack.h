#ifndef BASEATTACK_H
#define BASEATTACK_H

#include "Unit.h"

class Unit;

class BaseAttack {
    public:
        BaseAttack();
        virtual ~BaseAttack();

		virtual void attack(Unit* enemy, Unit* attacker);
		virtual void counterAttack(Unit* enemy, Unit* attacker);
		virtual void bite(Unit* enemy, Unit* attacker);
};



#endif // BASEATTACK_H
