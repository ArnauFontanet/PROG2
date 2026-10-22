#include "GESTOR.h"

Gestor::Gestor()
{
	string name;
	float pos[2] = { 0,0 };
	for (int i = 0; i < 2; i++) {
		cout << "Dime el nombre del jugador: " << std::endl;
		cin >> name;
		*characters[i] =  Character(pos,name);
	}
	cout << "Dime el nombre del impostor: " << std::endl;
	cin >> name;
	*characters[2] = Impostor(pos, name);

}

float Gestor::GetPosPlayerX(int i)
{
	return characters[i]->GetX();
}

float Gestor::GetPosPlayerY(int i)
{
	return characters[i]->GetY();
}

float Gestor::GetPosObjectX(int i)
{
	return obj[i].GetX();
}

float Gestor::GetPosObjectY(int i)
{
	return obj[i].GetY();
}
