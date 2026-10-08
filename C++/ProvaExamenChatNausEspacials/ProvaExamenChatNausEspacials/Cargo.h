#pragma once
#include "Spacecraft.h"
class Cargo : public Spacecraft
{
private:
	double capacitatTones;
	bool esPerillosa;

public:
	Cargo();
	Cargo(string _nom, int _anyFabricacio, double _capacitatTones, bool _esPerillosa) : Spacecraft(_nom, _anyFabricacio), capacitatTones(_capacitatTones), esPerillosa(_esPerillosa) {};

	void PrintCargo();
	void Accio()override;
};

