#pragma once
#include "Vehicle.h"
class Moto : public Vehicle
{
private:
	bool teCasco;
public:
	Moto();
	Moto(string _marca, int _velocitat, bool _teCasco) : Vehicle(_marca, _velocitat), teCasco(_teCasco) {};
	void mostrarInfo()override;
	string GetCasco();
};

