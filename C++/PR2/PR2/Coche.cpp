#include "Coche.h"

void Coche::SetAllAttr(string _marca, string _model, int _anymatriculacio, int _cv)
{
	marca = _marca;
	model = _model;
	anymatriculacio = _anymatriculacio;
	cv = _cv;
}

void Coche::Accelerar(int kmh)
{
	cout << "Estas accelerant...";
}

void Coche::Frenar()
{
	cout << "Estas frenant...";
}

void Coche::Girar()
{
	cout << "Estas girant...";
}

void Coche::Info()
{
	cout << "El cotxe va ser matriculat l'any %d i te %d cv.", & anymatriculacio, & cv;
}

