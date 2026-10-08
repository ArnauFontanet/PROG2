#include "Vex.h"

Vex::Vex()
{
	motorsDavant = Motor();
	motorsDarrera = Motor();
}

void Vex::Accelerar(float percentatge)
{
	motorsDavant.Accelerar(percentatge);
	motorsDarrera.Accelerar(percentatge);
}

void Vex::MostrarEstatRobot()
{
	cout << "Motors de davant: " << motorsDavant.GetDegradacio() << "." << endl;
	cout << "Motors de darrera: " << motorsDarrera.GetDegradacio() << "." << endl;
}

void Vex::ModificarMotors(int posicio, int estat, int percentatge)
{
	if (posicio == 0) {
		motorsDavant.SetMotors(estat, percentatge);
	}
}
