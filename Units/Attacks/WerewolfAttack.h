#ifndef WEREWOLFATTACK_H
#define WEREWOLFATTACK_H

#include "BaseAttack.h"

class WerewolfAttack : public BaseAttack {
    public:
        WerewolfAttack();
        virtual ~WerewolfAttack();

        virtual void attack(Unit* enemy, Unit* attacker);
		virtual void counterAttack(Unit* enemy, Unit* attacker);
		virtual void bite(Unit* enemy, Unit* attacker);
};

#endif // WEREWOLFATTACK_H
