#pragma once
#include <iostream>
using namespace std;

class arma
{
protected:
	string nom;
	int municio;
	int municiomax;
	int mal;
	
public:
	arma();
	arma(int _municiomax, string _nom, int _mal) : municiomax(_municiomax), municio(_municiomax), nom(_nom), mal(_mal) {};

	virtual void Disparar();
	string GetName();
	int GetDamage();
	
};

