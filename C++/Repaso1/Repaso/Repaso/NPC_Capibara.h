#pragma once
#include <iostream>
using namespace std;
class NPC_Capibara
{
private:
	string name = "Default";
	int edad = 0;
	int vida = 100;
	int rondas = 0;
	int daño = 5;
public:
	void SetAllAttr(string _name, int _edad, int _vida, int _rondas, int _daño);
	void RestarVida(int cantidad);
	bool GestionarVida();
	int GestionarEdad();
	int Atacar();
	string GetName();
	int GetVida();
};

