#ifndef VAMPIREATTACK_H
#define VAMPIREATTACK_H

#include "BaseAttack.h"

class VampireAttack : public BaseAttack {
    public:
        VampireAttack();
        virtual ~VampireAttack();

        virtual void attack(Unit* enemy, Unit* attacker);
		virtual void counterAttack(Unit* enemy, Unit* attacker);
		virtual void bite(Unit* enemy, Unit* attacker);
};

#endif // VAMPIREATTACK_H
