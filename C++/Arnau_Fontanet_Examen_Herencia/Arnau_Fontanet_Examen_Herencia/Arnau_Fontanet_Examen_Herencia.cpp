#include "Garatge.h"
int main()
{
	Cotxe Cotxe1("Citroen", 90, 5);
	Moto Moto1("Voge", 140, false);
	Garatge Garatge1;

	Cotxe1.mostrarInfo();
	Garatge1.modificarVehicle(Cotxe1.GetMarca(), Cotxe1.GetVelocitat());
	Garatge1.mostrarVehicle();
	Moto1.mostrarInfo();
	Garatge1.modificarVehicle(Moto1.GetMarca(), Moto1.GetVelocitat());
	Garatge1.mostrarVehicle();
}
