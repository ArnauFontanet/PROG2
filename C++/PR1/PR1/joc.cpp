#include <iostream>
#include "joc.h"

using namespace std;

Joc::Joc(string n, string c, int ll, string lg, float p) {
    nom = n;
    creador = c;
    llancament = ll;
    llenguatge = lg;
    preu = p;
}

void Joc::visualitzar_dades() {
    cout << "Nom: " << nom << endl;
    cout << "Creador: " << creador << endl;
    cout << "Llançament: " << llancament << endl;
    cout << "Llenguatge: " << llenguatge << endl;
    cout << "Preu: " << preu << " euros\n\n" << endl;
}

void Joc::modificar_llancament(int any) {
    llancament = any;
}

void Joc::fer_descompte(float desc) {
    preu = preu - (preu*desc/100);
}

void Joc::modificar_preu(float p) {
    if (p >= 0) {
        preu = p;
    }
    else {
        cout << "El preu no pot ser negatiu" << endl;
    }
}