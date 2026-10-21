#pragma once
#include "Cotxe.h"
#include "Moto.h"
#include "Vehicle.h"
class Garatge
{
private:
	string nom;
	int velocitat;
	int execucions = 0;
	Vehicle Vehicle1;
	Vehicle Cotxe1;
	Vehicle Moto1;
	Vehicle* vehicles[3] = {&Vehicle1, &Cotxe1, &Moto1};
	Vehicle Vehicles[5] = {};

public:
	Garatge();
	Garatge(string _nom, int _velocitat) : nom(_nom), velocitat(_velocitat) {};
	void modificarVehicle(string marca, int velocitat);
	void mostrarVehicle();
};

