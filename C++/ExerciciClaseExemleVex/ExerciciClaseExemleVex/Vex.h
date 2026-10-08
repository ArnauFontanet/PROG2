#pragma once
#include "Motors.h"
class Vex
{
private:
	Motor motorsDavant;
	Motor motorsDarrera;
public:
	Vex();
	Vex(Motor _motorsDavant, Motor _motorsDarrera) : motorsDavant(_motorsDavant), motorsDarrera(_motorsDarrera) {};
	void Accelerar(float percentatge);
	void Frenar(float percentatge);
	void MostrarEstatRobot();
	void ModificarMotors(int posicio, int estat, int percentatge);
};

