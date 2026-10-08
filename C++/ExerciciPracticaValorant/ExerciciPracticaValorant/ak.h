#pragma once
#include "arma.h"
class ak : public arma
{
public:
	ak();
	ak(string _nom, int _mal, int _municiomax) : arma(_municiomax, _nom, _mal) {};
	void Disparar()override;

};

