
#define CATCH_CONFIG_MAIN

#include "catch.hpp"


//#include "FastMM4Messages.pas"
//#include "FastMM4.pas"
//#include "FastMM4BCB.cpp"

#include "schema.h"

#include "Unit.h"
#include "Berserker.h"
#include "Rogue.h"
#include "Soldier.h"
#include "Vampire.h"
#include "Werewolf.h"
#include "Wizard.h"
#include "Healer.h"
#include "Priest.h"
#include "Warlock.h"
#include "Demon.h"
#include "Necromancer.h"

#include <time.h>
//#include <random> // для std::random_device и std::mt19937

//провека атаки



TEST_CASE( "berserker_", "attack" ) {
	time_t rawtime;
	 struct tm * timeinfo;

	 time ( &rawtime );
	 timeinfo = localtime ( &rawtime );
	 std::cout<<"\ncurrent time: "<< asctime(timeinfo) << std::endl;

	int rand = int(asctime(timeinfo))%10;

//	std::random_device rd;
//	std::mt19937 mersenne(rd()); // инициализируем Вихрь Мерсенна случайным стартовым числом

	Vampire *test = new Vampire("TEST"); // отсюда можно протестировать любого юнита

	Soldier* soldier = new Soldier("SOLDIER");
	Rogue* rogue = new Rogue("ROGUE");
	Berserker* berserker = new Berserker("BERSERKER");
	Vampire* vampire = new Vampire("VAMPIRE");
	Werewolf* werewolf = new Werewolf("WEREWOLF");
	Wizard* wizard = new Wizard("WIZARD");
	Healer* healer = new Healer("HEALER");
	Priest* priest = new Priest("PRIEST");
	Warlock* warlock = new Warlock("WARLOCK");
	Necromancer* necromancer = new Necromancer("NECROMANCER");



	std::cout << "\n---------------------------------------------------Start\n\n";
	std::cout << *soldier << "\n";
	std::cout << *rogue << "\n";
	std::cout << *berserker << "\n";
	std::cout << *vampire << "\n";
	std::cout << *werewolf << "\n";
	std::cout << *wizard << "\n";
	std::cout << *healer << "\n";
	std::cout << *priest << "\n";
	std::cout << *warlock << "\n";
	std::cout << *necromancer << "\n";
	std::cout << "\n---------------------------------------------------Loading\n\n";

	test->attack(soldier);
	test->attack(rogue);
	test->attack(berserker);
	test->attack(vampire);
	test->attack(werewolf);
	test->attack(wizard);
	test->attack(healer);
	test->attack(priest);
	test->attack(warlock);
	test->attack(necromancer);

	std::cout << "\n---------------------------------------------------1st round\n\n";
	std::cout << *soldier << "\n";
	std::cout << *rogue << "\n";
	std::cout << *berserker << "\n";
	std::cout << *vampire << "\n";
	std::cout << *werewolf << "\n";
	std::cout << *wizard << "\n";
	std::cout << *healer << "\n";
	std::cout << *priest << "\n";
	std::cout << *warlock << "\n";
	std::cout << *necromancer << "\n";
	std::cout << "\n---------------------------------------------------end 1st round\n\n";

////	werewolf->transformW_H();
////	werewolf->transformW_H();
//	werewolf->bite(soldier);
//	vampire->bite(rogue);
//	soldier->bite(vampire);
////	werewolf->transform();
//	vampire->attack(werewolf);
////	werewolf->transformW_H();

	//проверка на трансформацию в волка и обратно

	werewolf->transformW_H();
	werewolf->transformW_H();

//	soldier->bite(berserker);
//	rogue->bite(wizard);
	necromancer->changeSpell(FIREBALL_);
	necromancer->cast(vampire);
	necromancer->attack(soldier);

//	necromancer->keepTrackOf();
	std::cout << std::endl;
//	Demon* demon =  warlock->invokeDemon("Gogi");
//	demon->attack(soldier);

	std::cout << "\n---------------------------------------------------2nd round\n\n";
	std::cout << *soldier << "\n";
	std::cout << *rogue << "\n";
	std::cout << *berserker << "\n";
	std::cout << *vampire << "\n";
	std::cout << *werewolf << "\n";
	std::cout << *wizard << "\n";
	std::cout << *healer << "\n";
	std::cout << *priest << "\n";
	std::cout << *warlock << "\n";
//	std::cout << *demon << "\n";
	std::cout << *necromancer << "\n";
	std::cout << "\n---------------------------------------------------end 2nd round\n\n";
	std::cout << "\n---------------------------------------------------End\n\n";
	std::cout << "Unit SUM: " << Unit::getCount()  << "\n";
}

// проверка статов
TEST_CASE( "berserker", "state" ) {
	Berserker *test = new Berserker("TEST");

	REQUIRE(test->getState()->getHp() > 0);
	REQUIRE(test->getState()->getHp() <= int(BERSERKER));
	REQUIRE(test->getState()->getHpMax() == int(BERSERKER));
	REQUIRE(test->getState()->getDmg() == int(BERSERKER_DMG));
}

TEST_CASE( "rogue", "state" ) {
	Rogue *test = new Rogue("TEST");

	REQUIRE( test->getState()->getHp() > 0 );
	REQUIRE( test->getState()->getHp() <= int(ROGUE));
	REQUIRE( test->getState()->getHpMax() == int(ROGUE) );
	REQUIRE( test->getState()->getDmg() == int(ROGUE_DMG) );
}

TEST_CASE( "soldier", "state" ) {
	Soldier *test = new Soldier("TEST");

	REQUIRE(test->getState()->getHp() > 0);
	REQUIRE(test->getState()->getHp() <= int(SOLDIER));
	REQUIRE(test->getState()->getHpMax() == int(SOLDIER));
	REQUIRE(test->getState()->getDmg() == int(SOLDIER_DMG));
}

TEST_CASE( "vampire", "state" ) {
	Vampire *test = new Vampire("TEST");

	REQUIRE(test->getState()->getHp() > 0);
	REQUIRE(test->getState()->getHp() <= int(VAMPIRE));
	REQUIRE(test->getState()->getHpMax() == int(VAMPIRE));
	REQUIRE(test->getState()->getDmg() == int(VAMPIRE_DMG));
}

TEST_CASE( "werewolf", "state" ) {
	Werewolf*test = new Werewolf("TEST");

	REQUIRE(test->getState()->getHp() > 0);
	REQUIRE(test->getState()->getHp() <= int(WEREWOLF));
	REQUIRE(test->getState()->getHpMax() == int(WEREWOLF));
	REQUIRE(test->getState()->getDmg() == int(WEREWOLF_DMG));
}

TEST_CASE( "wizard", "state" ) {
	Wizard*test = new Wizard("TEST");

	REQUIRE(test->getState()->getHp() > 0);
	REQUIRE(test->getState()->getHp() <= int(WIZARD));
	REQUIRE(test->getState()->getHpMax() == int(WIZARD));
	REQUIRE(test->getState()->getDmg() == int(WIZARD_DMG));
//	REQUIRE(test->getState()->getMana() == int(WIZARD_MANA));
//	REQUIRE(test->getState()->getMaxMana() == int(WIZARD_MANA));
}
