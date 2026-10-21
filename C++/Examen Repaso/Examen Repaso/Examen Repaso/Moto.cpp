#include "Moto.h"

Moto::Moto()
{
	marca = "Default Car";
	velocidad = 0;
	tieneCasco = 0;
}

void Moto::MostrarInfo()
{
	cout << "Marca: " << marca;
	cout << "velocidad: " << velocidad;
	cout << "CASCO: " << tieneCasco;
}
