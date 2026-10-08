#include "Cargo.h"

Cargo::Cargo()
{
	nom = "Cargo";
	anyFabricacio = 2250;
	capacitatTones = 1000;
	esPerillosa = false;
}

void Cargo::PrintCargo()
{
	cout << "\nNom: " << nom << " | Any fabricacio: " << anyFabricacio << " | Capacitat (tonelades): " << capacitatTones << " | Es perillosa: ";
	if (esPerillosa == false) {
		cout << "No" << std::endl;
	}
	else {
		cout << "Si" << std::endl;
	}
}

void Cargo::Accio()
{
	cout << "\nAlerta: El " << nom << " esta movent " << capacitatTones << " tonelades de material." << std::endl;
}

