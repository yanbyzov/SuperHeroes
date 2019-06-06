#pragma once
#include "Method_of_movment.h"
#include "Exception.h"

class DC_Method_of_movment :
	public Method_of_movment
{
private:
	char** name;
	int num_of_Methods;
public:
	DC_Method_of_movment();

	void set_name();

	void put();

	void save(ofstream &fout);

	void load(ifstream &fin);

	void info();

	~DC_Method_of_movment();
};

