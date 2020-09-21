#include <iostream>
#include "State.h"

class UnitIsDeadExeption {};

void State::IsAlive() {
	if (this->hp <= 0) {
		this->hp = 0;
		throw UnitIsDeadExeption();
	}
};

State::State(const std::string& name, int hp, int dmg) {
    this->name = new std::string(name);
    this->hp = hp;
    this->hpMax = hp;
    this->dmg = dmg;
    this->transformed = false;
};

//State::State(const std::string& name) {
//	this->name = new std::string(name);
//};


State::~State() {
    delete(this->name);
};

void State::takeDmg(int dmg) {
	this->IsAlive();
	this->hp -= dmg;

	if ( this->hp < 0 ) {
		this->hp = 0;
	};
};

//void State::takeMagDmg(int Dmg) {
//	this->hp -= Dmg;

//	if ( this->hp < 0 ) {
//		this->hp = 0;
//	};
//};

//void State::takeMagDmg(int mDmg) {
//	this->takeMagDmg_(mDmg);
//}


void State::addHp(int hp) {
	this->IsAlive();
    if (this->hp + hp > this->hpMax ) {
        this->hp = this->hpMax;
    } else {
        this->hp += hp;
    }
};

void State::setDmg(int dmg) {
    this->dmg = dmg;
};

void State::setHp(int hp) {
    this->hp = hp;
};

void State::setHpMax(int hpMax)   {
    this->hpMax = hpMax;
};

void State::setTransformed(bool transformed) {
    this->transformed = transformed;
}

int State::getDmg() const {
    return this->dmg;
};

int State::getHp() const  {
    return this->hp;
};

int State::getHpMax() const   {
    return this->hpMax;
};

//bool State::isMutable() {

//};

bool State::isTransformed() {
    return transformed;
};

std::string* State::getName() const   {
    return this->name;
};

std::ostream& operator<<(std::ostream& out, State& state) {
    return out << " / " <<  *state.getName() << " - " << state.getHpMax() << ":" << state.getHp() << " <> " << state.getDmg() << " /";
};
