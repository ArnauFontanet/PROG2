#pragma once
#include "Vehiculo.h"
class Coche :public Vehiculo
{
private:
	int numeroPuertas;
public:
	Coche();
	Coche(string _marca, int _velocidad, int _numeroPuertas) : Vehiculo(_marca, _velocidad), numeroPuertas(_numeroPuertas) {};
	void MostrarInfo()override;

};

