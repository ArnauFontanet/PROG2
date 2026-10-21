#pragma once
#include "Vehiculo.h"
class Garaje
{
private:
	Vehiculo vehiculo;
public:
	Garaje();
	Garaje(Vehiculo v) : vehiculo(v) {};
	void MostrarVehiculo();
	void ModificarVehiculo();
	void CambiarVehiculo(Vehiculo v2);
};

