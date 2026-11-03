#include "Cohete.h"

Cohete::Cohete()
{
	id = 0000;
	pos[0] = 0;
	pos[1] = 0;
	desti = "Default";
	distancia = 0;
	numCapsulas = 0;
	for (int i = 0; i < 10; i++) {
		compartiment[i] = nullptr;
	}

}

bool Cohete::afegirCapsula(Capsula* c)
{
	bool afegit = false;
	for (int i = 0; i < 10; i++) {
		if (compartiment[i] == nullptr && afegit == false) {
			compartiment[i] = c;
			afegit = true;
			cout << "Capsula añadida en la posicion " << i << "." << std::endl;
			numCapsulas += 1;
			return true;
		}
	}
	cout << "No se ha anadido ninguna capsula." << std::endl;
	return false;
}

bool Cohete::eliminarCapsula(int pos)
{
	for (int i = 0; i < 10; i++) {
		if (i == pos) {
			compartiment[i] = nullptr;
			cout << "La capsula de la posicion " << i << " ha sido eliminada." << std::endl;
			numCapsulas -= 1;
			return true;
		}
	}
	cout << "No se ha eliminado ninguna capsula." << std::endl;
	return false;
}

bool Cohete::disponibilitat()
{
	for (int i = 0; i < 10; i++) {
		if (compartiment[i] == nullptr) {
			return true;
		}
	}
	return false;
}

bool Cohete::transferirCapsula(int pos, Cohete* desti)
{

	for (int i = 0; i < 10; i++) {
		if (i == pos && compartiment[i] != nullptr) {
			bool possible = desti->disponibilitat();
			if (possible == true) {
				float energia = compartiment[i]->getEnergia();
				float capacitat = compartiment[i]->getCapacitat();
				Capsula* capsulatransf = new Capsula(capacitat, energia);
				compartiment[i] = nullptr;
				desti->afegirCapsula(capsulatransf);
				cout << "Se ha transferido la capsula." << std::endl;
				return true;
			}
			else {
				cout << "No hay ningun espacio de capsula disponible en el cohete de destino." << std::endl;
			}
		}
	}
	return false;
}

void Cohete::objectiu(string destinacio, float distanciaa)
{
	desti = destinacio;
	distancia = distanciaa;
}

bool Cohete::validarDesti(float dist)
{
	float kmCohet = 0;
	for (int i = 0; i < 10; i++) {
		kmCohet += (compartiment[i]->getEnergia() * 10);
	}
	if (kmCohet >= dist) {
		return true;
	}
	else {
		return false;
	}
}

bool Cohete::viatjar()
{
	bool validat = validarDesti(distancia);
	if (validat == true) {
		for (int i = 10; i > 0; i--) {
			int energiaCapsula = 0;
			if (compartiment[i] != nullptr && distancia > 0) {
				if (distancia > (compartiment[i]->getEnergia() * 10)) {
					energiaCapsula = compartiment[i]->getEnergia();
					compartiment[i] = nullptr;
					distancia -= energiaCapsula * 10;
				}
				else {
					energiaCapsula = distancia / 10;
					compartiment[i]->consumirEnergia(energiaCapsula);
					//EXTRA autonomia final
					energiaCapsula = 0;
					for (int i = 0; i < 10; i++) {
						energiaCapsula += compartiment[i]->getEnergia();
					}
					cout << "Has llegado a destino con " << energiaCapsula * 10 << " km restantes de autonomia." << std::endl;
					return true;
				}
			}
		}
	}
	else {
		cout << "No hay suficiente energia para llegar al destino" << std::endl;
		return false;
	}
}

void Cohete::carregar(float energia)
{
	for (int i = 0; i < 10; i++) {
		//Queda energia
		if (energia > 0) {
			//Si esta en una capsula buida
			if (compartiment[i] == nullptr) {
				//Si s'omple la capsula plena
				if (energia > 10000) {
					Capsula* capsula1 = new Capsula(10000, 10000);
					afegirCapsula(capsula1);
				}
				//Si s'omple la capsula a mitjes
				else {
					Capsula* capsula2 = new Capsula(10000, energia);
					afegirCapsula(capsula2);
				}
			}
			//Si esta en una capsula a mitjes
			else if (compartiment[i]->getCapacitat() != compartiment[i]->getEnergia()) {
				//Si s'omple del tot la capsula
				if (energia > (compartiment[i]->getCapacitat() - compartiment[i]->getEnergia())) {
					float restant = compartiment[i]->getCapacitat() - compartiment[i]->getEnergia();
					compartiment[i]->carregarEnergia(restant);
					energia -= restant;
				}
				//Si s'omple a mitjes la capsula
				else {
					compartiment[i]->carregarEnergia(energia);
					energia = 0;
				}
			}
			//Si esta plena la capsula
			else {
				cout << "Capsula numero " << i << " ya estaba llena." << std::endl;
			}
		}		
	}
	cout<< "Carga completada" << std::endl;
}

int Cohete::getPosX()
{
	return pos[0];
}

int Cohete::getPosY()
{
	return pos[1];
}

void Cohete::setPosX(int posicio)
{
	pos[0] = posicio;
}

void Cohete::setPosY(int posicio)
{
	pos[1] = posicio;
}
