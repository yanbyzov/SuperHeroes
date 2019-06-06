#include "Multiki.h"

Superhero * Multiki::createArmy(ArmyFactory & factory)
{
	Superhero * p = new Superhero;
	p->MOM = factory.createMethod_of_movment();
	p->SP = factory.createSuperpower();
	p->W = factory.createWeapon();
	return p;
}
