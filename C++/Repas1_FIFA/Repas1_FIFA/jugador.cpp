#include "jugador.h"

void jugador::SetAtributs(string _posicio, float _altura, int _gols, int _temporades)
{
	posicio = _posicio;
	altura = _altura;
	gols = _gols;
	temporades = _temporades;
}

string jugador::GetPosicio()
{
	cout << "Quina posicio es el jugador?";
	return string();
}

int jugador::GetGols()
{
	return 0;
}

float jugador::GetAltura()
{
	return 0.0f;
}

int jugador::GetTemporades()
{
	return 0;
}

int jugador::PartitGols()
{
	return 0;
}
