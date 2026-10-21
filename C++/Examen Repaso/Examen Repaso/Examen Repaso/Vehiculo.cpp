#include "Vehiculo.h"

Vehiculo::Vehiculo()
{
	marca = "Default";
	velocidad = 0;
}

void Vehiculo::Acelerar()
{
	velocidad += 10;
}

void Vehiculo::MostrarInfo()
{
	cout << "Marca: " << marca;
	cout << "velocidad: " << velocidad;
}

string Vehiculo::GetMarca()
{
	return marca;
}

int Vehiculo::GetVelocidad()
{
	return velocidad;
}

void Vehiculo::SetMarca(string _marca)
{
	marca = _marca;
}

void Vehiculo::SetVelocidad(int _velocidad)
{
	velocidad = _velocidad;
}
