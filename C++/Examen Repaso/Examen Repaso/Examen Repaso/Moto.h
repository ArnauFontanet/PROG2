#pragma once
#include "Vehiculo.h"
class Moto : public Vehiculo
{
private:
	bool tieneCasco = false;
public:
	Moto();
	Moto(string _marca, int _velocidad, bool _tieneCasco) : Vehiculo(_marca, _velocidad), tieneCasco(_tieneCasco) {};
	void MostrarInfo()override;
};

