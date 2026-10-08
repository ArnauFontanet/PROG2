#include "Moto.h"

Moto::Moto()
{
	marca = "Marca moto default";
	velocitat = 150;
	teCasco = true;
}

string Moto::GetCasco()
{
	string sino = "";
	if (teCasco == 0) {
		sino = "No";
	}
	else {
		sino = "Si";
	}
	return sino;
}

void Moto::mostrarInfo()
{
	cout << "-----Info Moto-----\nMarca: " << marca << " | Velocitat: " << velocitat << " | Porta casco: " << GetCasco() << std::endl;
}

