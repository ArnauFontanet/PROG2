#pragma once
#include <iostream>
using namespace std;
class Vehiculo
{
protected:
	string marca;
	int velocidad;
public:
	Vehiculo();
	Vehiculo(string _marca, int _velocidad) : marca(_marca), velocidad(_velocidad) {};
	void Acelerar();
	virtual void MostrarInfo();
	string GetMarca();
	int GetVelocidad();
	void SetMarca(string _marca);
	void SetVelocidad(int _velocidad);
};

