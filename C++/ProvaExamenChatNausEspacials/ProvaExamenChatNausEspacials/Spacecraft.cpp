#include "Spacecraft.h"

Spacecraft::Spacecraft()
{
	nom = "Default";
	anyFabricacio = 2200;
}

void Spacecraft::Accio()
{
	cout << "\nHas atacat amb la nau estandard" << std::endl;
}

string Spacecraft::GetNom()
{
	return nom;
}

int Spacecraft::GetAny()
{
	return anyFabricacio;
}
