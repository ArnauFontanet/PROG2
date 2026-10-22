#pragma once
#include "string"
using namespace std;
class ObjInteractuable
{
private:
	float position[2];
	string name;
public:
	ObjInteractuable();
	ObjInteractuable(float _pos[2], string _name);
	float GetX();
	float GetY();
};

