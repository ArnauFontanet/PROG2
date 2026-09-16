#include <iostream>
#include "jugador.h"
void GenerarNoms(string _noms[5]);
void Show();
string Noms();

int main()
{
	string noms[5];
}

void GenerarNoms(string _noms[5]) {
	for (int i = 0; i < 5; i++) {
		_noms[i] = Noms();
	}
}

string Noms() {
	cout << " \nDiga'm un nom: ";
	string nom;
	cin >> nom;
	return nom;
}
