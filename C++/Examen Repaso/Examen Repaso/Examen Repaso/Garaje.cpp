#include "Garaje.h"

Garaje::Garaje()
{
	vehiculo = Vehiculo();
}

void Garaje::MostrarVehiculo()
{
	cout << "Marca: " << vehiculo.GetMarca() << "velocidad: " << vehiculo.GetVelocidad()<<endl;
}

void Garaje::ModificarVehiculo()
{
	cout << "Que quieres modificar 1. Marca, 2. Velocidad";
	int temp; 
	cin >> temp;
	if (temp == 1)
	{
		cout << "Dime la nueva marca" << endl;
		string _marca;
		cin >> _marca;
		vehiculo.SetMarca(_marca);
	}
	else
	{
		cout << "Dime la nueva velocidad" << endl;
		int vel;
		cin >> vel;
		vehiculo.SetVelocidad(vel);
	}
}

void Garaje::CambiarVehiculo(Vehiculo v2)
{
	vehiculo = v2;
}
