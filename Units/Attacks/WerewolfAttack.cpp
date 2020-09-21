#include "WerewolfAttack.h"
#include "Werewolf.h"
//#include "Unit.h"
#include "State.h"
#include "MagicState.h"


WerewolfAttack::WerewolfAttack() {};
WerewolfAttack::~WerewolfAttack() {};

void WerewolfAttack::attack(Unit* enemy, Unit* attacker) {
    enemy->takeDmg(attacker->getState()->getDmg());
    enemy->counterAttack(attacker);
};

void WerewolfAttack::counterAttack(Unit* enemy, Unit* attacker) {
    enemy->takeDmg(attacker->getState()->getDmg() / 2);
};

void WerewolfAttack::bite(Unit* enemy, Unit* attacker) {
	if (!enemy->getState()->mutating && !enemy->getState()->vampire) {
		delete(enemy->getState());
		delete(enemy->getAttack());
		enemy->setState(new WerewolfState("InfectedByWerewolf", int(WEREWOLF), int(WEREWOLF_DMG)));
		enemy->setAttack(new WerewolfAttack());
		std::cout << "Werewolf Bite!!!!\n";
	}
};
