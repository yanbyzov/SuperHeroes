#pragma once
#include "Header.h"
#include "Method_of_movment.h"
#include "Superpower.h"
#include "Weapon.h"

class Superhero
{
public:
	friend class Multiki;
private:
	char name[N];
	Method_of_movment * MOM;
	Superpower * SP;
	Weapon * W;

public:

	Superhero();

	void save(string filename);

	void load(ifstream &fin);

	void set();

	void info();
};

