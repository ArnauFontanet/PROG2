#include "personatge.h"

void personatge::Moures(int x[3])
{
	posicio[0] += x[0];
	posicio[1] += x[1];
	posicio[2] += x[2];
	cout << "T'has mogut a la posicio: X: " << posicio[0] << " | Y: " << posicio[1] << " | Z: " << posicio[2] << "." << std::endl;
}

void personatge::Disparar()
{
	arma.Disparar();
}

void personatge::RebreMal(arma armaEnemic)
{
	vida -= armaEnemic.getDamage();
	if (vida <= 0) {
		cout << "Has mort." << std::endl;
	}
	else {
		cout << "Estat de vida: " << vida << std::endl;
	}
}
