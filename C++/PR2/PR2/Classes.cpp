#include "Classes.h"

void Cotxe::SetAllAttr(string _marca, string _model, int _anymatriculacio, int _cv)
{
	marca = _marca;
	model = _model;
	anymatriculacio = _anymatriculacio;
	cv = _cv;
}

void Cotxe::Accelerar()
{
	cout << "Estas accelerant..." << endl;
}

void Cotxe::Frenar()
{
	cout << "Estas frenant..." << endl;
}

void Cotxe::Girar()
{
	cout << "Estas girant..." << endl;
}

void Cotxe::Info()
{
	cout << "El cotxe de la marca " << marca << " model " << model << "va ser matriculat l'any " << anymatriculacio << " i te " << cv << " cv."  << endl;
}


void Gos::Correr()
{
	cout << "El gos s'ha posat a correr..." << endl;
}

void Gos::Dormir()
{
	cout << "El gos s'ha posat a dormir..."<<endl;

}

void RobotVEX::AgregarRoda(int num)
{
	cout << "Has entrat a AgregarRoda del Robot VEX amb num: " << num << endl;
}

void RobotVEX::ActivarElevador(int motornum)
{
	cout << "Has entrat a ActivarElevador del Robot VEX amb motornum: " << motornum << endl;
}

void RobotVEX::ActivarAutonoma()
{
	cout << "Has entrat a ActivarAutonoma del Robot VEX." << endl;
}

bool RobotVEX::Colisio()
{
	cout << "Has entrat a Colisio del Robot VEX." << endl;
	return false;
}

void JugadorBasquet::Tirar()
{
	cout << "El jugador " << nom << " ha tirat." << endl;
}

void JugadorBasquet::Saltar()
{
	cout << "El jugador " << nom << " ha saltat." << endl;
}


