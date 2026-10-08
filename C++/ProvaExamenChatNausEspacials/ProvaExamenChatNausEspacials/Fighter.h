#pragma once
#include "Spacecraft.h"
class Fighter : public Spacecraft
{
private:
	int mal;
	int vida;

public:
	Fighter();
	Fighter(string _nom, int _anyFabricacio, int _mal, int _vida) : Spacecraft(_nom, _anyFabricacio), mal(_mal), vida(_vida){};

	void PrintFighter();
	void Accio()override;
};

