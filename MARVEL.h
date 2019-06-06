#pragma once
#include "ArmyFactory.h"
#include "Marvel_Method_of_movment.h"
#include "Marvel_Superpower.h"
#include "Marvel_Weapon.h"

class MARVEL :
	public ArmyFactory
{
public:
	Method_of_movment * createMethod_of_movment();
	Superpower* createSuperpower();
	Weapon* createWeapon();
};

