#pragma once
#include "Cohete.h"
using namespace std;
class MapController
{
private:
	int mapa[10][10];
	Cohete* cohete1;
	Cohete* cohete2;

public:
	MapController(Cohete* c1, Cohete* c2);
	void inicialitzarMapa();
	void mostrarMapa();
	void moureCohete(int numCohete, int x, int y);
	bool estanAprop();
	void comprovarTransferencia();
};
