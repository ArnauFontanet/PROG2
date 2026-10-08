#include "Motors.h"

Motor::Motor()
{
	estat = 1;
	percentatge_degradacio = 100;
}

void Motor::Accelerar(float percentatge)
{
	std::cout << "Accelerant un :" << percentatge << "%." << endl;
	AjustarPercentatge(percentatge);
}

void Motor::Frenar(float percentatge)
{
	std::cout << "Frenant un :" << percentatge << "%." << endl;
	AjustarPercentatge(percentatge);
}

void Motor::AjustarPercentatge(float percentatge)
{
	float resultat = percentatge * 0.002;
	percentatge_degradacio = percentatge_degradacio - resultat;
}

float Motor::GetDegradacio() const
{
	return percentatge_degradacio;
}

void Motor::SetMotors(int _estat, int _percentatge)
{
	estat = _estat;
	percentatge_degradacio = _percentatge;
}

