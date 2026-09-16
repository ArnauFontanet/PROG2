#include <string>

using namespace std;

class Joc {
private:
    string nom;
    string creador;
    int llancament;
    string llenguatge;
    float preu;

public:
    Joc(string n, string c, int ll, string lg, float p);

    void visualitzar_dades();
    void modificar_llancament(int any);
    void fer_descompte(float desc);
    void modificar_preu(float p);
};