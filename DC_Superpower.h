#pragma once
#include "Superpower.h"
#include "Exception.h"

class DC_Superpower :
	public Superpower
{
private:
	char** name;
	int num_of_Superpower;
public:
	DC_Superpower();

	void set_name();

	void save(ofstream &fout);

	void load(ifstream &fin);

	void info();

	~DC_Superpower();
};

