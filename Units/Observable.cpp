#include "Observable.h"

Observable::Observable(const char* name) : name(name) {
	this->observers = new std::set<Observer*>();
}

Observable::~Observable() {
	std::set<Observer*>::iterator it = this->observers->begin();

	for (; it != this->observers->end(); it++ ) {
		(*it)->removeObservable(this);
	}
	delete(this->observers);
}

const char* Observable::getName() {
	return this->name;
}

void Observable::reportObservers() {
	std::set<Observer*>::iterator it = this->observers->begin();

	std::cout << this->name << " observers:" << std::endl;
	for (; it != this->observers->end(); it++ ) {
		std::cout << "-- " << (*it)->getName() << std::endl;
	}
}

void Observable::receiveNotification(Observer* observer) {
	std::cout << this->name << " got notification from ";
	std::cout << observer->getName() << std::endl;
}

void Observable::addObserver(Observer* observer) {
	this->observers->insert(observer);
}

void Observable::removeObserver(Observer* observer) {
	this->observers->erase(observer);
}
