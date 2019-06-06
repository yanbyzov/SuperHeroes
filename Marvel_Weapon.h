#pragma once
#include "Weapon.h"
#include "Exception.h"

class Marvel_Weapon :
	public Weapon
{
private:
	char** name;
	int num_of_Weapon;
public:
	Marvel_Weapon();
	void set_name();

	void info();

	void save(ofstream &fout);

	void load(ifstream &fin);

	~Marvel_Weapon();
};

