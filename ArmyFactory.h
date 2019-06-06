#pragma once
#include "Method_of_movment.h"
#include "Superpower.h"
#include "Weapon.h"

class ArmyFactory
{
public:
	virtual Method_of_movment* createMethod_of_movment() = 0;
	virtual Superpower* createSuperpower() = 0;
	virtual Weapon* createWeapon() = 0;
	virtual ~ArmyFactory() {}
};