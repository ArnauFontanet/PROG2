#pragma once
#include <iostream>
using namespace std;
class Motor
{
private:
	int estat;
	float percentatge_degradacio;
public:
	Motor();
	Motor(int _estat, float _percentatge_degradacio) : estat(_estat), percentatge_degradacio(_percentatge_degradacio) {};
	void Accelerar(float percentatge);
	void Frenar(float percentatge);
	void AjustarPercentatge(float percentatge);
	float GetDegradacio() const;
	void SetMotors(int _estat, int _percentatge);
};