#include "Capsula.h"

Capsula::Capsula()
{
	capacitatMax = 10000.00;
	energiaActual = 10000.00;
}

float Capsula::getEnergia()
{
	return energiaActual;
}

float Capsula::getCapacitat()
{
	return capacitatMax;
}

void Capsula::consumirEnergia(float consum)
{
	if (energiaActual - consum >= 0) {
		energiaActual -= consum;
		cout << "Se han consumido " << consum << " KWh de la capsula." << std::endl;
	}
	else {
		cout << "No hay energia suficiente para ese gasto." << std::endl;
	}
}

void Capsula::carregarEnergia(float quant)
{
	if ((energiaActual + quant) <= capacitatMax) {
		energiaActual += quant;
		cout << "Se han cargado " << quant << " KWh a la capsula." << std::endl;
	}
	else {
		cout << "Estas sobrecargando la capsula." << std::endl;
	}
}
