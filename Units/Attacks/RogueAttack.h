#ifndef ROGUEATTACK_H
#define ROGUEATTACK_H

#include "BaseAttack.h"

class RogueAttack : public BaseAttack {
    public:
        RogueAttack();
        virtual ~RogueAttack();

        virtual void attack(Unit* enemy, Unit* attacker);
};

#endif // ROGUEATTACK_H
