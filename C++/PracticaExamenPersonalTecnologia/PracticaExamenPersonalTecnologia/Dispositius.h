#pragma once
#include <iostream>
using namespace std;
class Dispositius
{
protected:
	string nom;
	int botons;
	int bateria;
	bool camera;
public:
	Dispositius();
	Dispositius(string _nom, int _botons, int _bateria, bool _camera) : nom(_nom), botons(_botons), bateria(_bateria), camera(_camera) {};

	virtual void Engegar();
	string GetNom();
	int GetBotons();
	int GetBateria();
	bool GetCamera();
};

