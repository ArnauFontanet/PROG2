#include "Garatge.h"
Garatge::Garatge()
{
	nom = "Pol respeta porfa es fa el que es pot";
	velocitat = 10;
}

void Garatge::modificarVehicle(string marca, int velocitat) {
	Vehicle1.SetMarca(marca);
	Vehicle1.SetVelocitat(velocitat);
	
}

void Garatge::mostrarVehicle() {
	
	Vehicle1.mostrarInfo();
}


