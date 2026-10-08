#include "Dispositius.h"

Dispositius::Dispositius()
{
	nom = "Default";
	botons = 5;
	bateria = 100;
	camera = false;
}

string Dispositius::GetNom()
{
	return nom;
}

int Dispositius::GetBotons()
{
	return botons;
}

int Dispositius::GetBateria()
{
	return bateria;
}

bool Dispositius::GetCamera()
{
	return camera;
}

