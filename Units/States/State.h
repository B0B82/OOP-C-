#ifndef STATE_H
#define STATE_H

#include <iostream>
#include "schema.h"

class UnitIsDeadExeption;

class State {
		private:
        std::string* name;
        int hp;
        int hpMax;
        int dmg;
        
        bool transformed;

//		void takeMagDmg_(int mDmg);

    public:
        State(const std::string& name, int hp, int dmg);
//		State(const std::string& name);
        virtual~State();
		void IsAlive();

		bool isUndead;
		bool isDead;
		bool mutating;

		bool wolf, berserker, vampire, werewolf, wizard, healer, priest, warlock, necromancer;


        void takeDmg(int dmg);
//		void takeMagDmg(int Dmg);
        void addHp(int hp); //new

        void setDmg(int dmg);
        void setHp(int hp);
        void setHpMax(int hpMax);
        void setTransformed(bool transformed);


        int getDmg() const;
        int getHp() const;
        int getHpMax() const;


		bool isTransformed();

        std::string* getName() const;
};

std::ostream& operator<<(std::ostream& out, State& state);

#endif // STATE_H
