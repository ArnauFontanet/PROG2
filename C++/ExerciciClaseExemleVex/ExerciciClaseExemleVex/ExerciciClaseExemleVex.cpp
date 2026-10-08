#include "Vex.h"
int main()
{
    Vex LordsOfTheRings = Vex(Motor(1, 100), Motor(1, 75));
    int accio;
    do {
        cout << "Quina accio vols fer?\n1. Accelerar\n2. Mostrar entrades\n3. Sortir" << endl;
        cin >> accio;
        if (accio == 1) {
            LordsOfTheRings.Accelerar(10);
        }
        else if( accio == 2){
            LordsOfTheRings.MostrarEstatRobot();
        }
        else {
            accio = -1;
        }
    } while (accio != -1);
}
