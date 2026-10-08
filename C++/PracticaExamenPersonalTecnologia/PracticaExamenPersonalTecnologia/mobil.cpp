
#include "Mobil.h"

Mobil::Mobil()
{
	nom = "Mobil";
	botons = 3;
	bateria = 75;
	camera = true;
}

void Mobil::Engegar()
{
	cout << "Has engegat el movil." << std::endl;
}
