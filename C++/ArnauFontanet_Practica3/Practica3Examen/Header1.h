#pragma once
#include "Building.h";

class Warehouse : public Building
{
private:
	int madera, rocas, trigo;
public:
	Warehouse(string _nombre, int _madera, int _rocas, int _trigo) : Building(_nombre), madera(_madera), rocas(_rocas), trigo(_trigo) {};
	void printResources();
};

