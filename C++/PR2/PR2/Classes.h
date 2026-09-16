#pragma once
#include <iostream>
using namespace std;

class Cotxe
{
private:
	string marca = "DefMarca";
	string model = "DefModel";
	int anymatriculacio = 0;
	int cv = 0;
public:
	void SetAllAttr(string _marca, string _model, int _anymatriculacio, int _cv);
	void Accelerar();
	void Frenar();
	void Girar();
	void Info();
};

class Gos {
private:
	string nom;
	int edat;
	float pes;
	float altura;
public:
	void Correr();
	void Dormir();
};
    
class RobotVEX {
private:
    int rodes;
    int motors;
    int pisto;
    string nom;
    int velocitat;

public:
    void AgregarRoda(int num);
	void ActivarElevador(int motornum);
	void ActivarAutonoma();
	bool Colisio();
};

class JugadorBasquet {
private:
	string nom;
	float altura;
	float pes;
	int edat;
public:
	void Tirar();
	void Saltar();
};

