#include "MARVEL.h"


Method_of_movment * MARVEL::createMethod_of_movment()
{
	return new Marvel_Method_of_movment;
}

Superpower * MARVEL::createSuperpower()
{
	return new Marvel_Superpower;
}

Weapon * MARVEL::createWeapon()
{
	return new Marvel_Weapon;
}
