#pragma once
#include "Capsula.h"
#include <iostream>
using namespace std;
class Cohete
{
private:
	int id;
	int pos[2];
	string desti;
	float distancia;
	int numCapsulas;
	Capsula* compartiment[10];

public:
	Cohete();
	Cohete(int _id, int _pos[2], string _desti, float _distancia, int _numCapsulas, Capsula* _compartiment[10]) : id(_id), desti(_desti), distancia(_distancia), numCapsulas(_numCapsulas) {
		for(int i = 0; i < numCapsulas; i++){
			compartiment[i] = _compartiment[i];
		}
		for (int i = 0; i < 2; i++) {
			pos[i] = _pos[i];
		}
	};
	bool afegirCapsula(Capsula* c);
	bool eliminarCapsula(int pos);
	bool disponibilitat();
	bool transferirCapsula(int pos, Cohete* desti);
	void objectiu(string destinacio, float distanciaa);
	bool validarDesti(float dist);
	bool viatjar();
	void carregar(float energia);
	int getPosX();
	int getPosY();
	void setPosX(int posicio);
	void setPosY(int posicio);


};

