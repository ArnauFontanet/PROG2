#include "Dispositius.h"
class Mobil : public Dispositius
{
public:
	Mobil();
	Mobil(string _nom, int _botons, int _bateria, bool _camera) : Dispositius(_nom, _botons, _bateria, _camera) {};
	void Engegar()override;
};
