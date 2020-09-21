#include "Observer.h"

Observer::Observer(const char* name) : name(name) {
	this->observables = new std::set<Observable*>();
}

Observer::~Observer() {
	std::set<Observable*>::iterator it = this->observables->begin();

	for (; it != this->observables->end(); it++ ) {
		(*it)->removeObserver(this);
	}
	delete(this->observables);
}

const char* Observer::getName() {
	return this->name;
}

void Observer::reportObservables() {
	std::set<Observable*>::iterator it = this->observables->begin();

	std::cout << this->name << " observables:" << std::endl;
	for (; it != this->observables->end(); it++ ) {
		std::cout << "-- " << (*it)->getName() << std::endl;
	}
}
void Observer::notify() {
	std::set<Observable*>::iterator it = this->observables->begin();

	for (; it != this->observables->end(); it++ ) {
		(*it)->receiveNotification(this);
	}
}

void Observer::addObservable(Observable* observable) {
	this->observables->insert(observable);
	observable->addObserver(this);
}

void Observer::removeObservable(Observable* observable) {
	this->observables->erase(observable);
}
