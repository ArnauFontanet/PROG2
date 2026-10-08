#pragma once
#include <iostream>
using namespace std;
class Vehicle
{
protected:
	string marca;
	int velocitat;
public:
	Vehicle();
	Vehicle(string _marca, int _velocitat) : marca(_marca), velocitat(_velocitat) {};
	void accelerar();
	virtual void mostrarInfo();
	void SetMarca(string i);
	string GetMarca();
	void SetVelocitat(int a);
	int GetVelocitat();
};

