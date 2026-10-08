#include "Circulo.h"

float Circulo::area()
{
    areaTotal = 3.14159f * radio * radio;
    std::cout << "Circulo!!!" << endl;
    return areaTotal;
}
