#include "Circulo.h"
#include "Cuadrado.h"


int main()
{
    Figura figuras[3] = {Circulo(13, "Circulo 1"), Cuadrado(5,4, "Cuadrado 1"), Circulo(1, "Circulo 2")};
    for (int i = 0; i < 3; i++) {
        figuras[i].area();
        std::cout << "\nLa area es :" << figuras[i].GetArea();
    }
}
