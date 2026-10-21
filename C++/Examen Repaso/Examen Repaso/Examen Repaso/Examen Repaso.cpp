#include "Moto.h"
#include "Coche.h"
#include "Garaje.h"
int main()
{
	Coche c = Coche("Renault", 0, 4);
	Moto m = Moto("Honda",0,1);
	Garaje g = Garaje(m);

	g.MostrarVehiculo();
	g.CambiarVehiculo(c);
	g.MostrarVehiculo();
}
