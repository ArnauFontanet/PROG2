#pragma once
#include <iostream>
using namespace std;

class Figura
{
protected:
	std::string nombre;
	float areaTotal = 0;
public:
	Figura(const std::string& n) : nombre(n) { std::cout << "Constructor Padre llamado"; }
	virtual float area()const { return 0; }
	float GetArea();
};


