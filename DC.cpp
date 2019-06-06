#include "DC.h"

Method_of_movment * DC::createMethod_of_movment()
{
	return new DC_Method_of_movment;
}

Superpower * DC::createSuperpower()
{
	return new DC_Superpower;
}

Weapon * DC::createWeapon()
{
	return new DC_Weapon;
}