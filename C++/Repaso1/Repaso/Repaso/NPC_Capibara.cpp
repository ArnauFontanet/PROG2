#include "NPC_Capibara.h"



void NPC_Capibara::SetAllAttr(string _name, int _edad, int _vida, int _rondas, int _daño)
{
	name = _name;
	edad = _edad;
	vida = _vida;
	rondas = _rondas;
	daño = _daño;
}

void NPC_Capibara::RestarVida(int cantidad)
{
	vida -= cantidad;
	if (GestionarVida()) {
		cout << "Estas muerto NPC" << endl;
	}
	else {
		if (GestionarEdad()) {
			edad += 1;
		}
		else {
			cout << "No aumentas de edad" << endl;
		}
	}
}

bool NPC_Capibara::GestionarVida()
{
	return vida <= 0;
}

int NPC_Capibara::GestionarEdad()
{
	return vida > 80;
}

int NPC_Capibara::Atacar()
{
	int cantidad;
	cout << "\nCuanto daño infligir: ";
	cin >> cantidad;
	return cantidad;
}

string NPC_Capibara::GetName()
{
	return name;
}

int NPC_Capibara::GetVida()
{
	return vida;
}
