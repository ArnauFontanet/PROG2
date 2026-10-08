#pragma once
#include "Building.h"

class Temple : public Building
{
private:
	string dios;
	int sacerdotes;

public:
	Temple(string _nombre, int _sacerdotes, string _dios) : Building(_nombre), sacerdotes(_sacerdotes), dios(_dios) {};
	void printTemple();
};
