#pragma once
#include "Building.h"


class House : public Building
{
private:
	int plantas, habitantes, servidores;
public:
	House(string _nombre, int _plantas, int _habitantes, int _servidores) : Building(_nombre), plantas(_plantas), habitantes(_habitantes), servidores(_servidores) {};
	void printHouse();
};
