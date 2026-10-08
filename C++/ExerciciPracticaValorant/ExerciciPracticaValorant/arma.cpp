#include "arma.h"

arma::arma()
{
	municiomax = 10;
	municio = 10;
	nom = "Default";
	mal = 1;
}

void arma::Disparar()
{
	cout << "Has disparat mode estandard" << endl;
}

string arma::GetName()
{
	return nom;
}

int arma::GetDamage()
{
	return mal;
}
