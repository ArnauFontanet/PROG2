#include "NPC_Capibara.h"
void GenerarNombres(string _name[5]);
void Combate(NPC_Capibara cap1, NPC_Capibara cap2);
string Nombre();

int main() {
	string name[5];
	GenerarNombres(name);
	NPC_Capibara capis[5];
	for (int i = 0; i < 5; i++) {
		capis[i].SetAllAttr(name[i], 10, 100, 0, 5);
	}
	Combate(capis[0], capis[1]);
}

void GenerarNombres(string _name[5])
{
	for (int i = 0; i < 5; i++) {
		_name[i] = Nombre();
	}
}

string Nombre()
{
	cout << "Dime Nombre:" << endl;
	string nombre;
	cin >> nombre;
	return nombre;
}

void Combate(NPC_Capibara cap1, NPC_Capibara cap2) {
	cout << "Ataque realizado por capibara: " << cap1.GetName() << endl;
	cap2.RestarVida(cap1.Atacar());
	cout << "Vida restante del capibara " << cap2.GetName() << " : " << cap2.GetVida()<<endl;
}