#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <iostream>
#include <set>
#include "Observer.h"

class Observer;

class Observable {
	private:
		std::set<Observer*>* observers;
		const char* name;
	public:
		Observable(const char* name="Observable");
		~Observable();

		const char* getName();
		void reportObservers();
		void receiveNotification(Observer* observer);

		void addObserver(Observer* observer);
		void removeObserver(Observer* observer);
};

#endif // OBSERVABLE_H
