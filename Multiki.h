#pragma once
#include "Superhero.h"
#include "ArmyFactory.h"

class Multiki
{
public:
	Superhero * createArmy(ArmyFactory& factory);
};

