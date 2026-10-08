#include "Fighter.h"
#include "Cargo.h"
#include "Explorer.h"

int main()
{
	Fighter Fighter1("Executioner", 2145, 100, 500);
	Fighter Fighter2("Devorador", 2500, 300, 100);
	Cargo Cargo1("Transporter", 2234, 500, false);
	Cargo Cargo2("Teleporter", 2750, 1000, true);
	Explorer Explorer1("InfoSpace", 2179, "Saturn", 15);
	Explorer Explorer2("Detector", 2400, "Pluto", 43);

	//cout << "\nNom Fighter1: " << Fighter1.GetNom() << " | Any: " << Fighter1.GetAny() << std::endl;
	//cout << "\nNom Cargo1: " << Cargo1.GetNom() << " | Any: " << Cargo1.GetAny() << std::endl;
	//cout << "\nNom Explorer1: " << Explorer1.GetNom() << " | Any: " << Explorer1.GetAny() << std::endl;

	Fighter1.PrintFighter();
	Fighter1.Accio();
	cout << "" << std::endl;
	Fighter2.PrintFighter();
	Fighter2.Accio();
	cout << "" << std::endl;
	Cargo1.PrintCargo();
	Cargo1.Accio();
	cout << "" << std::endl;
	Cargo2.PrintCargo();
	Cargo2.Accio();
	cout << "" << std::endl;
	Explorer1.PrintExplorer();
	Explorer1.Accio();
	cout << "" << std::endl;
	Explorer2.PrintExplorer();
	Explorer2.Accio();
	cout << "" << std::endl;

}
