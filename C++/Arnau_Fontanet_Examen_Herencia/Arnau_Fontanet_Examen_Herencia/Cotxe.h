#pragma once
#include "Vehicle.h"
class Cotxe : public Vehicle
{
private:
	int numPortes;
public:
	Cotxe();
	Cotxe(string _marca, int _velocitat, int _numPortes) : Vehicle(_marca, _velocitat), numPortes(_numPortes) {};
	void mostrarInfo()override;
	
};

