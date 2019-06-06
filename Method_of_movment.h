#pragma once
#include "Header.h"

class Method_of_movment
{
public:
	virtual void info() = 0;
	virtual void set_name() = 0;
	virtual void put() = 0;
	virtual void save(ofstream &fout) = 0;
	virtual void load(ifstream &fin) = 0;
	virtual ~Method_of_movment() {}
};