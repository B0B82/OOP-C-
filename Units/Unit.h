#ifndef UNIT_H
#define UNIT_H

#include <iostream>
//#include "memory.h" // подключение std::shared_ptr
#include "BaseAttack.h"
#include "State.h"
#include "WerewolfState.h"
#include "Observable.h"
#include "Observer.h"

class IsDead {};
class CanNotTransformException {};

class BaseAttack;

class Unit : public Observable, public Observer {
	protected:
		State* uState;
        BaseAttack* uAttack;

        static int Count;
        int id;

	public:
		Unit();
        Unit(State* state, BaseAttack* attack);
        
        virtual~Unit();
        static int getCount();
        int getId();
		void IsAlive();
		void attack(Unit* enemy);
        void counterAttack(Unit* enemy);
		void takeDmg(int dmg);
        void addHp(int hp);
		void bite(Unit* enemy);
		virtual void transform();
		State* getState();
		BaseAttack* getAttack();
		void* setState(State *state);
		void* setAttack(BaseAttack *attack);
};

std::ostream& operator<<(std::ostream& out, Unit& unit);

#endif // UNIT_H
