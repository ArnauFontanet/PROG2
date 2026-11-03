#pragma once
#include <iostream>
using namespace std;
class Capsula
{
private:
	float capacitatMax;
	float energiaActual;
public:
	Capsula();
	Capsula(float _capacitatMax, float _energiaActual) : capacitatMax(_capacitatMax), energiaActual(_energiaActual) {};
	float getEnergia();
	float getCapacitat();
	void consumirEnergia(float consum);
	void carregarEnergia(float quant);
};

