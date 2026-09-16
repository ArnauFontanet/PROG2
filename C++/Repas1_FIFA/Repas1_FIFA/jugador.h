#pragma once
#include <iostream>
using namespace std;

class jugador
{
private:
	string posicio;
	float altura;
	int gols;
	int temporades;
public:
	void SetAtributs(string _posicio, float _altura, int _gols, int _temporades);
	string GetPosicio();
	int GetGols();
	float GetAltura();
	int GetTemporades();
	int PartitGols();
};

