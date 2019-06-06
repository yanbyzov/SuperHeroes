#pragma once
#include "ArmyFactory.h"
#include "DC_Method_of_movment.h"
#include "DC_Superpower.h"
#include "DC_Weapon.h"

class DC :
	public ArmyFactory
{
public:
	Method_of_movment * createMethod_of_movment();
	Superpower* createSuperpower();
	Weapon* createWeapon();
};

