#ifndef MAGICSTATE_H
#define MAGICSTATE_H

#include "State.h"

class EmptyManaExeption {};

class MagicState {
	protected:
		int mana;
		int manaMax;
	public:
		MagicState(int mana);
		virtual ~MagicState();

		int getMana() const;
		int getMaxMana() const;

		void addMana(int addmana);
		void spendMana(int spendMana);
};

std::ostream& operator<<(std::ostream& out, MagicState& mState);

#endif // MAGICSTATE_H
