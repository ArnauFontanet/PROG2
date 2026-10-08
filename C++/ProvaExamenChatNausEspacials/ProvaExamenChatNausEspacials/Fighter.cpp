#include "Fighter.h"

Fighter::Fighter()
{
	nom = "Fighter";
	anyFabricacio = 2150;
	mal = 100;
	vida = 500;
}

void Fighter::PrintFighter()
{
	cout << "\nNom: " << nom << " | Any Fabricacio: " << anyFabricacio << " | Mal: " << mal << " | Vida: " << vida << std::endl;
}

void Fighter::Accio()
{
	cout << "\nEl " << nom << " esta atacant : Ha fet " << mal << " de mal." << std::endl;
}


