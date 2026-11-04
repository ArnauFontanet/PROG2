#include <iostream>
#include "MapController.h"
using namespace std;

int main()
{
    Cohete cohete1;
    Cohete cohete2;

    cohete1.setPosX(0);
    cohete1.setPosY(0);
    cohete2.setPosX(9);
    cohete2.setPosY(9);

    MapController mapa(&cohete1, &cohete2);

    int opcio = -1;

    while (opcio != 0) {
        cout << "========== MENU ==========" << endl;
        cout << "1) Crear capsula y anadirla a un cohete" << endl;
        cout << "2) Eliminar capsula" << endl;
        cout << "3) Transferir capsula entre cohetes" << endl;
        cout << "4) Cargar energia a un cohete" << endl;
        cout << "5) Determinar un destino para un cohete" << endl;
        cout << "6) Activar lanzamiento del cohete" << endl;
        cout << "7) Mover cohete en el mapa" << endl;
        cout << "8) Mostrar mapa" << endl;
        cout << "0) Salir" << endl;
        cout << "==========================" << endl;
        cout << "Elige una opcion: ";
        cin >> opcio;

        switch (opcio) {
        case 1: {
            int numCohete;
            float capacitat, energia;
            cout << "A que cohete quieres anadir la capsula? (1 o 2): ";
            cin >> numCohete;
            cout << "Capacidad maxima de la capsula (KWh): ";
            cin >> capacitat;
            cout << "Energia actual de la capsula (KWh): ";
            cin >> energia;

            Capsula* nuevaCap = new Capsula(capacitat, energia);

            if (numCohete == 1) {
                cohete1.afegirCapsula(nuevaCap);
            }
            else if (numCohete == 2) {
                cohete2.afegirCapsula(nuevaCap);
            }
            else {
                cout << "Numero de cohete no valido." << endl;
                delete nuevaCap;
            }
            break;
        }
        case 2: {
            int numCohete, posCapsula;
            cout << "De que cohete quieres eliminar la capsula? (1 o 2): ";
            cin >> numCohete;
            cout << "Posicion de la capsula a eliminar (0-9): ";
            cin >> posCapsula;

            if (numCohete == 1) {
                cohete1.eliminarCapsula(posCapsula);
            }
            else if (numCohete == 2) {
                cohete2.eliminarCapsula(posCapsula);
            }
            else {
                cout << "Numero de cohete no valido." << endl;
            }
            break;
        }
        case 3: {
            int origen, posCapsula;
            cout << "Desde que cohete quieres transferir? (1 o 2): ";
            cin >> origen;
            cout << "Posicion de la capsula a transferir (0-9): ";
            cin >> posCapsula;

            if (origen == 1) {
                cohete1.transferirCapsula(posCapsula, &cohete2);
            }
            else if (origen == 2) {
                cohete2.transferirCapsula(posCapsula, &cohete1);
            }
            else {
                cout << "Numero de cohete no valido." << endl;
            }
            break;
        }
        case 4: {
            int numCohete;
            float energia;
            cout << "A que cohete quieres cargar energia? (1 o 2): ";
            cin >> numCohete;
            cout << "Cuanta energia quieres cargar? (KWh): ";
            cin >> energia;

            if (numCohete == 1) {
                cohete1.carregar(energia);
            }
            else if (numCohete == 2) {
                cohete2.carregar(energia);
            }
            else {
                cout << "Numero de cohete no valido." << endl;
            }
            break;
        }
        case 5: {
            int numCohete;
            string destinacio;
            float distancia;
            cout << "A que cohete quieres asignar destino? (1 o 2): ";
            cin >> numCohete;
            cout << "Nombre del destino: ";
            cin >> destinacio;
            cout << "Distancia al destino (Km): ";
            cin >> distancia;

            if (numCohete == 1) {
                cohete1.objectiu(destinacio, distancia);
            }
            else if (numCohete == 2) {
                cohete2.objectiu(destinacio, distancia);
            }
            else {
                cout << "Numero de cohete no valido." << endl;
            }
            cout << "Destino asignado correctamente." << endl;
            break;
        }
        case 6: {
            int numCohete;
            cout << "Que cohete quieres lanzar? (1 o 2): ";
            cin >> numCohete;

            if (numCohete == 1) {
                cohete1.viatjar();
            }
            else if (numCohete == 2) {
                cohete2.viatjar();
            }
            else {
                cout << "Numero de cohete no valido." << endl;
            }
            break;
        }
        case 7: {
            int numCohete, x, y;
            cout << "Que cohete quieres mover? (1 o 2): ";
            cin >> numCohete;
            cout << "Nueva posicion X (0-9): ";
            cin >> x;
            cout << "Nueva posicion Y (0-9): ";
            cin >> y;

            mapa.moureCohete(numCohete, x, y);
            mapa.mostrarMapa();
            break;
        }
        case 8: {
            mapa.mostrarMapa();
            break;
        }
        case 0: {
            cout << "Saliendo del programa..." << endl;
            break;
        }
        default: {
            cout << "Opcion no valida." << endl;
            break;
        }
        }
    }

    return 0;
}
