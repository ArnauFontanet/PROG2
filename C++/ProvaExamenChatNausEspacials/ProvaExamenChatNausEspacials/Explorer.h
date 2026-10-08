#pragma once
#include "Spacecraft.h"
class Explorer : public Spacecraft
{
private:
	string planetaDesti;
	int numSensors;

public:
	Explorer();
	Explorer(string _nom, int _anyFabricacio, string _planetaDesti, int _numSensors) : Spacecraft(_nom, _anyFabricacio), planetaDesti(_planetaDesti), numSensors(_numSensors) {};

	void PrintExplorer();
	void Accio()override;
};

