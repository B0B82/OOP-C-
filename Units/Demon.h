#ifndef DEMON_H
#define DEMON_H

#include "Unit.h"
#include "schema.h"

class Demon : public Unit {
	private:
		Demon(const std::string& name, int hp=int(SOLDIER), int dmg=int(SOLDIER_DMG));
		virtual ~Demon();
	public:
		Demon* invokeDemon(const std::string& name);



};

std::ostream& operator<<(std::ostream& out, Demon& demon);

#endif // DAEMON_H
