#include "Rogue.h"
#include "RogueAttack.h"
#include "RogueState.h" // потребовал компилятор.

Rogue::Rogue(const std::string& name, int hp, int dmg)
    : Unit( new RogueState(name, hp, dmg), new RogueAttack()) {};

Rogue::~Rogue() {};

std::ostream& operator<<(std::ostream& out, Rogue& rogue) {
    return out << "Rogue * " << *(rogue.getState()) << " *";
};
