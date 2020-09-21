#include "Unit.h"
#include "schema.h"
//#include "WerewolfState.h"


int Unit::Count = 0;
Unit::Unit() {};
Unit::Unit(State* state, BaseAttack* attack) { //передаваемые параметры статов и атаки
    this->uState = state;
    this->uAttack = attack;

    Count++;
    id = Count;
};

Unit::~Unit() {
    delete(this->uState);
    delete(this->uAttack);
};

int Unit::getCount() {
    return Count;
};

int Unit::getId() {
    return id;
};

void Unit::IsAlive() {
	if (this->uState->getHp() <= 0) {

		this->notify();
	}
	this->uState->IsAlive();
};

void Unit::attack(Unit* enemy) {
	this->uState->IsAlive();
	this->uAttack->attack(enemy, this);
//    std::cout << *(this->getState()->getName()) << " >> " << *(enemy->getState()->getName())  << " : Attack(in-process)\n"; // кто атакует.
};

void Unit::counterAttack(Unit* enemy) {
	this->uState->IsAlive();

    this->uAttack->counterAttack(enemy, this);
    std::cout << *(this->getState()->getName()) << " >> " << *(enemy->getState()->getName()) << " : CounterAttack(in-process)\n"; // кто атакует.
};

void Unit::takeDmg(int dmg) {
    this->uState->takeDmg(dmg);
};

//void Unit::takeMagDmg(int mDmg) {
//	this->uState->takeMagDmg(mDmg);
//};

void Unit::addHp(int hp) {
	this->uState->IsAlive();
    this->uState->addHp(hp);
};

void Unit::bite(Unit* enemy) {
	this->uState->IsAlive();
	if (enemy->uState->mutating == false) {
		this->uAttack->bite(enemy, this);
		enemy->uState->mutating = true;
	}
};

//void Unit::isMutating() {
//	if (this->uState->mutating)
//};

void Unit::transform() {};




State* Unit::getState() {
    return this->uState;
};

BaseAttack* Unit::getAttack() {
	return this->uAttack;
};

void* Unit::setState(State *state) {
	this->uState = state;
};

void* Unit::setAttack(BaseAttack *attack) {
	this->uAttack = attack;
};

std::ostream& operator<<(std::ostream& out, Unit& unit) {
    out << "/ " <<  *(unit.getState()) << " /";
    return out;
};
