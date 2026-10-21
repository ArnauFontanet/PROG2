#include "Coche.h"

Coche::Coche()
{
	marca = "Default Car";
	velocidad = 0;
	numeroPuertas = 4;
}

void Coche::MostrarInfo()
{
	cout << "Marca: " << marca;
	cout << "velocidad: " << velocidad;
	cout << "Numero Puertas: " << numeroPuertas;

}
