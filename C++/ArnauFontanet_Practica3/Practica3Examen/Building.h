#pragma once
#include <iostream>
using namespace std;
class Building
{
protected:
	string nombre;
public:
	Building(const std::string& n) : nombre(n) { std::cout << "Constructor Padre llamado"; }
	string getName();


};

