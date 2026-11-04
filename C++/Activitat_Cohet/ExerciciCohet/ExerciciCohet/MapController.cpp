#include "MapController.h"

MapController::MapController(Cohete* c1, Cohete* c2)
{
	cohete1 = c1;
	cohete2 = c2;
	inicialitzarMapa();
}

void MapController::inicialitzarMapa()
{
	// Posar tot el mapa a 0 (buit)
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			mapa[i][j] = 0;
		}
	}
	// Posar els cohets al mapa (1 = cohete1, 2 = cohete2)
	mapa[cohete1->getPosX()][cohete1->getPosY()] = 1;
	mapa[cohete2->getPosX()][cohete2->getPosY()] = 2;
}

void MapController::mostrarMapa()
{
	// Actualitzar el mapa abans de mostrar-lo
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			mapa[i][j] = 0;
		}
	}
	mapa[cohete1->getPosX()][cohete1->getPosY()] = 1;
	mapa[cohete2->getPosX()][cohete2->getPosY()] = 2;

	cout << endl;
	cout << "===== MAPA =====" << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (mapa[i][j] == 1) {
				cout << "[C1]";
			}
			else if (mapa[i][j] == 2) {
				cout << "[C2]";
			}
			else {
				cout << "[ . ]";
			}
		}
		cout << endl;
	}
	cout << "================" << endl;
	cout << endl;
}

void MapController::moureCohete(int numCohete, int x, int y)
{
	// Validar que la posicio sigui dins del mapa
	if (x < 0 || x >= 10 || y < 0 || y >= 10) {
		cout << "Posicion fuera del mapa. Debe estar entre 0 y 9." << endl;
		return;
	}

	if (numCohete == 1) {
		cohete1->setPosX(x);
		cohete1->setPosY(y);
		cout << "Cohete 1 movido a la posicion (" << x << ", " << y << ")." << endl;
	}
	else if (numCohete == 2) {
		cohete2->setPosX(x);
		cohete2->setPosY(y);
		cout << "Cohete 2 movido a la posicion (" << x << ", " << y << ")." << endl;
	}
	else {
		cout << "Numero de cohete no valido." << endl;
		return;
	}

	// Despres de moure, comprovar si estan a prop
	comprovarTransferencia();
}

bool MapController::estanAprop()
{
	int distX = cohete1->getPosX() - cohete2->getPosX();
	int distY = cohete1->getPosY() - cohete2->getPosY();

	// Si estan a 1 casella de distancia o menys (adjacent)
	if (distX >= -1 && distX <= 1 && distY >= -1 && distY <= 1) {
		return true;
	}
	return false;
}

void MapController::comprovarTransferencia()
{
	if (estanAprop()) {
		cout << "Los dos cohetes estan cerca! Quieres transferir una capsula? (1 = Si, 0 = No): ";
		int opcio;
		cin >> opcio;
		if (opcio == 1) {
			int origen, posCapsula;
			cout << "Desde que cohete quieres transferir? (1 o 2): ";
			cin >> origen;
			cout << "Posicion de la capsula a transferir (0-9): ";
			cin >> posCapsula;

			if (origen == 1) {
				cohete1->transferirCapsula(posCapsula, cohete2);
			}
			else if (origen == 2) {
				cohete2->transferirCapsula(posCapsula, cohete1);
			}
			else {
				cout << "Numero de cohete no valido." << endl;
			}
		}
	}
}
