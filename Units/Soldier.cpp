#include "Soldier.h"
//#include "Werewolf.h"
//#include "WerewolfAttack.h"
//#include "WerewolfState.h"
#include "SoldierState.h" // потребовал компилятор.

Soldier::Soldier(const std::string& name, int hp, int dmg) 
    : Unit( new SoldierState(name, hp, dmg), new BaseAttack()) {};

Soldier::~Soldier() {};

std::ostream& operator<<(std::ostream& out, Soldier& soldier) {
    return out << "Soldier * " << *(soldier.getState()) << " *";
};
