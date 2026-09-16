#include <iostream>
#include "joc.h"

using namespace std;

int main() {
    Joc j("Doom", "id Software", 1993, "C", 20.0f);

    j.visualitzar_dades();

    j.fer_descompte(25);
    j.modificar_llancament(1994);
    j.visualitzar_dades();

    j.modificar_llancament(1978);
    j.modificar_preu(-300);

    j.visualitzar_dades();

    return 0;
}