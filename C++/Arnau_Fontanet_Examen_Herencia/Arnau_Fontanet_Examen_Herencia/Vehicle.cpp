#include "Vehicle.h"

Vehicle::Vehicle()
{
	marca = "Vehicle default";
	velocitat = 100;
}

void Vehicle::accelerar()
{
	velocitat += 10;
}

void Vehicle::mostrarInfo()
{
	cout << "Marca: " << marca << " | Velocitat: " << velocitat << std::endl;
}

void Vehicle::SetMarca(string i)
{
	marca = i;
}

string Vehicle::GetMarca()
{
	return marca;
}

void Vehicle::SetVelocitat(int a)
{
	velocitat = a;
}

int Vehicle::GetVelocitat()
{
	return velocitat;
}

