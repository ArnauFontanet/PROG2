#include "Explorer.h"

Explorer::Explorer()
{
	nom = "Explorer";
	anyFabricacio = 2085;
	planetaDesti = "Default";
	numSensors = 10;
}

void Explorer::PrintExplorer()
{
	cout << "\nNom: " << nom << " | Any fabricacio: " << anyFabricacio << " | Planeta desti: " << planetaDesti << " | Numero de sensors: " << numSensors << std::endl;
}

void Explorer::Accio()
{
	cout << "\nEl " << nom << " esta escanejant l'atmosfera de " << planetaDesti << " amb un total de " << numSensors << " sensors." << std::endl;
}
