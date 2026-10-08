#pragma once
#include "arma.h"
class personatge
{
protected:
	int vida;
	int posicio[3];
	string nom;
	arma armaa;

public:
	void Moures(int x[3]);
	void Disparar();
	void RebreMal(arma armaenemic);
};

