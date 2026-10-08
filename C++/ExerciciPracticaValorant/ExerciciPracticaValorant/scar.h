#pragma once
#include "arma.h"
class scar : public arma
{
public:
	scar();
	scar(string _nom, int _mal, int _municiomax) : arma(_municiomax, _nom, _mal) {};
	void Disparar()override;
};

