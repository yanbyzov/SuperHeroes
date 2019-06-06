#pragma once
#include "Weapon.h"
#include "Exception.h"

class DC_Weapon :
	public Weapon
{
private:
	char** name;
	int num_of_Weapon;
public:
	DC_Weapon();

	void set_name();

	void info();

	void save(ofstream &fout);

	void load(ifstream &fin);

	~DC_Weapon();
};

