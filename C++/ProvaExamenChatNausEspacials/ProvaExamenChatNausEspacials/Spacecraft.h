#pragma once
#include <iostream>
using namespace std;
class Spacecraft
{
protected:
	string nom;
	int anyFabricacio;

public:
	Spacecraft();
	Spacecraft(string _nom, int _anyFabricacio) : nom(_nom), anyFabricacio(_anyFabricacio) {};

	virtual void Accio();
	string GetNom();
	int GetAny();
};

