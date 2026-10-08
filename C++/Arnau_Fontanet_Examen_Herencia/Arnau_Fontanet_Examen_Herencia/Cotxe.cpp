#include "Cotxe.h"

Cotxe::Cotxe()
{
	marca = "Marca cotxe default";
	velocitat = 120;
	numPortes = 4;
}

void Cotxe::mostrarInfo()
{
	cout << "-----Info cotxe-----\nMarca: " << marca << " | Velocitat: " << velocitat << " | Numero de portes: " << numPortes << std::endl;
}
