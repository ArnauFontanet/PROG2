#include "Classes.h"


int main()
{
    Cotxe cotxe1;
    cotxe1.Accelerar();
    cotxe1.Frenar();
    cotxe1.Girar();
    cotxe1.Info();

    Gos gos1;
    gos1.Correr();
    gos1.Dormir();

    RobotVEX robotin;
    robotin.ActivarAutonoma();
    robotin.ActivarElevador(10);
    robotin.AgregarRoda(5);
    robotin.Colisio();

    JugadorBasquet LeBrownieJames;
    LeBrownieJames.Saltar();
    LeBrownieJames.Tirar();
}