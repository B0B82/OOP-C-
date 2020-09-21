#include "RogueAttack.h"

RogueAttack::RogueAttack() {};
RogueAttack::~RogueAttack() {};

void RogueAttack::attack(Unit* enemy, Unit* attacker) {
    enemy->takeDmg(attacker->getState()->getDmg());
};
