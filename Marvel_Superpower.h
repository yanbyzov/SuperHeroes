#pragma once
#include "Superpower.h"
#include "Exception.h"

class Marvel_Superpower :
	public Superpower
{
private:
	char** name;
	int num_of_Superpower;
public:
	Marvel_Superpower();

	void set_name();

	void save(ofstream &fout);

	void load(ifstream &fin);

	void info();

	~Marvel_Superpower();
};

